#ifndef __VALIDATE_H__
#define __VALIDATE_H__

#include "ast.h"
#include "define.h"
#include "utils.h"

#include <set>
#include <map>

using namespace std;

extern vector<vector<int>> g_favored_ir_library_index;
extern vector<vector<int>> g_init_ir_library_index;

extern vector<vector<int>> g_ir_library_from;
extern vector<vector<int>> g_ir_library_status;


// 用于描述一个列
// TableName->str_val_理论上和rely_table_name应该是一样的
// 但是有写列没有TableName
struct s_column{	

	IR* TableName = NULL;
	IR* ColumnName = NULL;

	string alias;
	string rely_table_name;
};

// 用于描述一个表
struct s_table{	

	vector<s_column*> v_ColumnName;
	vector<IR*> v_TableName;

	string alias;
};

// 用于描述一个列确定依赖的某个列或表
// 主要方便填充别名
struct certain_table{

	s_column* rely_column;
	IR* rely_table;

	string alias;
};

struct graph{

	map<s_column*, certain_table*> column_to_table;
	map<s_column*, certain_table*> column_to_column;

	vector<IR*> not_used_table;

};

struct select_field_info{
	vector<s_table*> with_table;
	vector<s_column*> selectTarget_column;
	vector<s_column*> function_column;
    vector<s_table*> from_table;
    vector<s_column*> where_column;
    vector<s_column*> group_by_column;
	vector<s_column*> order_by_column;
	vector<IR*> window_name;
	vector<IR*> window_def;
	vector<s_column*> window_column;
};

void init_table();

unsigned int calc_node(IR * root);
bool my_fix(IR* &root);
bool my_validate(IR* &root);
void validate_init();
void traverse_stmt(IR* root);

void fill_graph();

string get_upper_column_name(s_column* column);
string get_upper_rely_table_name(s_column* column);
void print_graph();
void print_table();

s_table* handle_kSelectStmt(IR* node_kSelectStmt);
s_column* handle_kExprColumnName(IR* node_kColumnName);

void handle_kDropStmt(IR* node_kDropStmt);
void handle_kDropIndexStmt(IR* node_kDropIndexStmt);
void handle_kDropTableStmt(IR* node_kDropTableStmt);
void handle_kDropTriggerStmt(IR* node_kDropTriggerStmt);
void handle_kDropViewStmt(IR* node_kDropViewStmt);

void handle_kUpdateStmt(IR* node_kUpdateStmt);
void handle_kAssignmentList(IR* node_kAssignmentList, vector<s_column*> &set_column);
void handle_kOptLimitRowCount(IR* node_kOptLimitRowCount);

void handle_kInsertStmt(IR* node_kInsertStmt);
void handle_kAlterStmt(IR* node_kAlterStmt);

void free_all();
s_table* handle_kSelectNoParens(IR* node_kSelectNoParens);
s_table* handle_kSelectClause(IR* node_kSelectClause, vector<s_column*> &order_by_column, vector<s_table*> &with_table);

void handle_kSelectTarget(IR* node_kSelectTarget, select_field_info* p_cur_info);
s_column* handle_kExpr(IR* node_kExpr, select_field_info* p_cur_info);
void handle_kColumnNameList(IR* node_kColumnNameList, vector<s_column*> &column);
s_column* handle_kColumnName(IR* node_kColumnName);

void handle_kOptFromClause(IR* node_kOptFromClause, vector<s_table*> &from_table);
IR* get_kOptTablePrefix(IR* cur_kTableRef);

void dfs_traverse_kWindowClause(IR* node, select_field_info* p_cur_info);
s_table* kTableRef_to_table(IR* node_kTableRef);
s_table* join_table(s_table* table_1, s_table* table_2);
s_table* handle_kTableRef(IR* cur_kTableRef);
s_table* columns_to_table(vector<s_column*> &selectTarget_column);
 
void validate_build_graph(select_field_info* p_cur_info);
void column_to_certain_table(s_column* cur_column, s_table* pick_table);
void build_kOptOn_graph(s_table* pick_table, vector<s_column*> &on_column);
void build_kOptUsing_graph(s_table* pick_table, vector<s_column*> &using_column);

void handle_kOptWindowClause(IR* node_kOptWindowClause, select_field_info* p_cur_info);

void handle_kCreateStmt(IR* node_kCreateStmt);
void handle_CreateTableStmt(IR* node_CreateTableStmt);
void handle_CreateIndexStmt(IR* node_CreateIndexStmt);
void handle_CreateTriggerStmt(IR* node_CreateTriggerStmt);
void handle_kTriggerBody(IR* node_kTriggerBody);
void handle_CreateViewStmt(IR* node_CreateViewStmt);
void dfs_traverse_kOptColumnNameListP(IR* node, vector<IR*> &column_name);

void dfs_traverse_kExpr(IR* node, vector<s_column*> &output_column);

void handle_kOptWhereClause(IR* node_kOptWhereClause, vector<s_column*> &where_column);

void handle_kOptGroupClause(IR* node_kOptGroupClause, vector<s_column*> &group_by_column);

void handle_kOptOrderClause(IR* node_kOptOrderClause, vector<s_column*> &order_by_column);

void handle_kOptOverClause(IR* node_kOptOverClause, select_field_info* p_cur_info);
void handle_kWindow(IR* node_kWindow, select_field_info* p_cur_info);

vector<s_table*> hanle_kOptWithClause(IR* node_kOptWithClause);
s_table* handle_kCteTable(IR* node_kCteTable);

void handle_kTableRef(IR* cur_kTableRef, vector<s_table*> &output_table);
void handle_kOptColumnNameListP(IR* node_kOptColumnNameListP, vector<s_column*> &ret_column);
void handle_kColumnDefList(string cur_table_name, IR* node_kColumnDefList);

void handle_kCreateDefinition(IR* node_kCreateDefinition, string cur_table_name);
void handle_kColumnDefinition(IR* node_kColumnDefinition, string cur_column_name, string cur_table_name);

void handle_kCheckConstraintDefinition(IR* node_kCheckConstraintDefinition, string cur_column_name, string cur_table_name);
void handle_kReferenceDefinition(IR* node_kReferenceDefinition, string cur_table_name);
void handle_kOptConstraintSymbol(IR* node_kOptConstraintSymbol, string cur_table_name);
void handle_kKeyPartList(IR* node_kKeyPartList, string cur_table_name);
void handle_kOptIndexName(IR* node_kOptIndexName, string cur_table_name);
void handle_kCreateDefinitionList(IR* node_kCreateDefinitionList, string cur_table_name);
#endif