#include "../include/ast.h"
#include "../include/define.h"
#include "../include/utils.h"
#include <cassert>

void reset_id_counter(){
    g_id_counter = 0;
}

string gen_id_name(){
    return "v" + to_string(g_id_counter++);
}
 
static string s_table_name;

Node* generate_ast_node_by_type(IRTYPE type){
    #define DECLARE_CASE(classname) \
    if (type == k##classname) return new classname();

    ALLCLASS(DECLARE_CASE);
    #undef DECLARE_CASE
    return NULL;
}

NODETYPE get_nodetype_by_string(string s){
    #define DECLARE_CASE(datatypename) \
    if(s == #datatypename) return k##datatypename;

    ALLCLASS(DECLARE_CASE);

    #undef DECLARE_CASE
    return kUnknown;
}

string get_string_by_nodetype(NODETYPE tt){
    #define DECLARE_CASE(datatypename) \
    if(tt == k##datatypename) return string(#datatypename);

    ALLCLASS(DECLARE_CASE);

    #undef DECLARE_CASE
    return string("");
}

string get_string_by_datatype(DATATYPE tt){
    #define DECLARE_CASE(datatypename) \
    if(tt == k##datatypename) return string(#datatypename);

    ALLDATATYPE(DECLARE_CASE);

    #undef DECLARE_CASE
    return string("");
}

DATATYPE get_datatype_by_string(string s){
    #define DECLARE_CASE(datatypename) \
    if(s == #datatypename) return k##datatypename;

    ALLDATATYPE(DECLARE_CASE);

    #undef DECLARE_CASE
    return kDataWhatever;
}

void deep_delete(IR * root){
    if(root->left_) deep_delete(root->left_);
    if(root->right_) deep_delete(root->right_);
    
    if(root->op_) delete root->op_;

    delete root;
}

IR * deep_copy(const IR * root){
    IR * left = NULL, * right = NULL, * copy_res;

    if(root->left_) left = deep_copy(root->left_);
    if(root->right_) right = deep_copy(root->right_);

    copy_res = new IR(root, left, right);

    return copy_res;

}


string IR::to_string(){
    auto res = to_string_core();
    trim_string(res);
    return res;
}

string IR::to_string_core(){
    //cout << get_string_by_nodetype(this->type_) << endl;
    switch(type_){
	case kIntLiteral: return std::to_string(int_val_);
	case kFloatLiteral: return std::to_string(float_val_);
	case kIdentifier: return str_val_;
	case kStringLiteral: 
		if (str_val_[0] == '\'' &&  str_val_[str_val_.size()-1] == '\''){
			return str_val_;
		}

		else{
			return string("'") + str_val_ + string("'");
		}		
	}

    string res;
    
    if( op_!= NULL ){
        res += op_->prefix_ + " ";
    }
    if(left_ != NULL)
        res += left_->to_string_core() + " ";
    if( op_!= NULL)
        res += op_->middle_ + " ";
    if(right_ != NULL)
        res += right_->to_string_core() + " ";
    if(op_!= NULL)
        res += op_->suffix_;

    return res;
}


IR* Node::translate(vector<IR *> &v_ir_collector){
    return NULL;
}

/* insert implementation here: */
IR*  Program::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

		auto tmp1= SAFETRANSLATE(stmtlist_);
		res = new IR(kProgram, OP3("","",""), tmp1, NULL, case_idx_);

	TRANSLATEEND
}

void Program::deep_delete(){
	SAFEDELETE(stmtlist_);
	delete this;
}

void Program::generate(){
	GENERATESTART(1)

		stmtlist_ = new Stmtlist();
		stmtlist_->generate();

	GENERATEEND
}

IR*  Stmtlist::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(stmt_);
		auto tmp2= SAFETRANSLATE(stmtlist_);
		res = new IR(kStmtlist, OP3("",";",""), tmp1, tmp2, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(stmt_);
		res = new IR(kStmtlist, OP3("",";",""), tmp1, NULL, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void Stmtlist::deep_delete(){
	SAFEDELETE(stmt_);
	SAFEDELETE(stmtlist_);
	delete this;
}

void Stmtlist::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		stmt_ = new Stmt();
		stmt_->generate();
		stmtlist_ = new Stmtlist();
		stmtlist_->generate();
		CASEEND
		CASESTART(1)
		stmt_ = new Stmt();
		stmt_->generate();
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  Stmt::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(create_stmt_);
		res = new IR(kStmt, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(drop_stmt_);
		res = new IR(kStmt, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(2)
		auto tmp1= SAFETRANSLATE(select_stmt_);
		res = new IR(kStmt, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(3)
		auto tmp1= SAFETRANSLATE(update_stmt_);
		res = new IR(kStmt, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(4)
		auto tmp1= SAFETRANSLATE(insert_stmt_);
		res = new IR(kStmt, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(5)
		auto tmp1= SAFETRANSLATE(alter_stmt_);
		res = new IR(kStmt, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void Stmt::deep_delete(){
	SAFEDELETE(create_stmt_);
	SAFEDELETE(drop_stmt_);
	SAFEDELETE(select_stmt_);
	SAFEDELETE(update_stmt_);
	SAFEDELETE(insert_stmt_);
	SAFEDELETE(alter_stmt_);
	delete this;
}

void Stmt::generate(){
	GENERATESTART(6)

	SWITCHSTART
		CASESTART(0)
		create_stmt_ = new CreateStmt();
		create_stmt_->generate();
		CASEEND
		CASESTART(1)
		drop_stmt_ = new DropStmt();
		drop_stmt_->generate();
		CASEEND
		CASESTART(2)
		select_stmt_ = new SelectStmt();
		select_stmt_->generate();
		CASEEND
		CASESTART(3)
		update_stmt_ = new UpdateStmt();
		update_stmt_->generate();
		CASEEND
		CASESTART(4)
		insert_stmt_ = new InsertStmt();
		insert_stmt_->generate();
		CASEEND
		CASESTART(5)
		alter_stmt_ = new AlterStmt();
		alter_stmt_->generate();
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  CreateStmt::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(create_table_stmt_);
		res = new IR(kCreateStmt, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(create_index_stmt_);
		res = new IR(kCreateStmt, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(2)
		auto tmp1= SAFETRANSLATE(create_trigger_stmt_);
		res = new IR(kCreateStmt, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(3)
		auto tmp1= SAFETRANSLATE(create_view_stmt_);
		res = new IR(kCreateStmt, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void CreateStmt::deep_delete(){
	SAFEDELETE(create_table_stmt_);
	SAFEDELETE(create_index_stmt_);
	SAFEDELETE(create_trigger_stmt_);
	SAFEDELETE(create_view_stmt_);
	delete this;
}

void CreateStmt::generate(){
	GENERATESTART(4)

	SWITCHSTART
		CASESTART(0)
		create_table_stmt_ = new CreateTableStmt();
		create_table_stmt_->generate();
		CASEEND
		CASESTART(1)
		create_index_stmt_ = new CreateIndexStmt();
		create_index_stmt_->generate();
		CASEEND
		CASESTART(2)
		create_trigger_stmt_ = new CreateTriggerStmt();
		create_trigger_stmt_->generate();
		CASEEND
		CASESTART(3)
		create_view_stmt_ = new CreateViewStmt();
		create_view_stmt_->generate();
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  DropStmt::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(drop_index_stmt_);
		res = new IR(kDropStmt, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(drop_table_stmt_);
		res = new IR(kDropStmt, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(2)
		auto tmp1= SAFETRANSLATE(drop_trigger_stmt_);
		res = new IR(kDropStmt, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(3)
		auto tmp1= SAFETRANSLATE(drop_view_stmt_);
		res = new IR(kDropStmt, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void DropStmt::deep_delete(){
	SAFEDELETE(drop_index_stmt_);
	SAFEDELETE(drop_table_stmt_);
	SAFEDELETE(drop_trigger_stmt_);
	SAFEDELETE(drop_view_stmt_);
	delete this;
}

void DropStmt::generate(){
	GENERATESTART(4)

	SWITCHSTART
		CASESTART(0)
		drop_index_stmt_ = new DropIndexStmt();
		drop_index_stmt_->generate();
		CASEEND
		CASESTART(1)
		drop_table_stmt_ = new DropTableStmt();
		drop_table_stmt_->generate();
		CASEEND
		CASESTART(2)
		drop_trigger_stmt_ = new DropTriggerStmt();
		drop_trigger_stmt_->generate();
		CASEEND
		CASESTART(3)
		drop_view_stmt_ = new DropViewStmt();
		drop_view_stmt_->generate();
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  AlterStmt::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

		auto tmp1= SAFETRANSLATE(table_name_);
		auto tmp2= SAFETRANSLATE(alter_action_);
		res = new IR(kAlterStmt, OP3("ALTER TABLE","",""), tmp1, tmp2, case_idx_);

	TRANSLATEEND
}

void AlterStmt::deep_delete(){
	SAFEDELETE(table_name_);
	SAFEDELETE(alter_action_);
	delete this;
}

void AlterStmt::generate(){
	GENERATESTART(1)

		table_name_ = new TableName();
		table_name_->generate();
		alter_action_ = new AlterAction();
		alter_action_->generate();

	GENERATEEND
}

IR*  SelectStmt::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(select_no_parens_);
		res = new IR(kSelectStmt, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(select_with_parens_);
		res = new IR(kSelectStmt, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void SelectStmt::deep_delete(){
	SAFEDELETE(select_no_parens_);
	SAFEDELETE(select_with_parens_);
	delete this;
}

void SelectStmt::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		select_no_parens_ = new SelectNoParens();
		select_no_parens_->generate();
		CASEEND
		CASESTART(1)
		select_with_parens_ = new SelectWithParens();
		select_with_parens_->generate();
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  SelectWithParens::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(select_no_parens_);
		res = new IR(kSelectWithParens, OP3("(",")",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(select_with_parens_);
		res = new IR(kSelectWithParens, OP3("(",")",""), tmp1, NULL, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void SelectWithParens::deep_delete(){
	SAFEDELETE(select_no_parens_);
	SAFEDELETE(select_with_parens_);
	delete this;
}

void SelectWithParens::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		select_no_parens_ = new SelectNoParens();
		select_no_parens_->generate();
		CASEEND
		CASESTART(1)
		select_with_parens_ = new SelectWithParens();
		select_with_parens_->generate();
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  SelectNoParens::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

		auto tmp1= SAFETRANSLATE(opt_with_clause_);
		auto tmp2= SAFETRANSLATE(select_clause_list_);
		auto tmp3= SAFETRANSLATE(opt_order_clause_);
		auto tmp4= SAFETRANSLATE(opt_limit_clause_);
		auto tmp5 = new IR(kUnknown0, OP3("","",""), tmp1, tmp2);
		PUSH(tmp5);
		auto tmp6 = new IR(kUnknown1, OP3("","",""), tmp5, tmp3);
		PUSH(tmp6);
		res = new IR(kSelectNoParens, OP3("","",""), tmp6, tmp4, case_idx_);

	TRANSLATEEND
}

void SelectNoParens::deep_delete(){
	SAFEDELETE(opt_with_clause_);
	SAFEDELETE(select_clause_list_);
	SAFEDELETE(opt_order_clause_);
	SAFEDELETE(opt_limit_clause_);
	delete this;
}

void SelectNoParens::generate(){
	GENERATESTART(1)

		opt_with_clause_ = new OptWithClause();
		opt_with_clause_->generate();
		select_clause_list_ = new SelectClauseList();
		select_clause_list_->generate();
		opt_order_clause_ = new OptOrderClause();
		opt_order_clause_->generate();
		opt_limit_clause_ = new OptLimitClause();
		opt_limit_clause_->generate();

	GENERATEEND
}

IR*  SelectClauseList::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(select_clause_);
		res = new IR(kSelectClauseList, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(select_clause_);
		auto tmp2= SAFETRANSLATE(combine_clause_);
		auto tmp3= SAFETRANSLATE(select_clause_list_);
		auto tmp4 = new IR(kUnknown2, OP3("","",""), tmp1, tmp2);
		PUSH(tmp4);
		res = new IR(kSelectClauseList, OP3("","",""), tmp4, tmp3, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void SelectClauseList::deep_delete(){
	SAFEDELETE(select_clause_);
	SAFEDELETE(combine_clause_);
	SAFEDELETE(select_clause_list_);
	delete this;
}

void SelectClauseList::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		select_clause_ = new SelectClause();
		select_clause_->generate();
		CASEEND
		CASESTART(1)
		select_clause_ = new SelectClause();
		select_clause_->generate();
		combine_clause_ = new CombineClause();
		combine_clause_->generate();
		select_clause_list_ = new SelectClauseList();
		select_clause_list_->generate();
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  SelectClause::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

		auto tmp1= SAFETRANSLATE(opt_all_or_distinct_);
		auto tmp2= SAFETRANSLATE(select_target_);
		auto tmp3= SAFETRANSLATE(opt_from_clause_);
		auto tmp4= SAFETRANSLATE(opt_where_clause_);
		auto tmp5= SAFETRANSLATE(opt_group_clause_);
		auto tmp6= SAFETRANSLATE(opt_window_clause_);
		auto tmp7 = new IR(kUnknown3, OP3("SELECT","",""), tmp1, tmp2);
		PUSH(tmp7);
		auto tmp8 = new IR(kUnknown4, OP3("","",""), tmp7, tmp3);
		PUSH(tmp8);
		auto tmp9 = new IR(kUnknown5, OP3("","",""), tmp8, tmp4);
		PUSH(tmp9);
		auto tmp10 = new IR(kUnknown6, OP3("","",""), tmp9, tmp5);
		PUSH(tmp10);
		res = new IR(kSelectClause, OP3("","",""), tmp10, tmp6, case_idx_);

	TRANSLATEEND
}

void SelectClause::deep_delete(){
	SAFEDELETE(opt_all_or_distinct_);
	SAFEDELETE(select_target_);
	SAFEDELETE(opt_from_clause_);
	SAFEDELETE(opt_where_clause_);
	SAFEDELETE(opt_group_clause_);
	SAFEDELETE(opt_window_clause_);
	delete this;
}

void SelectClause::generate(){
	GENERATESTART(1)

		opt_all_or_distinct_ = new OptAllOrDistinct();
		opt_all_or_distinct_->generate();
		select_target_ = new SelectTarget();
		select_target_->generate();
		opt_from_clause_ = new OptFromClause();
		opt_from_clause_->generate();
		opt_where_clause_ = new OptWhereClause();
		opt_where_clause_->generate();
		opt_group_clause_ = new OptGroupClause();
		opt_group_clause_->generate();
		opt_window_clause_ = new OptWindowClause();
		opt_window_clause_->generate();

	GENERATEEND
}

IR*  CombineClause::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

		res = new IR(kCombineClause, OP3("UNION","",""), NULL, NULL, case_idx_);

	TRANSLATEEND
}

void CombineClause::deep_delete(){
	delete this;
}

void CombineClause::generate(){
	GENERATESTART(1)


	GENERATEEND
}

IR*  OptFromClause::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(from_clause_);
		res = new IR(kOptFromClause, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptFromClause, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptFromClause::deep_delete(){
	SAFEDELETE(from_clause_);
	delete this;
}

void OptFromClause::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		from_clause_ = new FromClause();
		from_clause_->generate();
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  SelectTarget::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

		auto tmp1= SAFETRANSLATE(expr_list_);
		res = new IR(kSelectTarget, OP3("","",""), tmp1, NULL, case_idx_);

	TRANSLATEEND
}

void SelectTarget::deep_delete(){
	SAFEDELETE(expr_list_);
	delete this;
}

void SelectTarget::generate(){
	GENERATESTART(1)

		expr_list_ = new ExprList();
		expr_list_->generate();

	GENERATEEND
}

IR*  OptWindowClause::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(window_clause_);
		res = new IR(kOptWindowClause, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptWindowClause, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptWindowClause::deep_delete(){
	SAFEDELETE(window_clause_);
	delete this;
}

void OptWindowClause::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		window_clause_ = new WindowClause();
		window_clause_->generate();
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  WindowClause::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

		auto tmp1= SAFETRANSLATE(window_def_list_);
		res = new IR(kWindowClause, OP3("WINDOW","",""), tmp1, NULL, case_idx_);

	TRANSLATEEND
}

void WindowClause::deep_delete(){
	SAFEDELETE(window_def_list_);
	delete this;
}

void WindowClause::generate(){
	GENERATESTART(1)

		window_def_list_ = new WindowDefList();
		window_def_list_->generate();

	GENERATEEND
}

IR*  WindowDefList::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(window_def_);
		res = new IR(kWindowDefList, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(window_def_);
		auto tmp2= SAFETRANSLATE(window_def_list_);
		res = new IR(kWindowDefList, OP3("",",",""), tmp1, tmp2, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void WindowDefList::deep_delete(){
	SAFEDELETE(window_def_);
	SAFEDELETE(window_def_list_);
	delete this;
}

void WindowDefList::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		window_def_ = new WindowDef();
		window_def_->generate();
		CASEEND
		CASESTART(1)
		window_def_ = new WindowDef();
		window_def_->generate();
		window_def_list_ = new WindowDefList();
		window_def_list_->generate();
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  WindowDef::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

		auto tmp1= SAFETRANSLATE(window_name_);
		auto tmp2= SAFETRANSLATE(window_);
		res = new IR(kWindowDef, OP3("","AS (",")"), tmp1, tmp2, case_idx_);

	TRANSLATEEND
}

void WindowDef::deep_delete(){
	SAFEDELETE(window_name_);
	SAFEDELETE(window_);
	delete this;
}

void WindowDef::generate(){
	GENERATESTART(1)

		window_name_ = new WindowName();
		window_name_->generate();
		window_ = new Window();
		window_->generate();

	GENERATEEND
}

IR*  WindowName::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

		auto tmp1= SAFETRANSLATE(identifier_);
		res = new IR(kWindowName, OP3("","",""), tmp1, NULL, case_idx_);

	TRANSLATEEND
}

void WindowName::deep_delete(){
	SAFEDELETE(identifier_);
	delete this;
}

void WindowName::generate(){
	GENERATESTART(1)

		identifier_ = new Identifier();
		identifier_->generate();

	GENERATEEND
}

IR*  Window::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

		auto tmp1= SAFETRANSLATE(opt_exist_window_name_);
		auto tmp2= SAFETRANSLATE(opt_partition_);
		auto tmp3= SAFETRANSLATE(opt_order_clause_);
		auto tmp4= SAFETRANSLATE(opt_frame_clause_);
		auto tmp5 = new IR(kUnknown7, OP3("","",""), tmp1, tmp2);
		PUSH(tmp5);
		auto tmp6 = new IR(kUnknown8, OP3("","",""), tmp5, tmp3);
		PUSH(tmp6);
		res = new IR(kWindow, OP3("","",""), tmp6, tmp4, case_idx_);

	TRANSLATEEND
}

void Window::deep_delete(){
	SAFEDELETE(opt_exist_window_name_);
	SAFEDELETE(opt_partition_);
	SAFEDELETE(opt_order_clause_);
	SAFEDELETE(opt_frame_clause_);
	delete this;
}

void Window::generate(){
	GENERATESTART(1)

		opt_exist_window_name_ = new OptExistWindowName();
		opt_exist_window_name_->generate();
		opt_partition_ = new OptPartition();
		opt_partition_->generate();
		opt_order_clause_ = new OptOrderClause();
		opt_order_clause_->generate();
		opt_frame_clause_ = new OptFrameClause();
		opt_frame_clause_->generate();

	GENERATEEND
}

IR*  OptPartition::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(expr_list_);
		res = new IR(kOptPartition, OP3("PARTITION BY","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptPartition, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptPartition::deep_delete(){
	SAFEDELETE(expr_list_);
	delete this;
}

void OptPartition::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		expr_list_ = new ExprList();
		expr_list_->generate();
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  OptFrameClause::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(range_or_rows_);
		auto tmp2= SAFETRANSLATE(frame_bound_start_);
		res = new IR(kOptFrameClause, OP3("","",""), tmp1, tmp2, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(range_or_rows_);
		auto tmp2= SAFETRANSLATE(frame_bound_start_);
		auto tmp3= SAFETRANSLATE(frame_bound_end_);
		auto tmp4 = new IR(kUnknown9, OP3("","BETWEEN","AND"), tmp1, tmp2);
		PUSH(tmp4);
		res = new IR(kOptFrameClause, OP3("","",""), tmp4, tmp3, case_idx_);
		CASEEND
		CASESTART(2)
		res = new IR(kOptFrameClause, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptFrameClause::deep_delete(){
	SAFEDELETE(range_or_rows_);
	SAFEDELETE(frame_bound_start_);
	SAFEDELETE(frame_bound_end_);
	delete this;
}

void OptFrameClause::generate(){
	GENERATESTART(3)

	SWITCHSTART
		CASESTART(0)
		range_or_rows_ = new RangeOrRows();
		range_or_rows_->generate();
		frame_bound_start_ = new FrameBoundStart();
		frame_bound_start_->generate();
		CASEEND
		CASESTART(1)
		range_or_rows_ = new RangeOrRows();
		range_or_rows_->generate();
		frame_bound_start_ = new FrameBoundStart();
		frame_bound_start_->generate();
		frame_bound_end_ = new FrameBoundEnd();
		frame_bound_end_->generate();
		CASEEND
		CASESTART(2)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  RangeOrRows::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		res = new IR(kRangeOrRows, OP3("RANGE","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kRangeOrRows, OP3("ROWS","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(2)
		res = new IR(kRangeOrRows, OP3("GROUPS","",""), NULL, NULL, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void RangeOrRows::deep_delete(){
	delete this;
}

void RangeOrRows::generate(){
	GENERATESTART(3)

	SWITCHSTART
		CASESTART(0)
		CASEEND
		CASESTART(1)
		CASEEND
		CASESTART(2)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  FrameBoundStart::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(frame_bound_);
		res = new IR(kFrameBoundStart, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kFrameBoundStart, OP3("UNBOUNDED PRECEDING","",""), NULL, NULL, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void FrameBoundStart::deep_delete(){
	SAFEDELETE(frame_bound_);
	delete this;
}

void FrameBoundStart::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		frame_bound_ = new FrameBound();
		frame_bound_->generate();
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  FrameBoundEnd::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(frame_bound_);
		res = new IR(kFrameBoundEnd, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kFrameBoundEnd, OP3("UNBOUNDED FOLLOWING","",""), NULL, NULL, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void FrameBoundEnd::deep_delete(){
	SAFEDELETE(frame_bound_);
	delete this;
}

void FrameBoundEnd::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		frame_bound_ = new FrameBound();
		frame_bound_->generate();
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  FrameBound::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(expr_);
		res = new IR(kFrameBound, OP3("","PRECEDING",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(expr_);
		res = new IR(kFrameBound, OP3("","FOLLOWING",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(2)
		res = new IR(kFrameBound, OP3("CURRENT ROW","",""), NULL, NULL, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void FrameBound::deep_delete(){
	SAFEDELETE(expr_);
	delete this;
}

void FrameBound::generate(){
	GENERATESTART(3)

	SWITCHSTART
		CASESTART(0)
		expr_ = new Expr();
		expr_->generate();
		CASEEND
		CASESTART(1)
		expr_ = new Expr();
		expr_->generate();
		CASEEND
		CASESTART(2)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  OptExistWindowName::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(identifier_);
		res = new IR(kOptExistWindowName, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptExistWindowName, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptExistWindowName::deep_delete(){
	SAFEDELETE(identifier_);
	delete this;
}

void OptExistWindowName::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		identifier_ = new Identifier();
		identifier_->generate();
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  OptGroupClause::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(expr_list_);
		auto tmp2= SAFETRANSLATE(opt_having_clause_);
		res = new IR(kOptGroupClause, OP3("GROUP BY","",""), tmp1, tmp2, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptGroupClause, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptGroupClause::deep_delete(){
	SAFEDELETE(expr_list_);
	SAFEDELETE(opt_having_clause_);
	delete this;
}

void OptGroupClause::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		expr_list_ = new ExprList();
		expr_list_->generate();
		opt_having_clause_ = new OptHavingClause();
		opt_having_clause_->generate();
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  OptHavingClause::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(expr_);
		res = new IR(kOptHavingClause, OP3("HAVING","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptHavingClause, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptHavingClause::deep_delete(){
	SAFEDELETE(expr_);
	delete this;
}

void OptHavingClause::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		expr_ = new Expr();
		expr_->generate();
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  OptWhereClause::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(where_clause_);
		res = new IR(kOptWhereClause, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptWhereClause, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptWhereClause::deep_delete(){
	SAFEDELETE(where_clause_);
	delete this;
}

void OptWhereClause::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		where_clause_ = new WhereClause();
		where_clause_->generate();
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  WhereClause::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

		auto tmp1= SAFETRANSLATE(expr_);
		res = new IR(kWhereClause, OP3("WHERE","",""), tmp1, NULL, case_idx_);

	TRANSLATEEND
}

void WhereClause::deep_delete(){
	SAFEDELETE(expr_);
	delete this;
}

void WhereClause::generate(){
	GENERATESTART(1)

		expr_ = new Expr();
		expr_->generate();

	GENERATEEND
}

IR*  FromClause::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

		auto tmp1= SAFETRANSLATE(table_ref_);
		res = new IR(kFromClause, OP3("FROM","",""), tmp1, NULL, case_idx_);

	TRANSLATEEND
}

void FromClause::deep_delete(){
	SAFEDELETE(table_ref_);
	delete this;
}

void FromClause::generate(){
	GENERATESTART(1)

		table_ref_ = new TableRef();
		table_ref_->generate();

	GENERATEEND
}

IR*  TableRef::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(opt_table_prefix_);
		auto tmp2= SAFETRANSLATE(table_name_);
		auto tmp3= SAFETRANSLATE(opt_as_alias_);
		auto tmp4= SAFETRANSLATE(opt_index_);
		auto tmp5= SAFETRANSLATE(opt_on_);
		auto tmp6= SAFETRANSLATE(opt_using_);
		auto tmp7 = new IR(kUnknown10, OP3("","",""), tmp1, tmp2);
		PUSH(tmp7);
		auto tmp8 = new IR(kUnknown11, OP3("","",""), tmp7, tmp3);
		PUSH(tmp8);
		auto tmp9 = new IR(kUnknown12, OP3("","",""), tmp8, tmp4);
		PUSH(tmp9);
		auto tmp10 = new IR(kUnknown13, OP3("","",""), tmp9, tmp5);
		PUSH(tmp10);
		res = new IR(kTableRef, OP3("","",""), tmp10, tmp6, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(opt_table_prefix_);
		auto tmp2= SAFETRANSLATE(select_no_parens_);
		auto tmp3= SAFETRANSLATE(opt_as_alias_);
		auto tmp4= SAFETRANSLATE(opt_on_);
		auto tmp5= SAFETRANSLATE(opt_using_);
		auto tmp6 = new IR(kUnknown14, OP3("","(",")"), tmp1, tmp2);
		PUSH(tmp6);
		auto tmp7 = new IR(kUnknown15, OP3("","",""), tmp6, tmp3);
		PUSH(tmp7);
		auto tmp8 = new IR(kUnknown16, OP3("","",""), tmp7, tmp4);
		PUSH(tmp8);
		res = new IR(kTableRef, OP3("","",""), tmp8, tmp5, case_idx_);
		CASEEND
		CASESTART(2)
		auto tmp1= SAFETRANSLATE(opt_table_prefix_);
		auto tmp2= SAFETRANSLATE(table_ref_);
		auto tmp3= SAFETRANSLATE(opt_as_alias_);
		auto tmp4= SAFETRANSLATE(opt_on_);
		auto tmp5= SAFETRANSLATE(opt_using_);
		auto tmp6 = new IR(kUnknown17, OP3("","(",")"), tmp1, tmp2);
		PUSH(tmp6);
		auto tmp7 = new IR(kUnknown18, OP3("","",""), tmp6, tmp3);
		PUSH(tmp7);
		auto tmp8 = new IR(kUnknown19, OP3("","",""), tmp7, tmp4);
		PUSH(tmp8);
		res = new IR(kTableRef, OP3("","",""), tmp8, tmp5, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void TableRef::deep_delete(){
	SAFEDELETE(opt_table_prefix_);
	SAFEDELETE(table_name_);
	SAFEDELETE(opt_as_alias_);
	SAFEDELETE(opt_index_);
	SAFEDELETE(opt_on_);
	SAFEDELETE(opt_using_);
	SAFEDELETE(select_no_parens_);
	SAFEDELETE(table_ref_);
	delete this;
}

void TableRef::generate(){
	GENERATESTART(3)

	SWITCHSTART
		CASESTART(0)
		opt_table_prefix_ = new OptTablePrefix();
		opt_table_prefix_->generate();
		table_name_ = new TableName();
		table_name_->generate();
		opt_as_alias_ = new OptAsAlias();
		opt_as_alias_->generate();
		opt_index_ = new OptIndex();
		opt_index_->generate();
		opt_on_ = new OptOn();
		opt_on_->generate();
		opt_using_ = new OptUsing();
		opt_using_->generate();
		CASEEND
		CASESTART(1)
		opt_table_prefix_ = new OptTablePrefix();
		opt_table_prefix_->generate();
		select_no_parens_ = new SelectNoParens();
		select_no_parens_->generate();
		opt_as_alias_ = new OptAsAlias();
		opt_as_alias_->generate();
		opt_on_ = new OptOn();
		opt_on_->generate();
		opt_using_ = new OptUsing();
		opt_using_->generate();
		CASEEND
		CASESTART(2)
		opt_table_prefix_ = new OptTablePrefix();
		opt_table_prefix_->generate();
		table_ref_ = new TableRef();
		table_ref_->generate();
		opt_as_alias_ = new OptAsAlias();
		opt_as_alias_->generate();
		opt_on_ = new OptOn();
		opt_on_->generate();
		opt_using_ = new OptUsing();
		opt_using_->generate();
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  OptIndex::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(column_name_);
		res = new IR(kOptIndex, OP3("INDEXED BY","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptIndex, OP3("NOT INDEXED","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(2)
		res = new IR(kOptIndex, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptIndex::deep_delete(){
	SAFEDELETE(column_name_);
	delete this;
}

void OptIndex::generate(){
	GENERATESTART(3)

	SWITCHSTART
		CASESTART(0)
		column_name_ = new ColumnName();
		column_name_->generate();
		CASEEND
		CASESTART(1)
		CASEEND
		CASESTART(2)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  OptOn::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(expr_);
		res = new IR(kOptOn, OP3("ON","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptOn, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptOn::deep_delete(){
	SAFEDELETE(expr_);
	delete this;
}

void OptOn::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		expr_ = new Expr();
		expr_->generate();
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  OptUsing::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(column_name_list_);
		res = new IR(kOptUsing, OP3("USING (",")",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptUsing, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptUsing::deep_delete(){
	SAFEDELETE(column_name_list_);
	delete this;
}

void OptUsing::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		column_name_list_ = new ColumnNameList();
		column_name_list_->generate();
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  ColumnNameList::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(column_name_);
		res = new IR(kColumnNameList, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(column_name_);
		auto tmp2= SAFETRANSLATE(column_name_list_);
		res = new IR(kColumnNameList, OP3("",",",""), tmp1, tmp2, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void ColumnNameList::deep_delete(){
	SAFEDELETE(column_name_);
	SAFEDELETE(column_name_list_);
	delete this;
}

void ColumnNameList::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		column_name_ = new ColumnName();
		column_name_->generate();
		CASEEND
		CASESTART(1)
		column_name_ = new ColumnName();
		column_name_->generate();
		column_name_list_ = new ColumnNameList();
		column_name_list_->generate();
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  OptTablePrefix::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(table_ref_);
		auto tmp2= SAFETRANSLATE(join_op_);
		res = new IR(kOptTablePrefix, OP3("","",""), tmp1, tmp2, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptTablePrefix, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptTablePrefix::deep_delete(){
	SAFEDELETE(table_ref_);
	SAFEDELETE(join_op_);
	delete this;
}

void OptTablePrefix::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		table_ref_ = new TableRef();
		table_ref_->generate();
		join_op_ = new JoinOp();
		join_op_->generate();
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  JoinOp::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		res = new IR(kJoinOp, OP3(",","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kJoinOp, OP3("JOIN","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(2)
		auto tmp1= SAFETRANSLATE(opt_join_type_);
		res = new IR(kJoinOp, OP3("NATURAL","JOIN",""), tmp1, NULL, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void JoinOp::deep_delete(){
	SAFEDELETE(opt_join_type_);
	delete this;
}

void JoinOp::generate(){
	GENERATESTART(3)

	SWITCHSTART
		CASESTART(0)
		CASEEND
		CASESTART(1)
		CASEEND
		CASESTART(2)
		opt_join_type_ = new OptJoinType();
		opt_join_type_->generate();
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  OptJoinType::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		res = new IR(kOptJoinType, OP3("LEFT","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptJoinType, OP3("LEFT OUTER","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(2)
		res = new IR(kOptJoinType, OP3("INNER","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(3)
		res = new IR(kOptJoinType, OP3("CROSS","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(4)
		res = new IR(kOptJoinType, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptJoinType::deep_delete(){
	delete this;
}

void OptJoinType::generate(){
	GENERATESTART(5)

	SWITCHSTART
		CASESTART(0)
		CASEEND
		CASESTART(1)
		CASEEND
		CASESTART(2)
		CASEEND
		CASESTART(3)
		CASEEND
		CASESTART(4)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  ExprList::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(expr_);
		auto tmp2= SAFETRANSLATE(opt_as_alias_);
		auto tmp3= SAFETRANSLATE(expr_list_);
		auto tmp4 = new IR(kUnknown20, OP3("","",","), tmp1, tmp2);
		PUSH(tmp4);
		res = new IR(kExprList, OP3("","",""), tmp4, tmp3, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(expr_);
		auto tmp2= SAFETRANSLATE(opt_as_alias_);
		res = new IR(kExprList, OP3("","",""), tmp1, tmp2, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void ExprList::deep_delete(){
	SAFEDELETE(expr_);
	SAFEDELETE(opt_as_alias_);
	SAFEDELETE(expr_list_);
	delete this;
}

void ExprList::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		expr_ = new Expr();
		expr_->generate();
		opt_as_alias_ = new OptAsAlias();
		opt_as_alias_->generate();
		expr_list_ = new ExprList();
		expr_list_->generate();
		CASEEND
		CASESTART(1)
		expr_ = new Expr();
		expr_->generate();
		opt_as_alias_ = new OptAsAlias();
		opt_as_alias_->generate();
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  OptLimitClause::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(limit_clause_);
		res = new IR(kOptLimitClause, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptLimitClause, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptLimitClause::deep_delete(){
	SAFEDELETE(limit_clause_);
	delete this;
}

void OptLimitClause::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		limit_clause_ = new LimitClause();
		limit_clause_->generate();
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  LimitClause::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(expr_1_);
		res = new IR(kLimitClause, OP3("LIMIT","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(expr_1_);
		auto tmp2= SAFETRANSLATE(expr_2_);
		res = new IR(kLimitClause, OP3("LIMIT","OFFSET",""), tmp1, tmp2, case_idx_);
		CASEEND
		CASESTART(2)
		auto tmp1= SAFETRANSLATE(expr_1_);
		auto tmp2= SAFETRANSLATE(expr_2_);
		res = new IR(kLimitClause, OP3("LIMIT",",",""), tmp1, tmp2, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void LimitClause::deep_delete(){
	SAFEDELETE(expr_1_);
	SAFEDELETE(expr_2_);
	delete this;
}

void LimitClause::generate(){
	GENERATESTART(3)

	SWITCHSTART
		CASESTART(0)
		expr_1_ = new Expr();
		expr_1_->generate();
		CASEEND
		CASESTART(1)
		expr_1_ = new Expr();
		expr_1_->generate();
		expr_2_ = new Expr();
		expr_2_->generate();
		CASEEND
		CASESTART(2)
		expr_1_ = new Expr();
		expr_1_->generate();
		expr_2_ = new Expr();
		expr_2_->generate();
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  OptLimitRowCount::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(expr_);
		res = new IR(kOptLimitRowCount, OP3("LIMIT","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptLimitRowCount, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptLimitRowCount::deep_delete(){
	SAFEDELETE(expr_);
	delete this;
}

void OptLimitRowCount::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		expr_ = new Expr();
		expr_->generate();
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  OptOrderClause::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(order_item_list_);
		res = new IR(kOptOrderClause, OP3("ORDER BY","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptOrderClause, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptOrderClause::deep_delete(){
	SAFEDELETE(order_item_list_);
	delete this;
}

void OptOrderClause::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		order_item_list_ = new OrderItemList();
		order_item_list_->generate();
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  OrderItemList::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(order_item_);
		res = new IR(kOrderItemList, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(order_item_);
		auto tmp2= SAFETRANSLATE(order_item_list_);
		res = new IR(kOrderItemList, OP3("",",",""), tmp1, tmp2, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OrderItemList::deep_delete(){
	SAFEDELETE(order_item_);
	SAFEDELETE(order_item_list_);
	delete this;
}

void OrderItemList::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		order_item_ = new OrderItem();
		order_item_->generate();
		CASEEND
		CASESTART(1)
		order_item_ = new OrderItem();
		order_item_->generate();
		order_item_list_ = new OrderItemList();
		order_item_list_->generate();
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  OrderItem::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

		auto tmp1= SAFETRANSLATE(expr_);
		auto tmp2= SAFETRANSLATE(opt_order_behavior_);
		res = new IR(kOrderItem, OP3("","",""), tmp1, tmp2, case_idx_);

	TRANSLATEEND
}

void OrderItem::deep_delete(){
	SAFEDELETE(expr_);
	SAFEDELETE(opt_order_behavior_);
	delete this;
}

void OrderItem::generate(){
	GENERATESTART(1)

		expr_ = new Expr();
		expr_->generate();
		opt_order_behavior_ = new OptOrderBehavior();
		opt_order_behavior_->generate();

	GENERATEEND
}

IR*  OptOrderBehavior::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		res = new IR(kOptOrderBehavior, OP3("ASC","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptOrderBehavior, OP3("DESC","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(2)
		res = new IR(kOptOrderBehavior, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptOrderBehavior::deep_delete(){
	delete this;
}

void OptOrderBehavior::generate(){
	GENERATESTART(3)

	SWITCHSTART
		CASESTART(0)
		CASEEND
		CASESTART(1)
		CASEEND
		CASESTART(2)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  OptWithClause::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(cte_table_list_);
		res = new IR(kOptWithClause, OP3("WITH","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(cte_table_list_);
		res = new IR(kOptWithClause, OP3("WITH RECURSIVE","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(2)
		res = new IR(kOptWithClause, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptWithClause::deep_delete(){
	SAFEDELETE(cte_table_list_);
	delete this;
}

void OptWithClause::generate(){
	GENERATESTART(3)

	SWITCHSTART
		CASESTART(0)
		cte_table_list_ = new CteTableList();
		cte_table_list_->generate();
		CASEEND
		CASESTART(1)
		cte_table_list_ = new CteTableList();
		cte_table_list_->generate();
		CASEEND
		CASESTART(2)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  CteTableList::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(cte_table_);
		res = new IR(kCteTableList, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(cte_table_);
		auto tmp2= SAFETRANSLATE(cte_table_list_);
		res = new IR(kCteTableList, OP3("",",",""), tmp1, tmp2, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void CteTableList::deep_delete(){
	SAFEDELETE(cte_table_);
	SAFEDELETE(cte_table_list_);
	delete this;
}

void CteTableList::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		cte_table_ = new CteTable();
		cte_table_->generate();
		CASEEND
		CASESTART(1)
		cte_table_ = new CteTable();
		cte_table_->generate();
		cte_table_list_ = new CteTableList();
		cte_table_list_->generate();
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  CteTable::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

		auto tmp1= SAFETRANSLATE(cte_table_name_);
		auto tmp2= SAFETRANSLATE(select_stmt_);
		res = new IR(kCteTable, OP3("","AS (",")"), tmp1, tmp2, case_idx_);

	TRANSLATEEND
}

void CteTable::deep_delete(){
	SAFEDELETE(cte_table_name_);
	SAFEDELETE(select_stmt_);
	delete this;
}

void CteTable::generate(){
	GENERATESTART(1)

		cte_table_name_ = new CteTableName();
		cte_table_name_->generate();
		select_stmt_ = new SelectStmt();
		select_stmt_->generate();

	GENERATEEND
}

IR*  CteTableName::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

		auto tmp1= SAFETRANSLATE(table_name_);
		auto tmp2= SAFETRANSLATE(opt_column_name_list_p_);
		res = new IR(kCteTableName, OP3("","",""), tmp1, tmp2, case_idx_);

	TRANSLATEEND
}

void CteTableName::deep_delete(){
	SAFEDELETE(table_name_);
	SAFEDELETE(opt_column_name_list_p_);
	delete this;
}

void CteTableName::generate(){
	GENERATESTART(1)

		table_name_ = new TableName();
		table_name_->generate();
		opt_column_name_list_p_ = new OptColumnNameListP();
		opt_column_name_list_p_->generate();

	GENERATEEND
}

IR*  OptAllOrDistinct::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		res = new IR(kOptAllOrDistinct, OP3("ALL","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptAllOrDistinct, OP3("DISTINCT","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(2)
		res = new IR(kOptAllOrDistinct, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptAllOrDistinct::deep_delete(){
	delete this;
}

void OptAllOrDistinct::generate(){
	GENERATESTART(3)

	SWITCHSTART
		CASESTART(0)
		CASEEND
		CASESTART(1)
		CASEEND
		CASESTART(2)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  CreateTableStmt::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(opt_temp_);
		auto tmp2= SAFETRANSLATE(opt_if_not_exist_);
		auto tmp3= SAFETRANSLATE(table_name_);
		auto tmp4= SAFETRANSLATE(create_definition_list_);
		auto tmp5= SAFETRANSLATE(opt_table_option_list_);
		auto tmp6 = new IR(kUnknown21, OP3("CREATE","TABLE",""), tmp1, tmp2);
		PUSH(tmp6);
		auto tmp7 = new IR(kUnknown22, OP3("","","("), tmp6, tmp3);
		PUSH(tmp7);
		auto tmp8 = new IR(kUnknown23, OP3("","",")"), tmp7, tmp4);
		PUSH(tmp8);
		res = new IR(kCreateTableStmt, OP3("","",""), tmp8, tmp5, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(opt_temp_);
		auto tmp2= SAFETRANSLATE(opt_if_not_exist_);
		auto tmp3= SAFETRANSLATE(table_name_);
		auto tmp4= SAFETRANSLATE(opt_create_definition_list_p_);
		auto tmp5= SAFETRANSLATE(opt_table_option_list_);
		auto tmp6= SAFETRANSLATE(opt_ignore_or_replace_);
		auto tmp7= SAFETRANSLATE(opt_as_);
		auto tmp8= SAFETRANSLATE(select_stmt_);
		auto tmp9 = new IR(kUnknown24, OP3("CREATE","TABLE",""), tmp1, tmp2);
		PUSH(tmp9);
		auto tmp10 = new IR(kUnknown25, OP3("","",""), tmp9, tmp3);
		PUSH(tmp10);
		auto tmp11 = new IR(kUnknown26, OP3("","",""), tmp10, tmp4);
		PUSH(tmp11);
		auto tmp12 = new IR(kUnknown27, OP3("","",""), tmp11, tmp5);
		PUSH(tmp12);
		auto tmp13 = new IR(kUnknown28, OP3("","",""), tmp12, tmp6);
		PUSH(tmp13);
		auto tmp14 = new IR(kUnknown29, OP3("","",""), tmp13, tmp7);
		PUSH(tmp14);
		res = new IR(kCreateTableStmt, OP3("","",""), tmp14, tmp8, case_idx_);
		CASEEND
		CASESTART(2)
		auto tmp1= SAFETRANSLATE(opt_temp_);
		auto tmp2= SAFETRANSLATE(opt_if_not_exist_);
		auto tmp3= SAFETRANSLATE(table_name_);
		auto tmp4= SAFETRANSLATE(like_field_);
		auto tmp5 = new IR(kUnknown30, OP3("CREATE","TABLE",""), tmp1, tmp2);
		PUSH(tmp5);
		auto tmp6 = new IR(kUnknown31, OP3("","",""), tmp5, tmp3);
		PUSH(tmp6);
		res = new IR(kCreateTableStmt, OP3("","",""), tmp6, tmp4, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void CreateTableStmt::deep_delete(){
	SAFEDELETE(opt_temp_);
	SAFEDELETE(opt_if_not_exist_);
	SAFEDELETE(table_name_);
	SAFEDELETE(create_definition_list_);
	SAFEDELETE(opt_table_option_list_);
	SAFEDELETE(opt_create_definition_list_p_);
	SAFEDELETE(opt_ignore_or_replace_);
	SAFEDELETE(opt_as_);
	SAFEDELETE(select_stmt_);
	SAFEDELETE(like_field_);
	delete this;
}

void CreateTableStmt::generate(){
	GENERATESTART(3)

	SWITCHSTART
		CASESTART(0)
		opt_temp_ = new OptTemp();
		opt_temp_->generate();
		opt_if_not_exist_ = new OptIfNotExist();
		opt_if_not_exist_->generate();
		table_name_ = new TableName();
		table_name_->generate();
		create_definition_list_ = new CreateDefinitionList();
		create_definition_list_->generate();
		opt_table_option_list_ = new OptTableOptionList();
		opt_table_option_list_->generate();
		CASEEND
		CASESTART(1)
		opt_temp_ = new OptTemp();
		opt_temp_->generate();
		opt_if_not_exist_ = new OptIfNotExist();
		opt_if_not_exist_->generate();
		table_name_ = new TableName();
		table_name_->generate();
		opt_create_definition_list_p_ = new OptCreateDefinitionListP();
		opt_create_definition_list_p_->generate();
		opt_table_option_list_ = new OptTableOptionList();
		opt_table_option_list_->generate();
		opt_ignore_or_replace_ = new OptIgnoreOrReplace();
		opt_ignore_or_replace_->generate();
		opt_as_ = new OptAs();
		opt_as_->generate();
		select_stmt_ = new SelectStmt();
		select_stmt_->generate();
		CASEEND
		CASESTART(2)
		opt_temp_ = new OptTemp();
		opt_temp_->generate();
		opt_if_not_exist_ = new OptIfNotExist();
		opt_if_not_exist_->generate();
		table_name_ = new TableName();
		table_name_->generate();
		like_field_ = new LikeField();
		like_field_->generate();
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  OptAs::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		res = new IR(kOptAs, OP3("AS","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptAs, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptAs::deep_delete(){
	delete this;
}

void OptAs::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  LikeField::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(table_name_);
		res = new IR(kLikeField, OP3("LIKE","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(table_name_);
		res = new IR(kLikeField, OP3("( LIKE",")",""), tmp1, NULL, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void LikeField::deep_delete(){
	SAFEDELETE(table_name_);
	delete this;
}

void LikeField::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		table_name_ = new TableName();
		table_name_->generate();
		CASEEND
		CASESTART(1)
		table_name_ = new TableName();
		table_name_->generate();
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  OptIndexType::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(index_type_);
		res = new IR(kOptIndexType, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptIndexType, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptIndexType::deep_delete(){
	SAFEDELETE(index_type_);
	delete this;
}

void OptIndexType::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		index_type_ = new IndexType();
		index_type_->generate();
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  IndexType::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		res = new IR(kIndexType, OP3("USING BTREE","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kIndexType, OP3("USING HASH","",""), NULL, NULL, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void IndexType::deep_delete(){
	delete this;
}

void IndexType::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  CreateIndexStmt::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

		auto tmp1= SAFETRANSLATE(opt_index_keyword_);
		auto tmp2= SAFETRANSLATE(index_name_);
		auto tmp3= SAFETRANSLATE(opt_index_type_);
		auto tmp4= SAFETRANSLATE(table_name_);
		auto tmp5= SAFETRANSLATE(key_part_list_);
		auto tmp6= SAFETRANSLATE(opt_index_option_);
		auto tmp7= SAFETRANSLATE(opt_extra_option_);
		auto tmp8 = new IR(kUnknown32, OP3("CREATE","INDEX",""), tmp1, tmp2);
		PUSH(tmp8);
		auto tmp9 = new IR(kUnknown33, OP3("","","ON"), tmp8, tmp3);
		PUSH(tmp9);
		auto tmp10 = new IR(kUnknown34, OP3("","","("), tmp9, tmp4);
		PUSH(tmp10);
		auto tmp11 = new IR(kUnknown35, OP3("","",")"), tmp10, tmp5);
		PUSH(tmp11);
		auto tmp12 = new IR(kUnknown36, OP3("","",""), tmp11, tmp6);
		PUSH(tmp12);
		res = new IR(kCreateIndexStmt, OP3("","",""), tmp12, tmp7, case_idx_);

	TRANSLATEEND
}

void CreateIndexStmt::deep_delete(){
	SAFEDELETE(opt_index_keyword_);
	SAFEDELETE(index_name_);
	SAFEDELETE(opt_index_type_);
	SAFEDELETE(table_name_);
	SAFEDELETE(key_part_list_);
	SAFEDELETE(opt_index_option_);
	SAFEDELETE(opt_extra_option_);
	delete this;
}

void CreateIndexStmt::generate(){
	GENERATESTART(1)

		opt_index_keyword_ = new OptIndexKeyword();
		opt_index_keyword_->generate();
		index_name_ = new IndexName();
		index_name_->generate();
		opt_index_type_ = new OptIndexType();
		opt_index_type_->generate();
		table_name_ = new TableName();
		table_name_->generate();
		key_part_list_ = new KeyPartList();
		key_part_list_->generate();
		opt_index_option_ = new OptIndexOption();
		opt_index_option_->generate();
		opt_extra_option_ = new OptExtraOption();
		opt_extra_option_->generate();

	GENERATEEND
}

IR*  CreateTriggerStmt::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

		auto tmp1= SAFETRANSLATE(trigger_name_);
		auto tmp2= SAFETRANSLATE(trigger_action_time_);
		auto tmp3= SAFETRANSLATE(trigger_events_);
		auto tmp4= SAFETRANSLATE(table_name_);
		auto tmp5= SAFETRANSLATE(trigger_body_);
		auto tmp6 = new IR(kUnknown37, OP3("CREATE TRIGGER","",""), tmp1, tmp2);
		PUSH(tmp6);
		auto tmp7 = new IR(kUnknown38, OP3("","","ON"), tmp6, tmp3);
		PUSH(tmp7);
		auto tmp8 = new IR(kUnknown39, OP3("","","FOR EACH ROW"), tmp7, tmp4);
		PUSH(tmp8);
		res = new IR(kCreateTriggerStmt, OP3("","",""), tmp8, tmp5, case_idx_);

	TRANSLATEEND
}

void CreateTriggerStmt::deep_delete(){
	SAFEDELETE(trigger_name_);
	SAFEDELETE(trigger_action_time_);
	SAFEDELETE(trigger_events_);
	SAFEDELETE(table_name_);
	SAFEDELETE(trigger_body_);
	delete this;
}

void CreateTriggerStmt::generate(){
	GENERATESTART(1)

		trigger_name_ = new TriggerName();
		trigger_name_->generate();
		trigger_action_time_ = new TriggerActionTime();
		trigger_action_time_->generate();
		trigger_events_ = new TriggerEvents();
		trigger_events_->generate();
		table_name_ = new TableName();
		table_name_->generate();
		trigger_body_ = new TriggerBody();
		trigger_body_->generate();

	GENERATEEND
}

IR*  CreateViewStmt::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(opt_view_algorithm_);
		auto tmp2= SAFETRANSLATE(opt_sql_security_);
		auto tmp3= SAFETRANSLATE(view_name_);
		auto tmp4= SAFETRANSLATE(opt_column_name_list_p_);
		auto tmp5= SAFETRANSLATE(select_stmt_);
		auto tmp6= SAFETRANSLATE(opt_check_option_);
		auto tmp7 = new IR(kUnknown40, OP3("CREATE","","VIEW"), tmp1, tmp2);
		PUSH(tmp7);
		auto tmp8 = new IR(kUnknown41, OP3("","",""), tmp7, tmp3);
		PUSH(tmp8);
		auto tmp9 = new IR(kUnknown42, OP3("","","AS"), tmp8, tmp4);
		PUSH(tmp9);
		auto tmp10 = new IR(kUnknown43, OP3("","",""), tmp9, tmp5);
		PUSH(tmp10);
		res = new IR(kCreateViewStmt, OP3("","",""), tmp10, tmp6, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(opt_view_algorithm_);
		auto tmp2= SAFETRANSLATE(opt_sql_security_);
		auto tmp3= SAFETRANSLATE(view_name_);
		auto tmp4= SAFETRANSLATE(opt_column_name_list_p_);
		auto tmp5= SAFETRANSLATE(select_stmt_);
		auto tmp6= SAFETRANSLATE(opt_check_option_);
		auto tmp7 = new IR(kUnknown44, OP3("CREATE OR REPLACE","","VIEW"), tmp1, tmp2);
		PUSH(tmp7);
		auto tmp8 = new IR(kUnknown45, OP3("","",""), tmp7, tmp3);
		PUSH(tmp8);
		auto tmp9 = new IR(kUnknown46, OP3("","","AS"), tmp8, tmp4);
		PUSH(tmp9);
		auto tmp10 = new IR(kUnknown47, OP3("","",""), tmp9, tmp5);
		PUSH(tmp10);
		res = new IR(kCreateViewStmt, OP3("","",""), tmp10, tmp6, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void CreateViewStmt::deep_delete(){
	SAFEDELETE(opt_view_algorithm_);
	SAFEDELETE(opt_sql_security_);
	SAFEDELETE(view_name_);
	SAFEDELETE(opt_column_name_list_p_);
	SAFEDELETE(select_stmt_);
	SAFEDELETE(opt_check_option_);
	delete this;
}

void CreateViewStmt::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		opt_view_algorithm_ = new OptViewAlgorithm();
		opt_view_algorithm_->generate();
		opt_sql_security_ = new OptSqlSecurity();
		opt_sql_security_->generate();
		view_name_ = new ViewName();
		view_name_->generate();
		opt_column_name_list_p_ = new OptColumnNameListP();
		opt_column_name_list_p_->generate();
		select_stmt_ = new SelectStmt();
		select_stmt_->generate();
		opt_check_option_ = new OptCheckOption();
		opt_check_option_->generate();
		CASEEND
		CASESTART(1)
		opt_view_algorithm_ = new OptViewAlgorithm();
		opt_view_algorithm_->generate();
		opt_sql_security_ = new OptSqlSecurity();
		opt_sql_security_->generate();
		view_name_ = new ViewName();
		view_name_->generate();
		opt_column_name_list_p_ = new OptColumnNameListP();
		opt_column_name_list_p_->generate();
		select_stmt_ = new SelectStmt();
		select_stmt_->generate();
		opt_check_option_ = new OptCheckOption();
		opt_check_option_->generate();
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  OptTableOptionList::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(table_option_list_);
		res = new IR(kOptTableOptionList, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptTableOptionList, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptTableOptionList::deep_delete(){
	SAFEDELETE(table_option_list_);
	delete this;
}

void OptTableOptionList::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		table_option_list_ = new TableOptionList();
		table_option_list_->generate();
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  TableOptionList::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(table_option_);
		res = new IR(kTableOptionList, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(table_option_);
		auto tmp2= SAFETRANSLATE(opt_op_comma_);
		auto tmp3= SAFETRANSLATE(table_option_list_);
		auto tmp4 = new IR(kUnknown48, OP3("","",""), tmp1, tmp2);
		PUSH(tmp4);
		res = new IR(kTableOptionList, OP3("","",""), tmp4, tmp3, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void TableOptionList::deep_delete(){
	SAFEDELETE(table_option_);
	SAFEDELETE(opt_op_comma_);
	SAFEDELETE(table_option_list_);
	delete this;
}

void TableOptionList::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		table_option_ = new TableOption();
		table_option_->generate();
		CASEEND
		CASESTART(1)
		table_option_ = new TableOption();
		table_option_->generate();
		opt_op_comma_ = new OptOpComma();
		opt_op_comma_->generate();
		table_option_list_ = new TableOptionList();
		table_option_list_->generate();
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  TableOption::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(opt_op_equal_);
		auto tmp2= SAFETRANSLATE(insert_method_);
		res = new IR(kTableOption, OP3("INSERT_METHOD","",""), tmp1, tmp2, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(opt_op_equal_);
		auto tmp2= SAFETRANSLATE(row_format_);
		res = new IR(kTableOption, OP3("ROW_FORMAT","",""), tmp1, tmp2, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void TableOption::deep_delete(){
	SAFEDELETE(opt_op_equal_);
	SAFEDELETE(insert_method_);
	SAFEDELETE(row_format_);
	delete this;
}

void TableOption::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		opt_op_equal_ = new OptOpEqual();
		opt_op_equal_->generate();
		insert_method_ = new InsertMethod();
		insert_method_->generate();
		CASEEND
		CASESTART(1)
		opt_op_equal_ = new OptOpEqual();
		opt_op_equal_->generate();
		row_format_ = new RowFormat();
		row_format_->generate();
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  InsertMethod::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		res = new IR(kInsertMethod, OP3("NO","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kInsertMethod, OP3("FIRST","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(2)
		res = new IR(kInsertMethod, OP3("LAST","",""), NULL, NULL, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void InsertMethod::deep_delete(){
	delete this;
}

void InsertMethod::generate(){
	GENERATESTART(3)

	SWITCHSTART
		CASESTART(0)
		CASEEND
		CASESTART(1)
		CASEEND
		CASESTART(2)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  RowFormat::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		res = new IR(kRowFormat, OP3("DEFAULT","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kRowFormat, OP3("DYNAMIC","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(2)
		res = new IR(kRowFormat, OP3("FIXED","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(3)
		res = new IR(kRowFormat, OP3("COMPRESSED","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(4)
		res = new IR(kRowFormat, OP3("REDUNDANT","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(5)
		res = new IR(kRowFormat, OP3("COMPACT","",""), NULL, NULL, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void RowFormat::deep_delete(){
	delete this;
}

void RowFormat::generate(){
	GENERATESTART(6)

	SWITCHSTART
		CASESTART(0)
		CASEEND
		CASESTART(1)
		CASEEND
		CASESTART(2)
		CASEEND
		CASESTART(3)
		CASEEND
		CASESTART(4)
		CASEEND
		CASESTART(5)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  OptOpComma::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		res = new IR(kOptOpComma, OP3(",","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptOpComma, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptOpComma::deep_delete(){
	delete this;
}

void OptOpComma::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  OptIgnoreOrReplace::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		res = new IR(kOptIgnoreOrReplace, OP3("IGNORE","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptIgnoreOrReplace, OP3("REPLACE","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(2)
		res = new IR(kOptIgnoreOrReplace, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptIgnoreOrReplace::deep_delete(){
	delete this;
}

void OptIgnoreOrReplace::generate(){
	GENERATESTART(3)

	SWITCHSTART
		CASESTART(0)
		CASEEND
		CASESTART(1)
		CASEEND
		CASESTART(2)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  OptViewAlgorithm::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		res = new IR(kOptViewAlgorithm, OP3("ALGORITHM = UNDEFINED","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptViewAlgorithm, OP3("ALGORITHM = MERGE","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(2)
		res = new IR(kOptViewAlgorithm, OP3("ALGORITHM = TEMPTABLE","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(3)
		res = new IR(kOptViewAlgorithm, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptViewAlgorithm::deep_delete(){
	delete this;
}

void OptViewAlgorithm::generate(){
	GENERATESTART(4)

	SWITCHSTART
		CASESTART(0)
		CASEEND
		CASESTART(1)
		CASEEND
		CASESTART(2)
		CASEEND
		CASESTART(3)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  OptSqlSecurity::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		res = new IR(kOptSqlSecurity, OP3("SQL SECURITY DEFINER","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptSqlSecurity, OP3("SQL SECURITY INVOKER","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(2)
		res = new IR(kOptSqlSecurity, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptSqlSecurity::deep_delete(){
	delete this;
}

void OptSqlSecurity::generate(){
	GENERATESTART(3)

	SWITCHSTART
		CASESTART(0)
		CASEEND
		CASESTART(1)
		CASEEND
		CASESTART(2)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  OptIndexOption::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(index_type_);
		res = new IR(kOptIndexOption, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(visible_invisible_);
		res = new IR(kOptIndexOption, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(2)
		res = new IR(kOptIndexOption, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptIndexOption::deep_delete(){
	SAFEDELETE(index_type_);
	SAFEDELETE(visible_invisible_);
	delete this;
}

void OptIndexOption::generate(){
	GENERATESTART(3)

	SWITCHSTART
		CASESTART(0)
		index_type_ = new IndexType();
		index_type_->generate();
		CASEEND
		CASESTART(1)
		visible_invisible_ = new VisibleInvisible();
		visible_invisible_->generate();
		CASEEND
		CASESTART(2)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  OptExtraOption::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(index_algorithm_option_);
		res = new IR(kOptExtraOption, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(lock_option_);
		res = new IR(kOptExtraOption, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(2)
		res = new IR(kOptExtraOption, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptExtraOption::deep_delete(){
	SAFEDELETE(index_algorithm_option_);
	SAFEDELETE(lock_option_);
	delete this;
}

void OptExtraOption::generate(){
	GENERATESTART(3)

	SWITCHSTART
		CASESTART(0)
		index_algorithm_option_ = new IndexAlgorithmOption();
		index_algorithm_option_->generate();
		CASEEND
		CASESTART(1)
		lock_option_ = new LockOption();
		lock_option_->generate();
		CASEEND
		CASESTART(2)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  IndexAlgorithmOption::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(opt_op_equal_);
		res = new IR(kIndexAlgorithmOption, OP3("ALGORITHM","DEFAULT",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(opt_op_equal_);
		res = new IR(kIndexAlgorithmOption, OP3("ALGORITHM","INPLACE",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(2)
		auto tmp1= SAFETRANSLATE(opt_op_equal_);
		res = new IR(kIndexAlgorithmOption, OP3("ALGORITHM","COPY",""), tmp1, NULL, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void IndexAlgorithmOption::deep_delete(){
	SAFEDELETE(opt_op_equal_);
	delete this;
}

void IndexAlgorithmOption::generate(){
	GENERATESTART(3)

	SWITCHSTART
		CASESTART(0)
		opt_op_equal_ = new OptOpEqual();
		opt_op_equal_->generate();
		CASEEND
		CASESTART(1)
		opt_op_equal_ = new OptOpEqual();
		opt_op_equal_->generate();
		CASEEND
		CASESTART(2)
		opt_op_equal_ = new OptOpEqual();
		opt_op_equal_->generate();
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  LockOption::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(opt_op_equal_);
		res = new IR(kLockOption, OP3("LOCK","DEFAULT",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(opt_op_equal_);
		res = new IR(kLockOption, OP3("LOCK","NONE",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(2)
		auto tmp1= SAFETRANSLATE(opt_op_equal_);
		res = new IR(kLockOption, OP3("LOCK","SHARED",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(3)
		auto tmp1= SAFETRANSLATE(opt_op_equal_);
		res = new IR(kLockOption, OP3("LOCK","EXCLUSIVE",""), tmp1, NULL, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void LockOption::deep_delete(){
	SAFEDELETE(opt_op_equal_);
	delete this;
}

void LockOption::generate(){
	GENERATESTART(4)

	SWITCHSTART
		CASESTART(0)
		opt_op_equal_ = new OptOpEqual();
		opt_op_equal_->generate();
		CASEEND
		CASESTART(1)
		opt_op_equal_ = new OptOpEqual();
		opt_op_equal_->generate();
		CASEEND
		CASESTART(2)
		opt_op_equal_ = new OptOpEqual();
		opt_op_equal_->generate();
		CASEEND
		CASESTART(3)
		opt_op_equal_ = new OptOpEqual();
		opt_op_equal_->generate();
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  OptOpEqual::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		res = new IR(kOptOpEqual, OP3("=","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptOpEqual, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptOpEqual::deep_delete(){
	delete this;
}

void OptOpEqual::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  TriggerEvents::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		res = new IR(kTriggerEvents, OP3("DELETE","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kTriggerEvents, OP3("INSERT","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(2)
		res = new IR(kTriggerEvents, OP3("UPDATE","",""), NULL, NULL, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void TriggerEvents::deep_delete(){
	delete this;
}

void TriggerEvents::generate(){
	GENERATESTART(3)

	SWITCHSTART
		CASESTART(0)
		CASEEND
		CASESTART(1)
		CASEEND
		CASESTART(2)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  TriggerName::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

		auto tmp1= SAFETRANSLATE(identifier_);
		res = new IR(kTriggerName, OP3("","",""), tmp1, NULL, case_idx_);

	TRANSLATEEND
}

void TriggerName::deep_delete(){
	SAFEDELETE(identifier_);
	delete this;
}

void TriggerName::generate(){
	GENERATESTART(1)

		identifier_ = new Identifier();
		identifier_->generate();

	GENERATEEND
}

IR*  TriggerActionTime::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		res = new IR(kTriggerActionTime, OP3("BEFORE","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kTriggerActionTime, OP3("AFTER","",""), NULL, NULL, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void TriggerActionTime::deep_delete(){
	delete this;
}

void TriggerActionTime::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  DropIndexStmt::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

		auto tmp1= SAFETRANSLATE(index_name_);
		auto tmp2= SAFETRANSLATE(table_name_);
		auto tmp3= SAFETRANSLATE(opt_extra_option_);
		auto tmp4 = new IR(kUnknown49, OP3("DROP INDEX","ON",""), tmp1, tmp2);
		PUSH(tmp4);
		res = new IR(kDropIndexStmt, OP3("","",""), tmp4, tmp3, case_idx_);

	TRANSLATEEND
}

void DropIndexStmt::deep_delete(){
	SAFEDELETE(index_name_);
	SAFEDELETE(table_name_);
	SAFEDELETE(opt_extra_option_);
	delete this;
}

void DropIndexStmt::generate(){
	GENERATESTART(1)

		index_name_ = new IndexName();
		index_name_->generate();
		table_name_ = new TableName();
		table_name_->generate();
		opt_extra_option_ = new OptExtraOption();
		opt_extra_option_->generate();

	GENERATEEND
}

IR*  DropTableStmt::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

		auto tmp1= SAFETRANSLATE(opt_temp_);
		auto tmp2= SAFETRANSLATE(opt_if_exist_);
		auto tmp3= SAFETRANSLATE(table_name_list_);
		auto tmp4= SAFETRANSLATE(opt_restrict_or_cascade_);
		auto tmp5 = new IR(kUnknown50, OP3("DROP","TABLE",""), tmp1, tmp2);
		PUSH(tmp5);
		auto tmp6 = new IR(kUnknown51, OP3("","",""), tmp5, tmp3);
		PUSH(tmp6);
		res = new IR(kDropTableStmt, OP3("","",""), tmp6, tmp4, case_idx_);

	TRANSLATEEND
}

void DropTableStmt::deep_delete(){
	SAFEDELETE(opt_temp_);
	SAFEDELETE(opt_if_exist_);
	SAFEDELETE(table_name_list_);
	SAFEDELETE(opt_restrict_or_cascade_);
	delete this;
}

void DropTableStmt::generate(){
	GENERATESTART(1)

		opt_temp_ = new OptTemp();
		opt_temp_->generate();
		opt_if_exist_ = new OptIfExist();
		opt_if_exist_->generate();
		table_name_list_ = new TableNameList();
		table_name_list_->generate();
		opt_restrict_or_cascade_ = new OptRestrictOrCascade();
		opt_restrict_or_cascade_->generate();

	GENERATEEND
}

IR*  TableNameList::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(table_name_);
		auto tmp2= SAFETRANSLATE(table_name_list_);
		res = new IR(kTableNameList, OP3("",",",""), tmp1, tmp2, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(table_name_);
		res = new IR(kTableNameList, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void TableNameList::deep_delete(){
	SAFEDELETE(table_name_);
	SAFEDELETE(table_name_list_);
	delete this;
}

void TableNameList::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		table_name_ = new TableName();
		table_name_->generate();
		table_name_list_ = new TableNameList();
		table_name_list_->generate();
		CASEEND
		CASESTART(1)
		table_name_ = new TableName();
		table_name_->generate();
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  OptRestrictOrCascade::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		res = new IR(kOptRestrictOrCascade, OP3("RESTRICT","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptRestrictOrCascade, OP3("CASCADE","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(2)
		res = new IR(kOptRestrictOrCascade, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptRestrictOrCascade::deep_delete(){
	delete this;
}

void OptRestrictOrCascade::generate(){
	GENERATESTART(3)

	SWITCHSTART
		CASESTART(0)
		CASEEND
		CASESTART(1)
		CASEEND
		CASESTART(2)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  DropTriggerStmt::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

		auto tmp1= SAFETRANSLATE(opt_if_exist_);
		auto tmp2= SAFETRANSLATE(trigger_name_);
		res = new IR(kDropTriggerStmt, OP3("DROP TRIGGER","",""), tmp1, tmp2, case_idx_);

	TRANSLATEEND
}

void DropTriggerStmt::deep_delete(){
	SAFEDELETE(opt_if_exist_);
	SAFEDELETE(trigger_name_);
	delete this;
}

void DropTriggerStmt::generate(){
	GENERATESTART(1)

		opt_if_exist_ = new OptIfExist();
		opt_if_exist_->generate();
		trigger_name_ = new TriggerName();
		trigger_name_->generate();

	GENERATEEND
}

IR*  DropViewStmt::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

		auto tmp1= SAFETRANSLATE(opt_if_exist_);
		auto tmp2= SAFETRANSLATE(view_name_);
		auto tmp3= SAFETRANSLATE(opt_restrict_or_cascade_);
		auto tmp4 = new IR(kUnknown52, OP3("DROP VIEW","",""), tmp1, tmp2);
		PUSH(tmp4);
		res = new IR(kDropViewStmt, OP3("","",""), tmp4, tmp3, case_idx_);

	TRANSLATEEND
}

void DropViewStmt::deep_delete(){
	SAFEDELETE(opt_if_exist_);
	SAFEDELETE(view_name_);
	SAFEDELETE(opt_restrict_or_cascade_);
	delete this;
}

void DropViewStmt::generate(){
	GENERATESTART(1)

		opt_if_exist_ = new OptIfExist();
		opt_if_exist_->generate();
		view_name_ = new ViewName();
		view_name_->generate();
		opt_restrict_or_cascade_ = new OptRestrictOrCascade();
		opt_restrict_or_cascade_->generate();

	GENERATEEND
}

IR*  InsertStmt::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(opt_priority_);
		auto tmp2= SAFETRANSLATE(opt_ignore_);
		auto tmp3= SAFETRANSLATE(opt_into_);
		auto tmp4= SAFETRANSLATE(table_name_1_);
		auto tmp5= SAFETRANSLATE(opt_column_name_list_p_);
		auto tmp6= SAFETRANSLATE(value_or_values_);
		auto tmp7= SAFETRANSLATE(super_value_list_);
		auto tmp8= SAFETRANSLATE(opt_as_row_alias_);
		auto tmp9= SAFETRANSLATE(opt_on_duplicate_);
		auto tmp10 = new IR(kUnknown53, OP3("INSERT","",""), tmp1, tmp2);
		PUSH(tmp10);
		auto tmp11 = new IR(kUnknown54, OP3("","",""), tmp10, tmp3);
		PUSH(tmp11);
		auto tmp12 = new IR(kUnknown55, OP3("","",""), tmp11, tmp4);
		PUSH(tmp12);
		auto tmp13 = new IR(kUnknown56, OP3("","",""), tmp12, tmp5);
		PUSH(tmp13);
		auto tmp14 = new IR(kUnknown57, OP3("","",""), tmp13, tmp6);
		PUSH(tmp14);
		auto tmp15 = new IR(kUnknown58, OP3("","",""), tmp14, tmp7);
		PUSH(tmp15);
		auto tmp16 = new IR(kUnknown59, OP3("","",""), tmp15, tmp8);
		PUSH(tmp16);
		res = new IR(kInsertStmt, OP3("","",""), tmp16, tmp9, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(opt_priority_);
		auto tmp2= SAFETRANSLATE(opt_ignore_);
		auto tmp3= SAFETRANSLATE(opt_into_);
		auto tmp4= SAFETRANSLATE(table_name_1_);
		auto tmp5= SAFETRANSLATE(opt_as_row_alias_);
		auto tmp6= SAFETRANSLATE(assignment_list_);
		auto tmp7= SAFETRANSLATE(opt_on_duplicate_);
		auto tmp8 = new IR(kUnknown60, OP3("INSERT","",""), tmp1, tmp2);
		PUSH(tmp8);
		auto tmp9 = new IR(kUnknown61, OP3("","",""), tmp8, tmp3);
		PUSH(tmp9);
		auto tmp10 = new IR(kUnknown62, OP3("","",""), tmp9, tmp4);
		PUSH(tmp10);
		auto tmp11 = new IR(kUnknown63, OP3("","","SET"), tmp10, tmp5);
		PUSH(tmp11);
		auto tmp12 = new IR(kUnknown64, OP3("","",""), tmp11, tmp6);
		PUSH(tmp12);
		res = new IR(kInsertStmt, OP3("","",""), tmp12, tmp7, case_idx_);
		CASEEND
		CASESTART(2)
		auto tmp1= SAFETRANSLATE(opt_priority_);
		auto tmp2= SAFETRANSLATE(opt_ignore_);
		auto tmp3= SAFETRANSLATE(opt_into_);
		auto tmp4= SAFETRANSLATE(table_name_1_);
		auto tmp5= SAFETRANSLATE(opt_column_name_list_p_);
		auto tmp6= SAFETRANSLATE(opt_as_row_alias_);
		auto tmp7= SAFETRANSLATE(select_no_parens_);
		auto tmp8= SAFETRANSLATE(opt_on_duplicate_);
		auto tmp9 = new IR(kUnknown65, OP3("INSERT","",""), tmp1, tmp2);
		PUSH(tmp9);
		auto tmp10 = new IR(kUnknown66, OP3("","",""), tmp9, tmp3);
		PUSH(tmp10);
		auto tmp11 = new IR(kUnknown67, OP3("","",""), tmp10, tmp4);
		PUSH(tmp11);
		auto tmp12 = new IR(kUnknown68, OP3("","",""), tmp11, tmp5);
		PUSH(tmp12);
		auto tmp13 = new IR(kUnknown69, OP3("","",""), tmp12, tmp6);
		PUSH(tmp13);
		auto tmp14 = new IR(kUnknown70, OP3("","",""), tmp13, tmp7);
		PUSH(tmp14);
		res = new IR(kInsertStmt, OP3("","",""), tmp14, tmp8, case_idx_);
		CASEEND
		CASESTART(3)
		auto tmp1= SAFETRANSLATE(opt_priority_);
		auto tmp2= SAFETRANSLATE(opt_ignore_);
		auto tmp3= SAFETRANSLATE(opt_into_);
		auto tmp4= SAFETRANSLATE(table_name_1_);
		auto tmp5= SAFETRANSLATE(opt_column_name_list_p_);
		auto tmp6= SAFETRANSLATE(opt_as_row_alias_);
		auto tmp7= SAFETRANSLATE(table_name_2_);
		auto tmp8= SAFETRANSLATE(opt_on_duplicate_);
		auto tmp9 = new IR(kUnknown71, OP3("INSERT","",""), tmp1, tmp2);
		PUSH(tmp9);
		auto tmp10 = new IR(kUnknown72, OP3("","",""), tmp9, tmp3);
		PUSH(tmp10);
		auto tmp11 = new IR(kUnknown73, OP3("","",""), tmp10, tmp4);
		PUSH(tmp11);
		auto tmp12 = new IR(kUnknown74, OP3("","",""), tmp11, tmp5);
		PUSH(tmp12);
		auto tmp13 = new IR(kUnknown75, OP3("","","TABLE"), tmp12, tmp6);
		PUSH(tmp13);
		auto tmp14 = new IR(kUnknown76, OP3("","",""), tmp13, tmp7);
		PUSH(tmp14);
		res = new IR(kInsertStmt, OP3("","",""), tmp14, tmp8, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void InsertStmt::deep_delete(){
	SAFEDELETE(opt_priority_);
	SAFEDELETE(opt_ignore_);
	SAFEDELETE(opt_into_);
	SAFEDELETE(table_name_1_);
	SAFEDELETE(opt_column_name_list_p_);
	SAFEDELETE(value_or_values_);
	SAFEDELETE(super_value_list_);
	SAFEDELETE(opt_as_row_alias_);
	SAFEDELETE(opt_on_duplicate_);
	SAFEDELETE(assignment_list_);
	SAFEDELETE(select_no_parens_);
	SAFEDELETE(table_name_2_);
	delete this;
}

void InsertStmt::generate(){
	GENERATESTART(4)

	SWITCHSTART
		CASESTART(0)
		opt_priority_ = new OptPriority();
		opt_priority_->generate();
		opt_ignore_ = new OptIgnore();
		opt_ignore_->generate();
		opt_into_ = new OptInto();
		opt_into_->generate();
		table_name_1_ = new TableName();
		table_name_1_->generate();
		opt_column_name_list_p_ = new OptColumnNameListP();
		opt_column_name_list_p_->generate();
		value_or_values_ = new ValueOrValues();
		value_or_values_->generate();
		super_value_list_ = new SuperValueList();
		super_value_list_->generate();
		opt_as_row_alias_ = new OptAsRowAlias();
		opt_as_row_alias_->generate();
		opt_on_duplicate_ = new OptOnDuplicate();
		opt_on_duplicate_->generate();
		CASEEND
		CASESTART(1)
		opt_priority_ = new OptPriority();
		opt_priority_->generate();
		opt_ignore_ = new OptIgnore();
		opt_ignore_->generate();
		opt_into_ = new OptInto();
		opt_into_->generate();
		table_name_1_ = new TableName();
		table_name_1_->generate();
		opt_as_row_alias_ = new OptAsRowAlias();
		opt_as_row_alias_->generate();
		assignment_list_ = new AssignmentList();
		assignment_list_->generate();
		opt_on_duplicate_ = new OptOnDuplicate();
		opt_on_duplicate_->generate();
		CASEEND
		CASESTART(2)
		opt_priority_ = new OptPriority();
		opt_priority_->generate();
		opt_ignore_ = new OptIgnore();
		opt_ignore_->generate();
		opt_into_ = new OptInto();
		opt_into_->generate();
		table_name_1_ = new TableName();
		table_name_1_->generate();
		opt_column_name_list_p_ = new OptColumnNameListP();
		opt_column_name_list_p_->generate();
		opt_as_row_alias_ = new OptAsRowAlias();
		opt_as_row_alias_->generate();
		select_no_parens_ = new SelectNoParens();
		select_no_parens_->generate();
		opt_on_duplicate_ = new OptOnDuplicate();
		opt_on_duplicate_->generate();
		CASEEND
		CASESTART(3)
		opt_priority_ = new OptPriority();
		opt_priority_->generate();
		opt_ignore_ = new OptIgnore();
		opt_ignore_->generate();
		opt_into_ = new OptInto();
		opt_into_->generate();
		table_name_1_ = new TableName();
		table_name_1_->generate();
		opt_column_name_list_p_ = new OptColumnNameListP();
		opt_column_name_list_p_->generate();
		opt_as_row_alias_ = new OptAsRowAlias();
		opt_as_row_alias_->generate();
		table_name_2_ = new TableName();
		table_name_2_->generate();
		opt_on_duplicate_ = new OptOnDuplicate();
		opt_on_duplicate_->generate();
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  OptPriority::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		res = new IR(kOptPriority, OP3("LOW_PRIORITY","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptPriority, OP3("DELAYED","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(2)
		res = new IR(kOptPriority, OP3("HIGH_PRIORITY","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(3)
		res = new IR(kOptPriority, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptPriority::deep_delete(){
	delete this;
}

void OptPriority::generate(){
	GENERATESTART(4)

	SWITCHSTART
		CASESTART(0)
		CASEEND
		CASESTART(1)
		CASEEND
		CASESTART(2)
		CASEEND
		CASESTART(3)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  OptLowPriority::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		res = new IR(kOptLowPriority, OP3("LOW_PRIORITY","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptLowPriority, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptLowPriority::deep_delete(){
	delete this;
}

void OptLowPriority::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  OptInto::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		res = new IR(kOptInto, OP3("INTO","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptInto, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptInto::deep_delete(){
	delete this;
}

void OptInto::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  ValueOrValues::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		res = new IR(kValueOrValues, OP3("VALUE","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kValueOrValues, OP3("VALUES","",""), NULL, NULL, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void ValueOrValues::deep_delete(){
	delete this;
}

void ValueOrValues::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  SuperValueList::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(value_list_);
		res = new IR(kSuperValueList, OP3("(",")",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(value_list_);
		auto tmp2= SAFETRANSLATE(super_value_list_);
		res = new IR(kSuperValueList, OP3("(",") ,",""), tmp1, tmp2, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void SuperValueList::deep_delete(){
	SAFEDELETE(value_list_);
	SAFEDELETE(super_value_list_);
	delete this;
}

void SuperValueList::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		value_list_ = new ValueList();
		value_list_->generate();
		CASEEND
		CASESTART(1)
		value_list_ = new ValueList();
		value_list_->generate();
		super_value_list_ = new SuperValueList();
		super_value_list_->generate();
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  ValueList::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(value_);
		res = new IR(kValueList, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(value_);
		auto tmp2= SAFETRANSLATE(value_list_);
		res = new IR(kValueList, OP3("",",",""), tmp1, tmp2, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void ValueList::deep_delete(){
	SAFEDELETE(value_);
	SAFEDELETE(value_list_);
	delete this;
}

void ValueList::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		value_ = new Value();
		value_->generate();
		CASEEND
		CASESTART(1)
		value_ = new Value();
		value_->generate();
		value_list_ = new ValueList();
		value_list_->generate();
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  Value::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(expr_);
		res = new IR(kValue, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kValue, OP3("DEFAULT","",""), NULL, NULL, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void Value::deep_delete(){
	SAFEDELETE(expr_);
	delete this;
}

void Value::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		expr_ = new Expr();
		expr_->generate();
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  OptAsRowAlias::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(row_alias_);
		auto tmp2= SAFETRANSLATE(opt_col_alias_);
		res = new IR(kOptAsRowAlias, OP3("AS","",""), tmp1, tmp2, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptAsRowAlias, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptAsRowAlias::deep_delete(){
	SAFEDELETE(row_alias_);
	SAFEDELETE(opt_col_alias_);
	delete this;
}

void OptAsRowAlias::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		row_alias_ = new RowAlias();
		row_alias_->generate();
		opt_col_alias_ = new OptColAlias();
		opt_col_alias_->generate();
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  RowAlias::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

		auto tmp1= SAFETRANSLATE(identifier_);
		res = new IR(kRowAlias, OP3("","",""), tmp1, NULL, case_idx_);

	TRANSLATEEND
}

void RowAlias::deep_delete(){
	SAFEDELETE(identifier_);
	delete this;
}

void RowAlias::generate(){
	GENERATESTART(1)

		identifier_ = new Identifier();
		identifier_->generate();

	GENERATEEND
}

IR*  OptColAlias::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(col_alias_list_);
		res = new IR(kOptColAlias, OP3("(",")",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptColAlias, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptColAlias::deep_delete(){
	SAFEDELETE(col_alias_list_);
	delete this;
}

void OptColAlias::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		col_alias_list_ = new ColAliasList();
		col_alias_list_->generate();
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  ColAliasList::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(col_alias_);
		res = new IR(kColAliasList, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(col_alias_);
		auto tmp2= SAFETRANSLATE(col_alias_list_);
		res = new IR(kColAliasList, OP3("",",",""), tmp1, tmp2, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void ColAliasList::deep_delete(){
	SAFEDELETE(col_alias_);
	SAFEDELETE(col_alias_list_);
	delete this;
}

void ColAliasList::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		col_alias_ = new ColAlias();
		col_alias_->generate();
		CASEEND
		CASESTART(1)
		col_alias_ = new ColAlias();
		col_alias_->generate();
		col_alias_list_ = new ColAliasList();
		col_alias_list_->generate();
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  ColAlias::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

		auto tmp1= SAFETRANSLATE(identifier_);
		res = new IR(kColAlias, OP3("","",""), tmp1, NULL, case_idx_);

	TRANSLATEEND
}

void ColAlias::deep_delete(){
	SAFEDELETE(identifier_);
	delete this;
}

void ColAlias::generate(){
	GENERATESTART(1)

		identifier_ = new Identifier();
		identifier_->generate();

	GENERATEEND
}

IR*  OptOnDuplicate::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(assignment_list_);
		res = new IR(kOptOnDuplicate, OP3("ON DUPLICATE KEY UPDATE","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptOnDuplicate, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptOnDuplicate::deep_delete(){
	SAFEDELETE(assignment_list_);
	delete this;
}

void OptOnDuplicate::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		assignment_list_ = new AssignmentList();
		assignment_list_->generate();
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  KeyPartList::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(key_part_);
		res = new IR(kKeyPartList, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(key_part_);
		auto tmp2= SAFETRANSLATE(key_part_list_);
		res = new IR(kKeyPartList, OP3("",",",""), tmp1, tmp2, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void KeyPartList::deep_delete(){
	SAFEDELETE(key_part_);
	SAFEDELETE(key_part_list_);
	delete this;
}

void KeyPartList::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		key_part_ = new KeyPart();
		key_part_->generate();
		CASEEND
		CASESTART(1)
		key_part_ = new KeyPart();
		key_part_->generate();
		key_part_list_ = new KeyPartList();
		key_part_list_->generate();
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  KeyPart::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

		auto tmp1= SAFETRANSLATE(expr_);
		auto tmp2= SAFETRANSLATE(opt_order_behavior_);
		res = new IR(kKeyPart, OP3("","",""), tmp1, tmp2, case_idx_);

	TRANSLATEEND
}

void KeyPart::deep_delete(){
	SAFEDELETE(expr_);
	SAFEDELETE(opt_order_behavior_);
	delete this;
}

void KeyPart::generate(){
	GENERATESTART(1)

		expr_ = new Expr();
		expr_->generate();
		opt_order_behavior_ = new OptOrderBehavior();
		opt_order_behavior_->generate();

	GENERATEEND
}

IR*  UpdateStmt::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

		auto tmp1= SAFETRANSLATE(opt_with_clause_);
		auto tmp2= SAFETRANSLATE(opt_low_priority_);
		auto tmp3= SAFETRANSLATE(opt_ignore_);
		auto tmp4= SAFETRANSLATE(table_ref_);
		auto tmp5= SAFETRANSLATE(assignment_list_);
		auto tmp6= SAFETRANSLATE(opt_where_clause_);
		auto tmp7= SAFETRANSLATE(opt_order_clause_);
		auto tmp8= SAFETRANSLATE(opt_limit_row_count_);
		auto tmp9 = new IR(kUnknown77, OP3("","UPDATE",""), tmp1, tmp2);
		PUSH(tmp9);
		auto tmp10 = new IR(kUnknown78, OP3("","",""), tmp9, tmp3);
		PUSH(tmp10);
		auto tmp11 = new IR(kUnknown79, OP3("","","SET"), tmp10, tmp4);
		PUSH(tmp11);
		auto tmp12 = new IR(kUnknown80, OP3("","",""), tmp11, tmp5);
		PUSH(tmp12);
		auto tmp13 = new IR(kUnknown81, OP3("","",""), tmp12, tmp6);
		PUSH(tmp13);
		auto tmp14 = new IR(kUnknown82, OP3("","",""), tmp13, tmp7);
		PUSH(tmp14);
		res = new IR(kUpdateStmt, OP3("","",""), tmp14, tmp8, case_idx_);

	TRANSLATEEND
}

void UpdateStmt::deep_delete(){
	SAFEDELETE(opt_with_clause_);
	SAFEDELETE(opt_low_priority_);
	SAFEDELETE(opt_ignore_);
	SAFEDELETE(table_ref_);
	SAFEDELETE(assignment_list_);
	SAFEDELETE(opt_where_clause_);
	SAFEDELETE(opt_order_clause_);
	SAFEDELETE(opt_limit_row_count_);
	delete this;
}

void UpdateStmt::generate(){
	GENERATESTART(1)

		opt_with_clause_ = new OptWithClause();
		opt_with_clause_->generate();
		opt_low_priority_ = new OptLowPriority();
		opt_low_priority_->generate();
		opt_ignore_ = new OptIgnore();
		opt_ignore_->generate();
		table_ref_ = new TableRef();
		table_ref_->generate();
		assignment_list_ = new AssignmentList();
		assignment_list_->generate();
		opt_where_clause_ = new OptWhereClause();
		opt_where_clause_->generate();
		opt_order_clause_ = new OptOrderClause();
		opt_order_clause_->generate();
		opt_limit_row_count_ = new OptLimitRowCount();
		opt_limit_row_count_->generate();

	GENERATEEND
}

IR*  OptIgnore::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		res = new IR(kOptIgnore, OP3("IGNORE","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptIgnore, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptIgnore::deep_delete(){
	delete this;
}

void OptIgnore::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  AlterAction::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(table_name_);
		res = new IR(kAlterAction, OP3("RENAME TO","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(column_name_1_);
		auto tmp2= SAFETRANSLATE(column_name_2_);
		res = new IR(kAlterAction, OP3("RENAME COLUMN","TO",""), tmp1, tmp2, case_idx_);
		CASEEND
		CASESTART(2)
		auto tmp1= SAFETRANSLATE(opt_column_);
		auto tmp2= SAFETRANSLATE(column_def_);
		res = new IR(kAlterAction, OP3("ADD","",""), tmp1, tmp2, case_idx_);
		CASEEND
		CASESTART(3)
		auto tmp1= SAFETRANSLATE(opt_column_);
		auto tmp2= SAFETRANSLATE(column_name_1_);
		res = new IR(kAlterAction, OP3("DROP","",""), tmp1, tmp2, case_idx_);
		CASEEND
		CASESTART(4)
		auto tmp1= SAFETRANSLATE(alter_constant_action_);
		res = new IR(kAlterAction, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(5)
		auto tmp1= SAFETRANSLATE(opt_column_);
		auto tmp2= SAFETRANSLATE(column_def_list_);
		res = new IR(kAlterAction, OP3("ADD","(",")"), tmp1, tmp2, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void AlterAction::deep_delete(){
	SAFEDELETE(table_name_);
	SAFEDELETE(column_name_1_);
	SAFEDELETE(column_name_2_);
	SAFEDELETE(opt_column_);
	SAFEDELETE(column_def_);
	SAFEDELETE(alter_constant_action_);
	SAFEDELETE(column_def_list_);
	delete this;
}

void AlterAction::generate(){
	GENERATESTART(6)

	SWITCHSTART
		CASESTART(0)
		table_name_ = new TableName();
		table_name_->generate();
		CASEEND
		CASESTART(1)
		column_name_1_ = new ColumnName();
		column_name_1_->generate();
		column_name_2_ = new ColumnName();
		column_name_2_->generate();
		CASEEND
		CASESTART(2)
		opt_column_ = new OptColumn();
		opt_column_->generate();
		column_def_ = new ColumnDef();
		column_def_->generate();
		CASEEND
		CASESTART(3)
		opt_column_ = new OptColumn();
		opt_column_->generate();
		column_name_1_ = new ColumnName();
		column_name_1_->generate();
		CASEEND
		CASESTART(4)
		alter_constant_action_ = new AlterConstantAction();
		alter_constant_action_->generate();
		CASEEND
		CASESTART(5)
		opt_column_ = new OptColumn();
		opt_column_->generate();
		column_def_list_ = new ColumnDefList();
		column_def_list_->generate();
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  AlterConstantAction::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		res = new IR(kAlterConstantAction, OP3("DROP PRIMARY KEY","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kAlterConstantAction, OP3("FORCE","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(2)
		res = new IR(kAlterConstantAction, OP3("DISABLE KEYS","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(3)
		res = new IR(kAlterConstantAction, OP3("ENABLE KEYS","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(4)
		auto tmp1= SAFETRANSLATE(lock_option_);
		res = new IR(kAlterConstantAction, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(5)
		res = new IR(kAlterConstantAction, OP3("WITH VALIDATION","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(6)
		res = new IR(kAlterConstantAction, OP3("WITHOUT VALIDATION","",""), NULL, NULL, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void AlterConstantAction::deep_delete(){
	SAFEDELETE(lock_option_);
	delete this;
}

void AlterConstantAction::generate(){
	GENERATESTART(7)

	SWITCHSTART
		CASESTART(0)
		CASEEND
		CASESTART(1)
		CASEEND
		CASESTART(2)
		CASEEND
		CASESTART(3)
		CASEEND
		CASESTART(4)
		lock_option_ = new LockOption();
		lock_option_->generate();
		CASEEND
		CASESTART(5)
		CASEEND
		CASESTART(6)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  OptCreateDefinitionListP::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(create_definition_list_);
		res = new IR(kOptCreateDefinitionListP, OP3("(",")",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptCreateDefinitionListP, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptCreateDefinitionListP::deep_delete(){
	SAFEDELETE(create_definition_list_);
	delete this;
}

void OptCreateDefinitionListP::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		create_definition_list_ = new CreateDefinitionList();
		create_definition_list_->generate();
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  CreateDefinitionList::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(create_definition_);
		res = new IR(kCreateDefinitionList, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(create_definition_);
		auto tmp2= SAFETRANSLATE(create_definition_list_);
		res = new IR(kCreateDefinitionList, OP3("",",",""), tmp1, tmp2, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void CreateDefinitionList::deep_delete(){
	SAFEDELETE(create_definition_);
	SAFEDELETE(create_definition_list_);
	delete this;
}

void CreateDefinitionList::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		create_definition_ = new CreateDefinition();
		create_definition_->generate();
		CASEEND
		CASESTART(1)
		create_definition_ = new CreateDefinition();
		create_definition_->generate();
		create_definition_list_ = new CreateDefinitionList();
		create_definition_list_->generate();
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  CreateDefinition::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(column_name_);
		auto tmp2= SAFETRANSLATE(column_definition_);
		res = new IR(kCreateDefinition, OP3("","",""), tmp1, tmp2, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(index_or_key_);
		auto tmp2= SAFETRANSLATE(opt_index_name_);
		auto tmp3= SAFETRANSLATE(opt_index_type_);
		auto tmp4= SAFETRANSLATE(key_part_list_);
		auto tmp5= SAFETRANSLATE(opt_index_option_);
		auto tmp6 = new IR(kUnknown83, OP3("","",""), tmp1, tmp2);
		PUSH(tmp6);
		auto tmp7 = new IR(kUnknown84, OP3("","","("), tmp6, tmp3);
		PUSH(tmp7);
		auto tmp8 = new IR(kUnknown85, OP3("","",")"), tmp7, tmp4);
		PUSH(tmp8);
		res = new IR(kCreateDefinition, OP3("","",""), tmp8, tmp5, case_idx_);
		CASEEND
		CASESTART(2)
		auto tmp1= SAFETRANSLATE(fulltext_or_spatial_);
		auto tmp2= SAFETRANSLATE(opt_index_or_key_);
		auto tmp3= SAFETRANSLATE(opt_index_name_);
		auto tmp4= SAFETRANSLATE(key_part_list_);
		auto tmp5= SAFETRANSLATE(opt_index_option_);
		auto tmp6 = new IR(kUnknown86, OP3("","",""), tmp1, tmp2);
		PUSH(tmp6);
		auto tmp7 = new IR(kUnknown87, OP3("","","("), tmp6, tmp3);
		PUSH(tmp7);
		auto tmp8 = new IR(kUnknown88, OP3("","",")"), tmp7, tmp4);
		PUSH(tmp8);
		res = new IR(kCreateDefinition, OP3("","",""), tmp8, tmp5, case_idx_);
		CASEEND
		CASESTART(3)
		auto tmp1= SAFETRANSLATE(opt_constraint_symbol_);
		auto tmp2= SAFETRANSLATE(opt_index_type_);
		auto tmp3= SAFETRANSLATE(key_part_list_);
		auto tmp4= SAFETRANSLATE(opt_index_option_);
		auto tmp5 = new IR(kUnknown89, OP3("","PRIMARY KEY","("), tmp1, tmp2);
		PUSH(tmp5);
		auto tmp6 = new IR(kUnknown90, OP3("","",")"), tmp5, tmp3);
		PUSH(tmp6);
		res = new IR(kCreateDefinition, OP3("","",""), tmp6, tmp4, case_idx_);
		CASEEND
		CASESTART(4)
		auto tmp1= SAFETRANSLATE(opt_constraint_symbol_);
		auto tmp2= SAFETRANSLATE(opt_index_or_key_);
		auto tmp3= SAFETRANSLATE(opt_index_name_);
		auto tmp4= SAFETRANSLATE(opt_index_type_);
		auto tmp5= SAFETRANSLATE(key_part_list_);
		auto tmp6= SAFETRANSLATE(opt_index_option_);
		auto tmp7 = new IR(kUnknown91, OP3("","UNIQUE",""), tmp1, tmp2);
		PUSH(tmp7);
		auto tmp8 = new IR(kUnknown92, OP3("","",""), tmp7, tmp3);
		PUSH(tmp8);
		auto tmp9 = new IR(kUnknown93, OP3("","","("), tmp8, tmp4);
		PUSH(tmp9);
		auto tmp10 = new IR(kUnknown94, OP3("","",")"), tmp9, tmp5);
		PUSH(tmp10);
		res = new IR(kCreateDefinition, OP3("","",""), tmp10, tmp6, case_idx_);
		CASEEND
		CASESTART(5)
		auto tmp1= SAFETRANSLATE(opt_constraint_symbol_);
		auto tmp2= SAFETRANSLATE(opt_index_name_);
		auto tmp3= SAFETRANSLATE(column_name_list_);
		auto tmp4= SAFETRANSLATE(reference_definition_);
		auto tmp5 = new IR(kUnknown95, OP3("","FOREIGN KEY","("), tmp1, tmp2);
		PUSH(tmp5);
		auto tmp6 = new IR(kUnknown96, OP3("","",")"), tmp5, tmp3);
		PUSH(tmp6);
		res = new IR(kCreateDefinition, OP3("","",""), tmp6, tmp4, case_idx_);
		CASEEND
		CASESTART(6)
		auto tmp1= SAFETRANSLATE(check_constraint_definition_);
		res = new IR(kCreateDefinition, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void CreateDefinition::deep_delete(){
	SAFEDELETE(column_name_);
	SAFEDELETE(column_definition_);
	SAFEDELETE(index_or_key_);
	SAFEDELETE(opt_index_name_);
	SAFEDELETE(opt_index_type_);
	SAFEDELETE(key_part_list_);
	SAFEDELETE(opt_index_option_);
	SAFEDELETE(fulltext_or_spatial_);
	SAFEDELETE(opt_index_or_key_);
	SAFEDELETE(opt_constraint_symbol_);
	SAFEDELETE(column_name_list_);
	SAFEDELETE(reference_definition_);
	SAFEDELETE(check_constraint_definition_);
	delete this;
}

void CreateDefinition::generate(){
	GENERATESTART(7)

	SWITCHSTART
		CASESTART(0)
		column_name_ = new ColumnName();
		column_name_->generate();
		column_definition_ = new ColumnDefinition();
		column_definition_->generate();
		CASEEND
		CASESTART(1)
		index_or_key_ = new IndexOrKey();
		index_or_key_->generate();
		opt_index_name_ = new OptIndexName();
		opt_index_name_->generate();
		opt_index_type_ = new OptIndexType();
		opt_index_type_->generate();
		key_part_list_ = new KeyPartList();
		key_part_list_->generate();
		opt_index_option_ = new OptIndexOption();
		opt_index_option_->generate();
		CASEEND
		CASESTART(2)
		fulltext_or_spatial_ = new FulltextOrSpatial();
		fulltext_or_spatial_->generate();
		opt_index_or_key_ = new OptIndexOrKey();
		opt_index_or_key_->generate();
		opt_index_name_ = new OptIndexName();
		opt_index_name_->generate();
		key_part_list_ = new KeyPartList();
		key_part_list_->generate();
		opt_index_option_ = new OptIndexOption();
		opt_index_option_->generate();
		CASEEND
		CASESTART(3)
		opt_constraint_symbol_ = new OptConstraintSymbol();
		opt_constraint_symbol_->generate();
		opt_index_type_ = new OptIndexType();
		opt_index_type_->generate();
		key_part_list_ = new KeyPartList();
		key_part_list_->generate();
		opt_index_option_ = new OptIndexOption();
		opt_index_option_->generate();
		CASEEND
		CASESTART(4)
		opt_constraint_symbol_ = new OptConstraintSymbol();
		opt_constraint_symbol_->generate();
		opt_index_or_key_ = new OptIndexOrKey();
		opt_index_or_key_->generate();
		opt_index_name_ = new OptIndexName();
		opt_index_name_->generate();
		opt_index_type_ = new OptIndexType();
		opt_index_type_->generate();
		key_part_list_ = new KeyPartList();
		key_part_list_->generate();
		opt_index_option_ = new OptIndexOption();
		opt_index_option_->generate();
		CASEEND
		CASESTART(5)
		opt_constraint_symbol_ = new OptConstraintSymbol();
		opt_constraint_symbol_->generate();
		opt_index_name_ = new OptIndexName();
		opt_index_name_->generate();
		column_name_list_ = new ColumnNameList();
		column_name_list_->generate();
		reference_definition_ = new ReferenceDefinition();
		reference_definition_->generate();
		CASEEND
		CASESTART(6)
		check_constraint_definition_ = new CheckConstraintDefinition();
		check_constraint_definition_->generate();
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  ColumnDefinition::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

		auto tmp1= SAFETRANSLATE(data_type_);
		auto tmp2= SAFETRANSLATE(opt_null_not_null_);
		auto tmp3= SAFETRANSLATE(opt_visible_invisible_);
		auto tmp4= SAFETRANSLATE(opt_auto_increment_);
		auto tmp5= SAFETRANSLATE(opt_unique_primary_);
		auto tmp6= SAFETRANSLATE(opt_column_format_);
		auto tmp7= SAFETRANSLATE(opt_storage_);
		auto tmp8= SAFETRANSLATE(opt_reference_definition_);
		auto tmp9= SAFETRANSLATE(opt_check_constraint_definition_);
		auto tmp10 = new IR(kUnknown97, OP3("","",""), tmp1, tmp2);
		PUSH(tmp10);
		auto tmp11 = new IR(kUnknown98, OP3("","",""), tmp10, tmp3);
		PUSH(tmp11);
		auto tmp12 = new IR(kUnknown99, OP3("","",""), tmp11, tmp4);
		PUSH(tmp12);
		auto tmp13 = new IR(kUnknown100, OP3("","",""), tmp12, tmp5);
		PUSH(tmp13);
		auto tmp14 = new IR(kUnknown101, OP3("","",""), tmp13, tmp6);
		PUSH(tmp14);
		auto tmp15 = new IR(kUnknown102, OP3("","",""), tmp14, tmp7);
		PUSH(tmp15);
		auto tmp16 = new IR(kUnknown103, OP3("","",""), tmp15, tmp8);
		PUSH(tmp16);
		res = new IR(kColumnDefinition, OP3("","",""), tmp16, tmp9, case_idx_);

	TRANSLATEEND
}

void ColumnDefinition::deep_delete(){
	SAFEDELETE(data_type_);
	SAFEDELETE(opt_null_not_null_);
	SAFEDELETE(opt_visible_invisible_);
	SAFEDELETE(opt_auto_increment_);
	SAFEDELETE(opt_unique_primary_);
	SAFEDELETE(opt_column_format_);
	SAFEDELETE(opt_storage_);
	SAFEDELETE(opt_reference_definition_);
	SAFEDELETE(opt_check_constraint_definition_);
	delete this;
}

void ColumnDefinition::generate(){
	GENERATESTART(1)

		data_type_ = new DataType();
		data_type_->generate();
		opt_null_not_null_ = new OptNullNotNull();
		opt_null_not_null_->generate();
		opt_visible_invisible_ = new OptVisibleInvisible();
		opt_visible_invisible_->generate();
		opt_auto_increment_ = new OptAutoIncrement();
		opt_auto_increment_->generate();
		opt_unique_primary_ = new OptUniquePrimary();
		opt_unique_primary_->generate();
		opt_column_format_ = new OptColumnFormat();
		opt_column_format_->generate();
		opt_storage_ = new OptStorage();
		opt_storage_->generate();
		opt_reference_definition_ = new OptReferenceDefinition();
		opt_reference_definition_->generate();
		opt_check_constraint_definition_ = new OptCheckConstraintDefinition();
		opt_check_constraint_definition_->generate();

	GENERATEEND
}

IR*  FulltextOrSpatial::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		res = new IR(kFulltextOrSpatial, OP3("FULLTEXT","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kFulltextOrSpatial, OP3("SPATIAL","",""), NULL, NULL, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void FulltextOrSpatial::deep_delete(){
	delete this;
}

void FulltextOrSpatial::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  OptIndexOrKey::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(index_or_key_);
		res = new IR(kOptIndexOrKey, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptIndexOrKey, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptIndexOrKey::deep_delete(){
	SAFEDELETE(index_or_key_);
	delete this;
}

void OptIndexOrKey::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		index_or_key_ = new IndexOrKey();
		index_or_key_->generate();
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  IndexOrKey::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		res = new IR(kIndexOrKey, OP3("INDEX","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kIndexOrKey, OP3("KEY","",""), NULL, NULL, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void IndexOrKey::deep_delete(){
	delete this;
}

void IndexOrKey::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  OptIndexName::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(index_name_);
		res = new IR(kOptIndexName, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptIndexName, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptIndexName::deep_delete(){
	SAFEDELETE(index_name_);
	delete this;
}

void OptIndexName::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		index_name_ = new IndexName();
		index_name_->generate();
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  OptNullNotNull::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		res = new IR(kOptNullNotNull, OP3("NOT NULL","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptNullNotNull, OP3("NULL","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(2)
		res = new IR(kOptNullNotNull, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptNullNotNull::deep_delete(){
	delete this;
}

void OptNullNotNull::generate(){
	GENERATESTART(3)

	SWITCHSTART
		CASESTART(0)
		CASEEND
		CASESTART(1)
		CASEEND
		CASESTART(2)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  OptVisibleInvisible::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(visible_invisible_);
		res = new IR(kOptVisibleInvisible, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptVisibleInvisible, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptVisibleInvisible::deep_delete(){
	SAFEDELETE(visible_invisible_);
	delete this;
}

void OptVisibleInvisible::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		visible_invisible_ = new VisibleInvisible();
		visible_invisible_->generate();
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  VisibleInvisible::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		res = new IR(kVisibleInvisible, OP3("VISIBLE","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kVisibleInvisible, OP3("INVISIBLE","",""), NULL, NULL, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void VisibleInvisible::deep_delete(){
	delete this;
}

void VisibleInvisible::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  OptAutoIncrement::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		res = new IR(kOptAutoIncrement, OP3("AUTO_INCREMENT","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptAutoIncrement, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptAutoIncrement::deep_delete(){
	delete this;
}

void OptAutoIncrement::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  OptUniquePrimary::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		res = new IR(kOptUniquePrimary, OP3("UNIQUE KEY","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptUniquePrimary, OP3("UNIQUE PRIMARY KEY","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(2)
		res = new IR(kOptUniquePrimary, OP3("UNIQUE KEY KEY","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(3)
		res = new IR(kOptUniquePrimary, OP3("UNIQUE KEY PRIMARY KEY","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(4)
		res = new IR(kOptUniquePrimary, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptUniquePrimary::deep_delete(){
	delete this;
}

void OptUniquePrimary::generate(){
	GENERATESTART(5)

	SWITCHSTART
		CASESTART(0)
		CASEEND
		CASESTART(1)
		CASEEND
		CASESTART(2)
		CASEEND
		CASESTART(3)
		CASEEND
		CASESTART(4)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  OptColumnFormat::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(column_format_);
		res = new IR(kOptColumnFormat, OP3("COLUMN_FORMAT","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptColumnFormat, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptColumnFormat::deep_delete(){
	SAFEDELETE(column_format_);
	delete this;
}

void OptColumnFormat::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		column_format_ = new ColumnFormat();
		column_format_->generate();
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  ColumnFormat::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		res = new IR(kColumnFormat, OP3("FIXED","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kColumnFormat, OP3("DYNAMIC","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(2)
		res = new IR(kColumnFormat, OP3("DEFAULT","",""), NULL, NULL, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void ColumnFormat::deep_delete(){
	delete this;
}

void ColumnFormat::generate(){
	GENERATESTART(3)

	SWITCHSTART
		CASESTART(0)
		CASEEND
		CASESTART(1)
		CASEEND
		CASESTART(2)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  OptStorage::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(storage_);
		res = new IR(kOptStorage, OP3("STORAGE","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptStorage, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptStorage::deep_delete(){
	SAFEDELETE(storage_);
	delete this;
}

void OptStorage::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		storage_ = new Storage();
		storage_->generate();
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  Storage::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		res = new IR(kStorage, OP3("DISK","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kStorage, OP3("MEMORY","",""), NULL, NULL, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void Storage::deep_delete(){
	delete this;
}

void Storage::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  OptReferenceDefinition::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(reference_definition_);
		res = new IR(kOptReferenceDefinition, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptReferenceDefinition, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptReferenceDefinition::deep_delete(){
	SAFEDELETE(reference_definition_);
	delete this;
}

void OptReferenceDefinition::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		reference_definition_ = new ReferenceDefinition();
		reference_definition_->generate();
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  ReferenceDefinition::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

		auto tmp1= SAFETRANSLATE(table_name_);
		auto tmp2= SAFETRANSLATE(key_part_list_);
		auto tmp3= SAFETRANSLATE(opt_match_);
		auto tmp4= SAFETRANSLATE(opt_on_delete_);
		auto tmp5= SAFETRANSLATE(opt_on_update_);
		auto tmp6 = new IR(kUnknown104, OP3("REFERENCES","(",")"), tmp1, tmp2);
		PUSH(tmp6);
		auto tmp7 = new IR(kUnknown105, OP3("","",""), tmp6, tmp3);
		PUSH(tmp7);
		auto tmp8 = new IR(kUnknown106, OP3("","",""), tmp7, tmp4);
		PUSH(tmp8);
		res = new IR(kReferenceDefinition, OP3("","",""), tmp8, tmp5, case_idx_);

	TRANSLATEEND
}

void ReferenceDefinition::deep_delete(){
	SAFEDELETE(table_name_);
	SAFEDELETE(key_part_list_);
	SAFEDELETE(opt_match_);
	SAFEDELETE(opt_on_delete_);
	SAFEDELETE(opt_on_update_);
	delete this;
}

void ReferenceDefinition::generate(){
	GENERATESTART(1)

		table_name_ = new TableName();
		table_name_->generate();
		key_part_list_ = new KeyPartList();
		key_part_list_->generate();
		opt_match_ = new OptMatch();
		opt_match_->generate();
		opt_on_delete_ = new OptOnDelete();
		opt_on_delete_->generate();
		opt_on_update_ = new OptOnUpdate();
		opt_on_update_->generate();

	GENERATEEND
}

IR*  OptMatch::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		res = new IR(kOptMatch, OP3("MATCH FULL","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptMatch, OP3("MATCH PARTIAL","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(2)
		res = new IR(kOptMatch, OP3("MATCH SIMPLE","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(3)
		res = new IR(kOptMatch, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptMatch::deep_delete(){
	delete this;
}

void OptMatch::generate(){
	GENERATESTART(4)

	SWITCHSTART
		CASESTART(0)
		CASEEND
		CASESTART(1)
		CASEEND
		CASESTART(2)
		CASEEND
		CASESTART(3)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  OptOnDelete::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(reference_option_);
		res = new IR(kOptOnDelete, OP3("ON DELETE","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptOnDelete, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptOnDelete::deep_delete(){
	SAFEDELETE(reference_option_);
	delete this;
}

void OptOnDelete::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		reference_option_ = new ReferenceOption();
		reference_option_->generate();
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  OptOnUpdate::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(reference_option_);
		res = new IR(kOptOnUpdate, OP3("ON UPDATE","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptOnUpdate, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptOnUpdate::deep_delete(){
	SAFEDELETE(reference_option_);
	delete this;
}

void OptOnUpdate::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		reference_option_ = new ReferenceOption();
		reference_option_->generate();
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  ReferenceOption::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		res = new IR(kReferenceOption, OP3("RESTRICT","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kReferenceOption, OP3("CASCADE","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(2)
		res = new IR(kReferenceOption, OP3("SET NULL","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(3)
		res = new IR(kReferenceOption, OP3("NO ACTION","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(4)
		res = new IR(kReferenceOption, OP3("SET DEFAULT","",""), NULL, NULL, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void ReferenceOption::deep_delete(){
	delete this;
}

void ReferenceOption::generate(){
	GENERATESTART(5)

	SWITCHSTART
		CASESTART(0)
		CASEEND
		CASESTART(1)
		CASEEND
		CASESTART(2)
		CASEEND
		CASESTART(3)
		CASEEND
		CASESTART(4)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  OptCheckConstraintDefinition::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(check_constraint_definition_);
		res = new IR(kOptCheckConstraintDefinition, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptCheckConstraintDefinition, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptCheckConstraintDefinition::deep_delete(){
	SAFEDELETE(check_constraint_definition_);
	delete this;
}

void OptCheckConstraintDefinition::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		check_constraint_definition_ = new CheckConstraintDefinition();
		check_constraint_definition_->generate();
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  CheckConstraintDefinition::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

		auto tmp1= SAFETRANSLATE(opt_constraint_symbol_);
		auto tmp2= SAFETRANSLATE(expr_);
		auto tmp3= SAFETRANSLATE(opt_enforced_);
		auto tmp4 = new IR(kUnknown107, OP3("","CHECK (",")"), tmp1, tmp2);
		PUSH(tmp4);
		res = new IR(kCheckConstraintDefinition, OP3("","",""), tmp4, tmp3, case_idx_);

	TRANSLATEEND
}

void CheckConstraintDefinition::deep_delete(){
	SAFEDELETE(opt_constraint_symbol_);
	SAFEDELETE(expr_);
	SAFEDELETE(opt_enforced_);
	delete this;
}

void CheckConstraintDefinition::generate(){
	GENERATESTART(1)

		opt_constraint_symbol_ = new OptConstraintSymbol();
		opt_constraint_symbol_->generate();
		expr_ = new Expr();
		expr_->generate();
		opt_enforced_ = new OptEnforced();
		opt_enforced_->generate();

	GENERATEEND
}

IR*  OptConstraintSymbol::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(symbol_);
		res = new IR(kOptConstraintSymbol, OP3("CONSTRAINT","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptConstraintSymbol, OP3("CONSTRAINT","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(2)
		res = new IR(kOptConstraintSymbol, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptConstraintSymbol::deep_delete(){
	SAFEDELETE(symbol_);
	delete this;
}

void OptConstraintSymbol::generate(){
	GENERATESTART(3)

	SWITCHSTART
		CASESTART(0)
		symbol_ = new Symbol();
		symbol_->generate();
		CASEEND
		CASESTART(1)
		CASEEND
		CASESTART(2)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  OptEnforced::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		res = new IR(kOptEnforced, OP3("ENFORCED","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptEnforced, OP3("NOT ENFORCED","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(2)
		res = new IR(kOptEnforced, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptEnforced::deep_delete(){
	delete this;
}

void OptEnforced::generate(){
	GENERATESTART(3)

	SWITCHSTART
		CASESTART(0)
		CASEEND
		CASESTART(1)
		CASEEND
		CASESTART(2)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  ColumnDefList::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(column_def_);
		res = new IR(kColumnDefList, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(column_def_list_);
		auto tmp2= SAFETRANSLATE(column_def_);
		res = new IR(kColumnDefList, OP3("",",",""), tmp1, tmp2, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void ColumnDefList::deep_delete(){
	SAFEDELETE(column_def_);
	SAFEDELETE(column_def_list_);
	delete this;
}

void ColumnDefList::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		column_def_ = new ColumnDef();
		column_def_->generate();
		CASEEND
		CASESTART(1)
		column_def_list_ = new ColumnDefList();
		column_def_list_->generate();
		column_def_ = new ColumnDef();
		column_def_->generate();
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  ColumnDef::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

		auto tmp1= SAFETRANSLATE(column_name_);
		auto tmp2= SAFETRANSLATE(column_definition_);
		res = new IR(kColumnDef, OP3("","",""), tmp1, tmp2, case_idx_);

	TRANSLATEEND
}

void ColumnDef::deep_delete(){
	SAFEDELETE(column_name_);
	SAFEDELETE(column_definition_);
	delete this;
}

void ColumnDef::generate(){
	GENERATESTART(1)

		column_name_ = new ColumnName();
		column_name_->generate();
		column_definition_ = new ColumnDefinition();
		column_definition_->generate();

	GENERATEEND
}

IR*  OptTemp::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		res = new IR(kOptTemp, OP3("TEMPORARY","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptTemp, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptTemp::deep_delete(){
	delete this;
}

void OptTemp::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  OptCheckOption::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		res = new IR(kOptCheckOption, OP3("WITH CHECK OPTION","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptCheckOption, OP3("WITH CASCADED CHECK OPTION","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(2)
		res = new IR(kOptCheckOption, OP3("WITH LOCAL CHECK OPTION","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(3)
		res = new IR(kOptCheckOption, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptCheckOption::deep_delete(){
	delete this;
}

void OptCheckOption::generate(){
	GENERATESTART(4)

	SWITCHSTART
		CASESTART(0)
		CASEEND
		CASESTART(1)
		CASEEND
		CASESTART(2)
		CASEEND
		CASESTART(3)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  OptColumnNameListP::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(column_name_list_);
		res = new IR(kOptColumnNameListP, OP3("(",")",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptColumnNameListP, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptColumnNameListP::deep_delete(){
	SAFEDELETE(column_name_list_);
	delete this;
}

void OptColumnNameListP::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		column_name_list_ = new ColumnNameList();
		column_name_list_->generate();
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  AssignmentList::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(assignment_);
		res = new IR(kAssignmentList, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(assignment_);
		auto tmp2= SAFETRANSLATE(assignment_list_);
		res = new IR(kAssignmentList, OP3("",",",""), tmp1, tmp2, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void AssignmentList::deep_delete(){
	SAFEDELETE(assignment_);
	SAFEDELETE(assignment_list_);
	delete this;
}

void AssignmentList::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		assignment_ = new Assignment();
		assignment_->generate();
		CASEEND
		CASESTART(1)
		assignment_ = new Assignment();
		assignment_->generate();
		assignment_list_ = new AssignmentList();
		assignment_list_->generate();
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  Assignment::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

		auto tmp1= SAFETRANSLATE(column_name_);
		auto tmp2= SAFETRANSLATE(value_);
		res = new IR(kAssignment, OP3("","=",""), tmp1, tmp2, case_idx_);

	TRANSLATEEND
}

void Assignment::deep_delete(){
	SAFEDELETE(column_name_);
	SAFEDELETE(value_);
	delete this;
}

void Assignment::generate(){
	GENERATESTART(1)

		column_name_ = new ColumnName();
		column_name_->generate();
		value_ = new Value();
		value_->generate();

	GENERATEEND
}

IR*  OptAsAlias::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(as_alias_);
		res = new IR(kOptAsAlias, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptAsAlias, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptAsAlias::deep_delete(){
	SAFEDELETE(as_alias_);
	delete this;
}

void OptAsAlias::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		as_alias_ = new AsAlias();
		as_alias_->generate();
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  Expr::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(operand_);
		res = new IR(kExpr, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(between_expr_);
		res = new IR(kExpr, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(2)
		auto tmp1= SAFETRANSLATE(exists_expr_);
		res = new IR(kExpr, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(3)
		auto tmp1= SAFETRANSLATE(in_expr_);
		res = new IR(kExpr, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(4)
		auto tmp1= SAFETRANSLATE(cast_expr_);
		res = new IR(kExpr, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(5)
		auto tmp1= SAFETRANSLATE(logic_expr_);
		res = new IR(kExpr, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void Expr::deep_delete(){
	SAFEDELETE(operand_);
	SAFEDELETE(between_expr_);
	SAFEDELETE(exists_expr_);
	SAFEDELETE(in_expr_);
	SAFEDELETE(cast_expr_);
	SAFEDELETE(logic_expr_);
	delete this;
}

void Expr::generate(){
	GENERATESTART(6)

	SWITCHSTART
		CASESTART(0)
		operand_ = new Operand();
		operand_->generate();
		CASEEND
		CASESTART(1)
		between_expr_ = new BetweenExpr();
		between_expr_->generate();
		CASEEND
		CASESTART(2)
		exists_expr_ = new ExistsExpr();
		exists_expr_->generate();
		CASEEND
		CASESTART(3)
		in_expr_ = new InExpr();
		in_expr_->generate();
		CASEEND
		CASESTART(4)
		cast_expr_ = new CastExpr();
		cast_expr_->generate();
		CASEEND
		CASESTART(5)
		logic_expr_ = new LogicExpr();
		logic_expr_->generate();
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  Operand::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(expr_list_);
		res = new IR(kOperand, OP3("(",")",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(array_index_);
		res = new IR(kOperand, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(2)
		auto tmp1= SAFETRANSLATE(scalar_expr_);
		res = new IR(kOperand, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(3)
		auto tmp1= SAFETRANSLATE(unary_expr_);
		res = new IR(kOperand, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(4)
		auto tmp1= SAFETRANSLATE(binary_expr_);
		res = new IR(kOperand, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(5)
		auto tmp1= SAFETRANSLATE(case_expr_);
		res = new IR(kOperand, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(6)
		auto tmp1= SAFETRANSLATE(extract_expr_);
		res = new IR(kOperand, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(7)
		auto tmp1= SAFETRANSLATE(array_expr_);
		res = new IR(kOperand, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(8)
		auto tmp1= SAFETRANSLATE(function_expr_);
		res = new IR(kOperand, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(9)
		auto tmp1= SAFETRANSLATE(select_no_parens_);
		res = new IR(kOperand, OP3("(",")",""), tmp1, NULL, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void Operand::deep_delete(){
	SAFEDELETE(expr_list_);
	SAFEDELETE(array_index_);
	SAFEDELETE(scalar_expr_);
	SAFEDELETE(unary_expr_);
	SAFEDELETE(binary_expr_);
	SAFEDELETE(case_expr_);
	SAFEDELETE(extract_expr_);
	SAFEDELETE(array_expr_);
	SAFEDELETE(function_expr_);
	SAFEDELETE(select_no_parens_);
	delete this;
}

void Operand::generate(){
	GENERATESTART(10)

	SWITCHSTART
		CASESTART(0)
		expr_list_ = new ExprList();
		expr_list_->generate();
		CASEEND
		CASESTART(1)
		array_index_ = new ArrayIndex();
		array_index_->generate();
		CASEEND
		CASESTART(2)
		scalar_expr_ = new ScalarExpr();
		scalar_expr_->generate();
		CASEEND
		CASESTART(3)
		unary_expr_ = new UnaryExpr();
		unary_expr_->generate();
		CASEEND
		CASESTART(4)
		binary_expr_ = new BinaryExpr();
		binary_expr_->generate();
		CASEEND
		CASESTART(5)
		case_expr_ = new CaseExpr();
		case_expr_->generate();
		CASEEND
		CASESTART(6)
		extract_expr_ = new ExtractExpr();
		extract_expr_->generate();
		CASEEND
		CASESTART(7)
		array_expr_ = new ArrayExpr();
		array_expr_->generate();
		CASEEND
		CASESTART(8)
		function_expr_ = new FunctionExpr();
		function_expr_->generate();
		CASEEND
		CASESTART(9)
		select_no_parens_ = new SelectNoParens();
		select_no_parens_->generate();
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  CastExpr::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

		auto tmp1= SAFETRANSLATE(expr_);
		auto tmp2= SAFETRANSLATE(data_type_);
		res = new IR(kCastExpr, OP3("CAST (","AS",")"), tmp1, tmp2, case_idx_);

	TRANSLATEEND
}

void CastExpr::deep_delete(){
	SAFEDELETE(expr_);
	SAFEDELETE(data_type_);
	delete this;
}

void CastExpr::generate(){
	GENERATESTART(1)

		expr_ = new Expr();
		expr_->generate();
		data_type_ = new DataType();
		data_type_->generate();

	GENERATEEND
}

IR*  ScalarExpr::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(expr_column_name_);
		res = new IR(kScalarExpr, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(literal_);
		res = new IR(kScalarExpr, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void ScalarExpr::deep_delete(){
	SAFEDELETE(expr_column_name_);
	SAFEDELETE(literal_);
	delete this;
}

void ScalarExpr::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		expr_column_name_ = new ExprColumnName();
		expr_column_name_->generate();
		CASEEND
		CASESTART(1)
		literal_ = new Literal();
		literal_->generate();
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  UnaryExpr::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(operand_);
		res = new IR(kUnaryExpr, OP3("-","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(operand_);
		res = new IR(kUnaryExpr, OP3("NOT","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(2)
		auto tmp1= SAFETRANSLATE(operand_);
		res = new IR(kUnaryExpr, OP3("","ISNULL",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(3)
		auto tmp1= SAFETRANSLATE(operand_);
		res = new IR(kUnaryExpr, OP3("","IS NULL",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(4)
		auto tmp1= SAFETRANSLATE(operand_);
		res = new IR(kUnaryExpr, OP3("","IS NOT NULL",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(5)
		res = new IR(kUnaryExpr, OP3("NULL","",""), NULL, NULL, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void UnaryExpr::deep_delete(){
	SAFEDELETE(operand_);
	delete this;
}

void UnaryExpr::generate(){
	GENERATESTART(6)

	SWITCHSTART
		CASESTART(0)
		operand_ = new Operand();
		operand_->generate();
		CASEEND
		CASESTART(1)
		operand_ = new Operand();
		operand_->generate();
		CASEEND
		CASESTART(2)
		operand_ = new Operand();
		operand_->generate();
		CASEEND
		CASESTART(3)
		operand_ = new Operand();
		operand_->generate();
		CASEEND
		CASESTART(4)
		operand_ = new Operand();
		operand_->generate();
		CASEEND
		CASESTART(5)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  BinaryExpr::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(comp_expr_);
		res = new IR(kBinaryExpr, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(operand_1_);
		auto tmp2= SAFETRANSLATE(binary_op_);
		auto tmp3= SAFETRANSLATE(operand_2_);
		auto tmp4 = new IR(kUnknown108, OP3("","",""), tmp1, tmp2);
		PUSH(tmp4);
		res = new IR(kBinaryExpr, OP3("","",""), tmp4, tmp3, case_idx_);
		CASEEND
		CASESTART(2)
		auto tmp1= SAFETRANSLATE(operand_1_);
		auto tmp2= SAFETRANSLATE(operand_2_);
		res = new IR(kBinaryExpr, OP3("","LIKE",""), tmp1, tmp2, case_idx_);
		CASEEND
		CASESTART(3)
		auto tmp1= SAFETRANSLATE(operand_1_);
		auto tmp2= SAFETRANSLATE(operand_2_);
		res = new IR(kBinaryExpr, OP3("","NOT LIKE",""), tmp1, tmp2, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void BinaryExpr::deep_delete(){
	SAFEDELETE(comp_expr_);
	SAFEDELETE(operand_1_);
	SAFEDELETE(binary_op_);
	SAFEDELETE(operand_2_);
	delete this;
}

void BinaryExpr::generate(){
	GENERATESTART(4)

	SWITCHSTART
		CASESTART(0)
		comp_expr_ = new CompExpr();
		comp_expr_->generate();
		CASEEND
		CASESTART(1)
		operand_1_ = new Operand();
		operand_1_->generate();
		binary_op_ = new BinaryOp();
		binary_op_->generate();
		operand_2_ = new Operand();
		operand_2_->generate();
		CASEEND
		CASESTART(2)
		operand_1_ = new Operand();
		operand_1_->generate();
		operand_2_ = new Operand();
		operand_2_->generate();
		CASEEND
		CASESTART(3)
		operand_1_ = new Operand();
		operand_1_->generate();
		operand_2_ = new Operand();
		operand_2_->generate();
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  LogicExpr::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(expr_1_);
		auto tmp2= SAFETRANSLATE(expr_2_);
		res = new IR(kLogicExpr, OP3("","AND",""), tmp1, tmp2, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(expr_1_);
		auto tmp2= SAFETRANSLATE(expr_2_);
		res = new IR(kLogicExpr, OP3("","OR",""), tmp1, tmp2, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void LogicExpr::deep_delete(){
	SAFEDELETE(expr_1_);
	SAFEDELETE(expr_2_);
	delete this;
}

void LogicExpr::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		expr_1_ = new Expr();
		expr_1_->generate();
		expr_2_ = new Expr();
		expr_2_->generate();
		CASEEND
		CASESTART(1)
		expr_1_ = new Expr();
		expr_1_->generate();
		expr_2_ = new Expr();
		expr_2_->generate();
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  InExpr::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(operand_);
		auto tmp2= SAFETRANSLATE(opt_not_);
		auto tmp3= SAFETRANSLATE(select_no_parens_);
		auto tmp4 = new IR(kUnknown109, OP3("","","IN ("), tmp1, tmp2);
		PUSH(tmp4);
		res = new IR(kInExpr, OP3("","",")"), tmp4, tmp3, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(operand_);
		auto tmp2= SAFETRANSLATE(opt_not_);
		auto tmp3= SAFETRANSLATE(expr_list_);
		auto tmp4 = new IR(kUnknown110, OP3("","","IN ("), tmp1, tmp2);
		PUSH(tmp4);
		res = new IR(kInExpr, OP3("","",")"), tmp4, tmp3, case_idx_);
		CASEEND
		CASESTART(2)
		auto tmp1= SAFETRANSLATE(operand_);
		auto tmp2= SAFETRANSLATE(opt_not_);
		auto tmp3= SAFETRANSLATE(table_name_);
		auto tmp4 = new IR(kUnknown111, OP3("","","IN"), tmp1, tmp2);
		PUSH(tmp4);
		res = new IR(kInExpr, OP3("","",""), tmp4, tmp3, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void InExpr::deep_delete(){
	SAFEDELETE(operand_);
	SAFEDELETE(opt_not_);
	SAFEDELETE(select_no_parens_);
	SAFEDELETE(expr_list_);
	SAFEDELETE(table_name_);
	delete this;
}

void InExpr::generate(){
	GENERATESTART(3)

	SWITCHSTART
		CASESTART(0)
		operand_ = new Operand();
		operand_->generate();
		opt_not_ = new OptNot();
		opt_not_->generate();
		select_no_parens_ = new SelectNoParens();
		select_no_parens_->generate();
		CASEEND
		CASESTART(1)
		operand_ = new Operand();
		operand_->generate();
		opt_not_ = new OptNot();
		opt_not_->generate();
		expr_list_ = new ExprList();
		expr_list_->generate();
		CASEEND
		CASESTART(2)
		operand_ = new Operand();
		operand_->generate();
		opt_not_ = new OptNot();
		opt_not_->generate();
		table_name_ = new TableName();
		table_name_->generate();
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  CaseExpr::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(expr_1_);
		auto tmp2= SAFETRANSLATE(case_list_);
		res = new IR(kCaseExpr, OP3("CASE","","END"), tmp1, tmp2, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(case_list_);
		res = new IR(kCaseExpr, OP3("CASE","END",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(2)
		auto tmp1= SAFETRANSLATE(expr_1_);
		auto tmp2= SAFETRANSLATE(case_list_);
		auto tmp3= SAFETRANSLATE(expr_2_);
		auto tmp4 = new IR(kUnknown112, OP3("CASE","","ELSE"), tmp1, tmp2);
		PUSH(tmp4);
		res = new IR(kCaseExpr, OP3("","","END"), tmp4, tmp3, case_idx_);
		CASEEND
		CASESTART(3)
		auto tmp1= SAFETRANSLATE(case_list_);
		auto tmp2= SAFETRANSLATE(expr_1_);
		res = new IR(kCaseExpr, OP3("CASE","ELSE","END"), tmp1, tmp2, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void CaseExpr::deep_delete(){
	SAFEDELETE(expr_1_);
	SAFEDELETE(case_list_);
	SAFEDELETE(expr_2_);
	delete this;
}

void CaseExpr::generate(){
	GENERATESTART(4)

	SWITCHSTART
		CASESTART(0)
		expr_1_ = new Expr();
		expr_1_->generate();
		case_list_ = new CaseList();
		case_list_->generate();
		CASEEND
		CASESTART(1)
		case_list_ = new CaseList();
		case_list_->generate();
		CASEEND
		CASESTART(2)
		expr_1_ = new Expr();
		expr_1_->generate();
		case_list_ = new CaseList();
		case_list_->generate();
		expr_2_ = new Expr();
		expr_2_->generate();
		CASEEND
		CASESTART(3)
		case_list_ = new CaseList();
		case_list_->generate();
		expr_1_ = new Expr();
		expr_1_->generate();
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  BetweenExpr::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(operand_1_);
		auto tmp2= SAFETRANSLATE(operand_2_);
		auto tmp3= SAFETRANSLATE(operand_3_);
		auto tmp4 = new IR(kUnknown113, OP3("","BETWEEN","AND"), tmp1, tmp2);
		PUSH(tmp4);
		res = new IR(kBetweenExpr, OP3("","",""), tmp4, tmp3, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(operand_1_);
		auto tmp2= SAFETRANSLATE(operand_2_);
		auto tmp3= SAFETRANSLATE(operand_3_);
		auto tmp4 = new IR(kUnknown114, OP3("","NOT BETWEEN","AND"), tmp1, tmp2);
		PUSH(tmp4);
		res = new IR(kBetweenExpr, OP3("","",""), tmp4, tmp3, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void BetweenExpr::deep_delete(){
	SAFEDELETE(operand_1_);
	SAFEDELETE(operand_2_);
	SAFEDELETE(operand_3_);
	delete this;
}

void BetweenExpr::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		operand_1_ = new Operand();
		operand_1_->generate();
		operand_2_ = new Operand();
		operand_2_->generate();
		operand_3_ = new Operand();
		operand_3_->generate();
		CASEEND
		CASESTART(1)
		operand_1_ = new Operand();
		operand_1_->generate();
		operand_2_ = new Operand();
		operand_2_->generate();
		operand_3_ = new Operand();
		operand_3_->generate();
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  ExistsExpr::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

		auto tmp1= SAFETRANSLATE(opt_not_);
		auto tmp2= SAFETRANSLATE(select_no_parens_);
		res = new IR(kExistsExpr, OP3("","EXISTS (",")"), tmp1, tmp2, case_idx_);

	TRANSLATEEND
}

void ExistsExpr::deep_delete(){
	SAFEDELETE(opt_not_);
	SAFEDELETE(select_no_parens_);
	delete this;
}

void ExistsExpr::generate(){
	GENERATESTART(1)

		opt_not_ = new OptNot();
		opt_not_->generate();
		select_no_parens_ = new SelectNoParens();
		select_no_parens_->generate();

	GENERATEEND
}

IR*  FunctionExpr::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(function_name_);
		auto tmp2= SAFETRANSLATE(opt_over_clause_);
		res = new IR(kFunctionExpr, OP3("","( )",""), tmp1, tmp2, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(function_name_);
		auto tmp2= SAFETRANSLATE(opt_distinct_);
		auto tmp3= SAFETRANSLATE(expr_list_);
		auto tmp4= SAFETRANSLATE(opt_over_clause_);
		auto tmp5 = new IR(kUnknown115, OP3("","(",""), tmp1, tmp2);
		PUSH(tmp5);
		auto tmp6 = new IR(kUnknown116, OP3("","",")"), tmp5, tmp3);
		PUSH(tmp6);
		res = new IR(kFunctionExpr, OP3("","",""), tmp6, tmp4, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void FunctionExpr::deep_delete(){
	SAFEDELETE(function_name_);
	SAFEDELETE(opt_over_clause_);
	SAFEDELETE(opt_distinct_);
	SAFEDELETE(expr_list_);
	delete this;
}

void FunctionExpr::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		function_name_ = new FunctionName();
		function_name_->generate();
		opt_over_clause_ = new OptOverClause();
		opt_over_clause_->generate();
		CASEEND
		CASESTART(1)
		function_name_ = new FunctionName();
		function_name_->generate();
		opt_distinct_ = new OptDistinct();
		opt_distinct_->generate();
		expr_list_ = new ExprList();
		expr_list_->generate();
		opt_over_clause_ = new OptOverClause();
		opt_over_clause_->generate();
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  OptDistinct::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		res = new IR(kOptDistinct, OP3("DISTINCT","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptDistinct, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptDistinct::deep_delete(){
	delete this;
}

void OptDistinct::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  OptOverClause::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(window_);
		res = new IR(kOptOverClause, OP3("OVER (",")",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(window_name_);
		res = new IR(kOptOverClause, OP3("OVER","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(2)
		res = new IR(kOptOverClause, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptOverClause::deep_delete(){
	SAFEDELETE(window_);
	SAFEDELETE(window_name_);
	delete this;
}

void OptOverClause::generate(){
	GENERATESTART(3)

	SWITCHSTART
		CASESTART(0)
		window_ = new Window();
		window_->generate();
		CASEEND
		CASESTART(1)
		window_name_ = new WindowName();
		window_name_->generate();
		CASEEND
		CASESTART(2)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  CaseList::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(case_clause_);
		res = new IR(kCaseList, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(case_clause_);
		auto tmp2= SAFETRANSLATE(case_list_);
		res = new IR(kCaseList, OP3("","",""), tmp1, tmp2, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void CaseList::deep_delete(){
	SAFEDELETE(case_clause_);
	SAFEDELETE(case_list_);
	delete this;
}

void CaseList::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		case_clause_ = new CaseClause();
		case_clause_->generate();
		CASEEND
		CASESTART(1)
		case_clause_ = new CaseClause();
		case_clause_->generate();
		case_list_ = new CaseList();
		case_list_->generate();
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  CaseClause::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

		auto tmp1= SAFETRANSLATE(expr_1_);
		auto tmp2= SAFETRANSLATE(expr_2_);
		res = new IR(kCaseClause, OP3("WHEN","THEN",""), tmp1, tmp2, case_idx_);

	TRANSLATEEND
}

void CaseClause::deep_delete(){
	SAFEDELETE(expr_1_);
	SAFEDELETE(expr_2_);
	delete this;
}

void CaseClause::generate(){
	GENERATESTART(1)

		expr_1_ = new Expr();
		expr_1_->generate();
		expr_2_ = new Expr();
		expr_2_->generate();

	GENERATEEND
}

IR*  CompExpr::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(operand_1_);
		auto tmp2= SAFETRANSLATE(operand_2_);
		res = new IR(kCompExpr, OP3("","=",""), tmp1, tmp2, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(operand_1_);
		auto tmp2= SAFETRANSLATE(operand_2_);
		res = new IR(kCompExpr, OP3("","!=",""), tmp1, tmp2, case_idx_);
		CASEEND
		CASESTART(2)
		auto tmp1= SAFETRANSLATE(operand_1_);
		auto tmp2= SAFETRANSLATE(operand_2_);
		res = new IR(kCompExpr, OP3("",">",""), tmp1, tmp2, case_idx_);
		CASEEND
		CASESTART(3)
		auto tmp1= SAFETRANSLATE(operand_1_);
		auto tmp2= SAFETRANSLATE(operand_2_);
		res = new IR(kCompExpr, OP3("","<",""), tmp1, tmp2, case_idx_);
		CASEEND
		CASESTART(4)
		auto tmp1= SAFETRANSLATE(operand_1_);
		auto tmp2= SAFETRANSLATE(operand_2_);
		res = new IR(kCompExpr, OP3("","<=",""), tmp1, tmp2, case_idx_);
		CASEEND
		CASESTART(5)
		auto tmp1= SAFETRANSLATE(operand_1_);
		auto tmp2= SAFETRANSLATE(operand_2_);
		res = new IR(kCompExpr, OP3("",">=",""), tmp1, tmp2, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void CompExpr::deep_delete(){
	SAFEDELETE(operand_1_);
	SAFEDELETE(operand_2_);
	delete this;
}

void CompExpr::generate(){
	GENERATESTART(6)

	SWITCHSTART
		CASESTART(0)
		operand_1_ = new Operand();
		operand_1_->generate();
		operand_2_ = new Operand();
		operand_2_->generate();
		CASEEND
		CASESTART(1)
		operand_1_ = new Operand();
		operand_1_->generate();
		operand_2_ = new Operand();
		operand_2_->generate();
		CASEEND
		CASESTART(2)
		operand_1_ = new Operand();
		operand_1_->generate();
		operand_2_ = new Operand();
		operand_2_->generate();
		CASEEND
		CASESTART(3)
		operand_1_ = new Operand();
		operand_1_->generate();
		operand_2_ = new Operand();
		operand_2_->generate();
		CASEEND
		CASESTART(4)
		operand_1_ = new Operand();
		operand_1_->generate();
		operand_2_ = new Operand();
		operand_2_->generate();
		CASEEND
		CASESTART(5)
		operand_1_ = new Operand();
		operand_1_->generate();
		operand_2_ = new Operand();
		operand_2_->generate();
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  ExtractExpr::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

		auto tmp1= SAFETRANSLATE(datetime_field_);
		auto tmp2= SAFETRANSLATE(expr_);
		res = new IR(kExtractExpr, OP3("EXTRACT (","FROM",")"), tmp1, tmp2, case_idx_);

	TRANSLATEEND
}

void ExtractExpr::deep_delete(){
	SAFEDELETE(datetime_field_);
	SAFEDELETE(expr_);
	delete this;
}

void ExtractExpr::generate(){
	GENERATESTART(1)

		datetime_field_ = new DatetimeField();
		datetime_field_->generate();
		expr_ = new Expr();
		expr_->generate();

	GENERATEEND
}

IR*  DatetimeField::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		res = new IR(kDatetimeField, OP3("SECOND","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kDatetimeField, OP3("MINUTE","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(2)
		res = new IR(kDatetimeField, OP3("HOUR","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(3)
		res = new IR(kDatetimeField, OP3("DAY","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(4)
		res = new IR(kDatetimeField, OP3("MONTH","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(5)
		res = new IR(kDatetimeField, OP3("YEAR","",""), NULL, NULL, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void DatetimeField::deep_delete(){
	delete this;
}

void DatetimeField::generate(){
	GENERATESTART(6)

	SWITCHSTART
		CASESTART(0)
		CASEEND
		CASESTART(1)
		CASEEND
		CASESTART(2)
		CASEEND
		CASESTART(3)
		CASEEND
		CASESTART(4)
		CASEEND
		CASESTART(5)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  ArrayExpr::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

		auto tmp1= SAFETRANSLATE(expr_list_);
		res = new IR(kArrayExpr, OP3("ARRAY [","]",""), tmp1, NULL, case_idx_);

	TRANSLATEEND
}

void ArrayExpr::deep_delete(){
	SAFEDELETE(expr_list_);
	delete this;
}

void ArrayExpr::generate(){
	GENERATESTART(1)

		expr_list_ = new ExprList();
		expr_list_->generate();

	GENERATEEND
}

IR*  ArrayIndex::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

		auto tmp1= SAFETRANSLATE(operand_);
		auto tmp2= SAFETRANSLATE(int_literal_);
		res = new IR(kArrayIndex, OP3("","[","]"), tmp1, tmp2, case_idx_);

	TRANSLATEEND
}

void ArrayIndex::deep_delete(){
	SAFEDELETE(operand_);
	SAFEDELETE(int_literal_);
	delete this;
}

void ArrayIndex::generate(){
	GENERATESTART(1)

		operand_ = new Operand();
		operand_->generate();
		int_literal_ = new IntLiteral();
		int_literal_->generate();

	GENERATEEND
}

IR*  Literal::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(string_literal_);
		res = new IR(kLiteral, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(bool_literal_);
		res = new IR(kLiteral, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(2)
		auto tmp1= SAFETRANSLATE(num_literal_);
		res = new IR(kLiteral, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void Literal::deep_delete(){
	SAFEDELETE(string_literal_);
	SAFEDELETE(bool_literal_);
	SAFEDELETE(num_literal_);
	delete this;
}

void Literal::generate(){
	GENERATESTART(3)

	SWITCHSTART
		CASESTART(0)
		string_literal_ = new StringLiteral();
		string_literal_->generate();
		CASEEND
		CASESTART(1)
		bool_literal_ = new BoolLiteral();
		bool_literal_->generate();
		CASEEND
		CASESTART(2)
		num_literal_ = new NumLiteral();
		num_literal_->generate();
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  StringLiteral::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

		res = new IR(kStringLiteral, string_val_, data_type_, scope_, data_flag_);

	TRANSLATEEND
}

void StringLiteral::deep_delete(){
	delete this;
}

void StringLiteral::generate(){
	GENERATESTART(1)


	GENERATEEND
}

IR*  BoolLiteral::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		res = new IR(kBoolLiteral, OP3("TRUE","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kBoolLiteral, OP3("FALSE","",""), NULL, NULL, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void BoolLiteral::deep_delete(){
	delete this;
}

void BoolLiteral::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  NumLiteral::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(int_literal_);
		res = new IR(kNumLiteral, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(float_literal_);
		res = new IR(kNumLiteral, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void NumLiteral::deep_delete(){
	SAFEDELETE(int_literal_);
	SAFEDELETE(float_literal_);
	delete this;
}

void NumLiteral::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		int_literal_ = new IntLiteral();
		int_literal_->generate();
		CASEEND
		CASESTART(1)
		float_literal_ = new FloatLiteral();
		float_literal_->generate();
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  IntLiteral::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

		res = new IR(kIntLiteral, int_val_, data_type_, scope_, data_flag_);

	TRANSLATEEND
}

void IntLiteral::deep_delete(){
	delete this;
}

void IntLiteral::generate(){
	GENERATESTART(1)


	GENERATEEND
}

IR*  FloatLiteral::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

		res = new IR(kFloatLiteral, float_val_, data_type_, scope_, data_flag_);

	TRANSLATEEND
}

void FloatLiteral::deep_delete(){
	delete this;
}

void FloatLiteral::generate(){
	GENERATESTART(1)


	GENERATEEND
}

IR*  OptColumn::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		res = new IR(kOptColumn, OP3("COLUMN","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptColumn, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptColumn::deep_delete(){
	delete this;
}

void OptColumn::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  TriggerBody::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(drop_stmt_);
		res = new IR(kTriggerBody, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(update_stmt_);
		res = new IR(kTriggerBody, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(2)
		auto tmp1= SAFETRANSLATE(insert_stmt_);
		res = new IR(kTriggerBody, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(3)
		auto tmp1= SAFETRANSLATE(alter_stmt_);
		res = new IR(kTriggerBody, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void TriggerBody::deep_delete(){
	SAFEDELETE(drop_stmt_);
	SAFEDELETE(update_stmt_);
	SAFEDELETE(insert_stmt_);
	SAFEDELETE(alter_stmt_);
	delete this;
}

void TriggerBody::generate(){
	GENERATESTART(4)

	SWITCHSTART
		CASESTART(0)
		drop_stmt_ = new DropStmt();
		drop_stmt_->generate();
		CASEEND
		CASESTART(1)
		update_stmt_ = new UpdateStmt();
		update_stmt_->generate();
		CASEEND
		CASESTART(2)
		insert_stmt_ = new InsertStmt();
		insert_stmt_->generate();
		CASEEND
		CASESTART(3)
		alter_stmt_ = new AlterStmt();
		alter_stmt_->generate();
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  OptIfNotExist::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		res = new IR(kOptIfNotExist, OP3("IF NOT EXISTS","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptIfNotExist, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptIfNotExist::deep_delete(){
	delete this;
}

void OptIfNotExist::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  OptIfExist::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		res = new IR(kOptIfExist, OP3("IF EXISTS","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptIfExist, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptIfExist::deep_delete(){
	delete this;
}

void OptIfExist::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  Identifier::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

		res = new IR(kIdentifier, string_val_, data_type_, scope_, data_flag_);

	TRANSLATEEND
}

void Identifier::deep_delete(){
	delete this;
}

void Identifier::generate(){
	GENERATESTART(1)


	GENERATEEND
}

IR*  AsAlias::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

		auto tmp1= SAFETRANSLATE(identifier_);
		res = new IR(kAsAlias, OP3("AS","",""), tmp1, NULL, case_idx_);

	TRANSLATEEND
}

void AsAlias::deep_delete(){
	SAFEDELETE(identifier_);
	delete this;
}

void AsAlias::generate(){
	GENERATESTART(1)

		identifier_ = new Identifier();
		identifier_->generate();

	GENERATEEND
}

IR*  TableName::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

		auto tmp1= SAFETRANSLATE(identifier_);
		res = new IR(kTableName, OP3("","",""), tmp1, NULL, case_idx_);

	TRANSLATEEND
}

void TableName::deep_delete(){
	SAFEDELETE(identifier_);
	delete this;
}

void TableName::generate(){
	GENERATESTART(1)

		identifier_ = new Identifier();
		identifier_->generate();

	GENERATEEND
}

IR*  IndexName::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

		auto tmp1= SAFETRANSLATE(identifier_);
		res = new IR(kIndexName, OP3("","",""), tmp1, NULL, case_idx_);

	TRANSLATEEND
}

void IndexName::deep_delete(){
	SAFEDELETE(identifier_);
	delete this;
}

void IndexName::generate(){
	GENERATESTART(1)

		identifier_ = new Identifier();
		identifier_->generate();

	GENERATEEND
}

IR*  ColumnName::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

		auto tmp1= SAFETRANSLATE(identifier_);
		res = new IR(kColumnName, OP3("","",""), tmp1, NULL, case_idx_);

	TRANSLATEEND
}

void ColumnName::deep_delete(){
	SAFEDELETE(identifier_);
	delete this;
}

void ColumnName::generate(){
	GENERATESTART(1)

		identifier_ = new Identifier();
		identifier_->generate();

	GENERATEEND
}


IR*  ExprColumnName::translate(vector<IR *> &v_ir_collector){
TRANSLATESTART

SWITCHSTART
   CASESTART(0)
   auto tmp1 = SAFETRANSLATE(column_name_);
   res = new IR(kExprColumnName, OP3("","",""), tmp1);
   CASEEND

   CASESTART(1)

   auto tmp1 = SAFETRANSLATE(table_name_);
   auto tmp2 = SAFETRANSLATE(column_name_);
   res = new IR(kExprColumnName, OP3("",".",""), tmp1, tmp2);
   CASEEND

   CASESTART(2)		
   auto tmp1 = new IR(kIdentifier, string("*"));
   PUSH(tmp1);
   auto tmp2 = new IR(kColumnName, OP3("","",""), tmp1);
   PUSH(tmp2);
   res = new IR(kExprColumnName, OP3("","",""), tmp2);
   CASEEND
   
   CASESTART(3)
   auto tmp1 = SAFETRANSLATE(table_name_);
   auto tmp2 = new IR(kIdentifier, string("*"));
   PUSH(tmp2);
   auto tmp3 = new IR(kColumnName, OP3("","",""), tmp2);
   PUSH(tmp3);

   res = new IR(kExprColumnName, OP3("",".",""), tmp1, tmp3);
   CASEEND
   
SWITCHEND

TRANSLATEEND
}

void ExprColumnName::deep_delete(){
SAFEDELETE(table_name_);
SAFEDELETE(column_name_);
delete this;
};

void ExprColumnName::generate(){
GENERATESTART(1)

   table_name_ = new TableName();
   table_name_->generate();

   column_name_ = new ColumnName();
   column_name_->generate();

GENERATEEND
}
IR*  OptIndexKeyword::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		res = new IR(kOptIndexKeyword, OP3("UNIQUE","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptIndexKeyword, OP3("FULLTEXT","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(2)
		res = new IR(kOptIndexKeyword, OP3("SPATIAL","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(3)
		res = new IR(kOptIndexKeyword, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptIndexKeyword::deep_delete(){
	delete this;
}

void OptIndexKeyword::generate(){
	GENERATESTART(4)

	SWITCHSTART
		CASESTART(0)
		CASEEND
		CASESTART(1)
		CASEEND
		CASESTART(2)
		CASEEND
		CASESTART(3)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  ViewName::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

		auto tmp1= SAFETRANSLATE(identifier_);
		res = new IR(kViewName, OP3("","",""), tmp1, NULL, case_idx_);

	TRANSLATEEND
}

void ViewName::deep_delete(){
	SAFEDELETE(identifier_);
	delete this;
}

void ViewName::generate(){
	GENERATESTART(1)

		identifier_ = new Identifier();
		identifier_->generate();

	GENERATEEND
}

IR*  FunctionName::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

		auto tmp1= SAFETRANSLATE(identifier_);
		res = new IR(kFunctionName, OP3("","",""), tmp1, NULL, case_idx_);

	TRANSLATEEND
}

void FunctionName::deep_delete(){
	SAFEDELETE(identifier_);
	delete this;
}

void FunctionName::generate(){
	GENERATESTART(1)

		identifier_ = new Identifier();
		identifier_->generate();

	GENERATEEND
}

IR*  BinaryOp::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		res = new IR(kBinaryOp, OP3("+","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kBinaryOp, OP3("-","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(2)
		res = new IR(kBinaryOp, OP3("/","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(3)
		res = new IR(kBinaryOp, OP3("%","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(4)
		res = new IR(kBinaryOp, OP3("*","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(5)
		res = new IR(kBinaryOp, OP3("^","",""), NULL, NULL, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void BinaryOp::deep_delete(){
	delete this;
}

void BinaryOp::generate(){
	GENERATESTART(6)

	SWITCHSTART
		CASESTART(0)
		CASEEND
		CASESTART(1)
		CASEEND
		CASESTART(2)
		CASEEND
		CASESTART(3)
		CASEEND
		CASESTART(4)
		CASEEND
		CASESTART(5)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  OptNot::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		res = new IR(kOptNot, OP3("NOT","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptNot, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptNot::deep_delete(){
	delete this;
}

void OptNot::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  Symbol::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

		auto tmp1= SAFETRANSLATE(identifier_);
		res = new IR(kSymbol, OP3("","",""), tmp1, NULL, case_idx_);

	TRANSLATEEND
}

void Symbol::deep_delete(){
	SAFEDELETE(identifier_);
	delete this;
}

void Symbol::generate(){
	GENERATESTART(1)

		identifier_ = new Identifier();
		identifier_->generate();

	GENERATEEND
}

IR*  DataType::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(numeric_type_);
		res = new IR(kDataType, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		auto tmp1= SAFETRANSLATE(character_type_);
		res = new IR(kDataType, OP3("","",""), tmp1, NULL, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void DataType::deep_delete(){
	SAFEDELETE(numeric_type_);
	SAFEDELETE(character_type_);
	delete this;
}

void DataType::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		numeric_type_ = new NumericType();
		numeric_type_->generate();
		CASEEND
		CASESTART(1)
		character_type_ = new CharacterType();
		character_type_->generate();
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  CharacterType::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(character_conflicta_);
		auto tmp2= SAFETRANSLATE(opt_length_);
		res = new IR(kCharacterType, OP3("","",""), tmp1, tmp2, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kCharacterType, OP3("SET","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(2)
		res = new IR(kCharacterType, OP3("ENUM","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(3)
		res = new IR(kCharacterType, OP3("BINARY","",""), NULL, NULL, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void CharacterType::deep_delete(){
	SAFEDELETE(character_conflicta_);
	SAFEDELETE(opt_length_);
	delete this;
}

void CharacterType::generate(){
	GENERATESTART(4)

	SWITCHSTART
		CASESTART(0)
		character_conflicta_ = new CharacterConflicta();
		character_conflicta_->generate();
		opt_length_ = new OptLength();
		opt_length_->generate();
		CASEEND
		CASESTART(1)
		CASEEND
		CASESTART(2)
		CASEEND
		CASESTART(3)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  OptLength::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		auto tmp1= SAFETRANSLATE(int_literal_);
		res = new IR(kOptLength, OP3("(",")",""), tmp1, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kOptLength, string(""), case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void OptLength::deep_delete(){
	SAFEDELETE(int_literal_);
	delete this;
}

void OptLength::generate(){
	GENERATESTART(2)

	SWITCHSTART
		CASESTART(0)
		int_literal_ = new IntLiteral();
		int_literal_->generate();
		CASEEND
		CASESTART(1)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  CharacterConflicta::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		res = new IR(kCharacterConflicta, OP3("CHARACTER","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kCharacterConflicta, OP3("CHAR","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(2)
		res = new IR(kCharacterConflicta, OP3("VARCHAR","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(3)
		res = new IR(kCharacterConflicta, OP3("TEXT","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(4)
		res = new IR(kCharacterConflicta, OP3("TINYTEXT","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(5)
		res = new IR(kCharacterConflicta, OP3("MEDIUMTEXT","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(6)
		res = new IR(kCharacterConflicta, OP3("LONGTEXT","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(7)
		res = new IR(kCharacterConflicta, OP3("NATIONAL CHARACTER","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(8)
		res = new IR(kCharacterConflicta, OP3("NATIONAL CHAR","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(9)
		res = new IR(kCharacterConflicta, OP3("NCHAR","",""), NULL, NULL, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void CharacterConflicta::deep_delete(){
	delete this;
}

void CharacterConflicta::generate(){
	GENERATESTART(10)

	SWITCHSTART
		CASESTART(0)
		CASEEND
		CASESTART(1)
		CASEEND
		CASESTART(2)
		CASEEND
		CASESTART(3)
		CASEEND
		CASESTART(4)
		CASEEND
		CASESTART(5)
		CASEEND
		CASESTART(6)
		CASEEND
		CASESTART(7)
		CASEEND
		CASESTART(8)
		CASEEND
		CASESTART(9)
		CASEEND
	SWITCHEND

	GENERATEEND
}

IR*  NumericType::translate(vector<IR *> &v_ir_collector){
	TRANSLATESTART

	SWITCHSTART
		CASESTART(0)
		res = new IR(kNumericType, OP3("INT","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(1)
		res = new IR(kNumericType, OP3("INTEGER","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(2)
		res = new IR(kNumericType, OP3("SMALLINT","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(3)
		res = new IR(kNumericType, OP3("BIGINT","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(4)
		res = new IR(kNumericType, OP3("REAL","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(5)
		res = new IR(kNumericType, OP3("FLOAT","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(6)
		res = new IR(kNumericType, OP3("FIXED","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(7)
		res = new IR(kNumericType, OP3("DOUBLE","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(8)
		res = new IR(kNumericType, OP3("DOUBLE PRECISION","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(9)
		res = new IR(kNumericType, OP3("DECIMAL","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(10)
		res = new IR(kNumericType, OP3("DEC","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(11)
		res = new IR(kNumericType, OP3("NUMERIC","",""), NULL, NULL, case_idx_);
		CASEEND
		CASESTART(12)
		res = new IR(kNumericType, OP3("BOOLEAN","",""), NULL, NULL, case_idx_);
		CASEEND
	SWITCHEND

	TRANSLATEEND
}

void NumericType::deep_delete(){
	delete this;
}

void NumericType::generate(){
	GENERATESTART(13)

	SWITCHSTART
		CASESTART(0)
		CASEEND
		CASESTART(1)
		CASEEND
		CASESTART(2)
		CASEEND
		CASESTART(3)
		CASEEND
		CASESTART(4)
		CASEEND
		CASESTART(5)
		CASEEND
		CASESTART(6)
		CASEEND
		CASESTART(7)
		CASEEND
		CASESTART(8)
		CASEEND
		CASESTART(9)
		CASEEND
		CASESTART(10)
		CASEEND
		CASESTART(11)
		CASEEND
		CASESTART(12)
		CASEEND
	SWITCHEND

	GENERATEEND
}

