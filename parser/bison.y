%{
#include "bison_parser.h"
#include "flex_lexer.h"
#include <stdio.h>
#include <string.h>
int yyerror(YYLTYPE* llocp, Program * result, yyscan_t scanner, const char *msg) { return 0; }
%}
%code requires {
#include "../include/ast.h"
#include "parser_typedef.h"
}
%define api.prefix	{ff_}
%define parse.error	verbose
%define api.pure	full
%define api.token.prefix	{SQL_}
%locations

%lex-param { yyscan_t scanner }
%parse-param { Program* result }
%parse-param { yyscan_t scanner }
%union FF_STYPE{
	/* builtin type provided by ANBAN */
    long	ival;
	char*	sval;
	double	fval;

    /* fill in various SYMBOL types */
	Program *	program_t;
	Stmtlist *	stmtlist_t;
	Stmt *	stmt_t;
	CreateStmt *	create_stmt_t;
	DropStmt *	drop_stmt_t;
	SelectStmt *	select_stmt_t;
	UpdateStmt *	update_stmt_t;
	InsertStmt *	insert_stmt_t;
	AlterStmt *	alter_stmt_t;
	CreateTableStmt *	create_table_stmt_t;
	CreateIndexStmt *	create_index_stmt_t;
	CreateTriggerStmt *	create_trigger_stmt_t;
	CreateViewStmt *	create_view_stmt_t;
	DropIndexStmt *	drop_index_stmt_t;
	DropTableStmt *	drop_table_stmt_t;
	DropTriggerStmt *	drop_trigger_stmt_t;
	DropViewStmt *	drop_view_stmt_t;
	TableName *	table_name_t;
	AlterAction *	alter_action_t;
	SelectNoParens *	select_no_parens_t;
	SelectWithParens *	select_with_parens_t;
	OptWithClause *	opt_with_clause_t;
	SelectClauseList *	select_clause_list_t;
	OptOrderClause *	opt_order_clause_t;
	OptLimitClause *	opt_limit_clause_t;
	SelectClause *	select_clause_t;
	CombineClause *	combine_clause_t;
	OptAllOrDistinct *	opt_all_or_distinct_t;
	SelectTarget *	select_target_t;
	OptFromClause *	opt_from_clause_t;
	OptWhereClause *	opt_where_clause_t;
	OptGroupClause *	opt_group_clause_t;
	OptWindowClause *	opt_window_clause_t;
	FromClause *	from_clause_t;
	ExprList *	expr_list_t;
	WindowClause *	window_clause_t;
	WindowDefList *	window_def_list_t;
	WindowDef *	window_def_t;
	WindowName *	window_name_t;
	Window *	window_t;
	Identifier *	identifier_t;
	OptExistWindowName *	opt_exist_window_name_t;
	OptPartition *	opt_partition_t;
	OptFrameClause *	opt_frame_clause_t;
	RangeOrRows *	range_or_rows_t;
	FrameBoundStart *	frame_bound_start_t;
	FrameBoundEnd *	frame_bound_end_t;
	FrameBound *	frame_bound_t;
	Expr *	expr_t;
	OptHavingClause *	opt_having_clause_t;
	WhereClause *	where_clause_t;
	TableRef *	table_ref_t;
	OptTablePrefix *	opt_table_prefix_t;
	OptAsAlias *	opt_as_alias_t;
	OptIndex *	opt_index_t;
	OptOn *	opt_on_t;
	OptUsing *	opt_using_t;
	ColumnName *	column_name_t;
	ColumnNameList *	column_name_list_t;
	JoinOp *	join_op_t;
	OptJoinType *	opt_join_type_t;
	LimitClause *	limit_clause_t;
	OptLimitRowCount *	opt_limit_row_count_t;
	OrderItemList *	order_item_list_t;
	OrderItem *	order_item_t;
	OptOrderBehavior *	opt_order_behavior_t;
	CteTableList *	cte_table_list_t;
	CteTable *	cte_table_t;
	CteTableName *	cte_table_name_t;
	OptColumnNameListP *	opt_column_name_list_p_t;
	OptTemp *	opt_temp_t;
	OptIfNotExist *	opt_if_not_exist_t;
	CreateDefinitionList *	create_definition_list_t;
	OptTableOptionList *	opt_table_option_list_t;
	OptCreateDefinitionListP *	opt_create_definition_list_p_t;
	OptIgnoreOrReplace *	opt_ignore_or_replace_t;
	OptAs *	opt_as_t;
	LikeField *	like_field_t;
	OptIndexType *	opt_index_type_t;
	IndexType *	index_type_t;
	OptIndexKeyword *	opt_index_keyword_t;
	IndexName *	index_name_t;
	KeyPartList *	key_part_list_t;
	OptIndexOption *	opt_index_option_t;
	OptExtraOption *	opt_extra_option_t;
	TriggerName *	trigger_name_t;
	TriggerActionTime *	trigger_action_time_t;
	TriggerEvents *	trigger_events_t;
	TriggerBody *	trigger_body_t;
	OptViewAlgorithm *	opt_view_algorithm_t;
	OptSqlSecurity *	opt_sql_security_t;
	ViewName *	view_name_t;
	OptCheckOption *	opt_check_option_t;
	TableOptionList *	table_option_list_t;
	TableOption *	table_option_t;
	OptOpComma *	opt_op_comma_t;
	OptOpEqual *	opt_op_equal_t;
	InsertMethod *	insert_method_t;
	RowFormat *	row_format_t;
	VisibleInvisible *	visible_invisible_t;
	IndexAlgorithmOption *	index_algorithm_option_t;
	LockOption *	lock_option_t;
	OptIfExist *	opt_if_exist_t;
	TableNameList *	table_name_list_t;
	OptRestrictOrCascade *	opt_restrict_or_cascade_t;
	OptPriority *	opt_priority_t;
	OptIgnore *	opt_ignore_t;
	OptInto *	opt_into_t;
	ValueOrValues *	value_or_values_t;
	SuperValueList *	super_value_list_t;
	OptAsRowAlias *	opt_as_row_alias_t;
	OptOnDuplicate *	opt_on_duplicate_t;
	AssignmentList *	assignment_list_t;
	OptLowPriority *	opt_low_priority_t;
	ValueList *	value_list_t;
	Value *	value_t;
	RowAlias *	row_alias_t;
	OptColAlias *	opt_col_alias_t;
	ColAliasList *	col_alias_list_t;
	ColAlias *	col_alias_t;
	KeyPart *	key_part_t;
	OptColumn *	opt_column_t;
	ColumnDef *	column_def_t;
	AlterConstantAction *	alter_constant_action_t;
	ColumnDefList *	column_def_list_t;
	CreateDefinition *	create_definition_t;
	ColumnDefinition *	column_definition_t;
	IndexOrKey *	index_or_key_t;
	OptIndexName *	opt_index_name_t;
	FulltextOrSpatial *	fulltext_or_spatial_t;
	OptIndexOrKey *	opt_index_or_key_t;
	OptConstraintSymbol *	opt_constraint_symbol_t;
	ReferenceDefinition *	reference_definition_t;
	CheckConstraintDefinition *	check_constraint_definition_t;
	DataType *	data_type_t;
	OptNullNotNull *	opt_null_not_null_t;
	OptVisibleInvisible *	opt_visible_invisible_t;
	OptAutoIncrement *	opt_auto_increment_t;
	OptUniquePrimary *	opt_unique_primary_t;
	OptColumnFormat *	opt_column_format_t;
	OptStorage *	opt_storage_t;
	OptReferenceDefinition *	opt_reference_definition_t;
	OptCheckConstraintDefinition *	opt_check_constraint_definition_t;
	ColumnFormat *	column_format_t;
	Storage *	storage_t;
	OptMatch *	opt_match_t;
	OptOnDelete *	opt_on_delete_t;
	OptOnUpdate *	opt_on_update_t;
	ReferenceOption *	reference_option_t;
	OptEnforced *	opt_enforced_t;
	Symbol *	symbol_t;
	Assignment *	assignment_t;
	AsAlias *	as_alias_t;
	Operand *	operand_t;
	BetweenExpr *	between_expr_t;
	ExistsExpr *	exists_expr_t;
	InExpr *	in_expr_t;
	CastExpr *	cast_expr_t;
	LogicExpr *	logic_expr_t;
	ArrayIndex *	array_index_t;
	ScalarExpr *	scalar_expr_t;
	UnaryExpr *	unary_expr_t;
	BinaryExpr *	binary_expr_t;
	CaseExpr *	case_expr_t;
	ExtractExpr *	extract_expr_t;
	ArrayExpr *	array_expr_t;
	FunctionExpr *	function_expr_t;
	ExprColumnName *	expr_column_name_t;
	Literal *	literal_t;
	CompExpr *	comp_expr_t;
	BinaryOp *	binary_op_t;
	OptNot *	opt_not_t;
	CaseList *	case_list_t;
	FunctionName *	function_name_t;
	OptOverClause *	opt_over_clause_t;
	OptDistinct *	opt_distinct_t;
	CaseClause *	case_clause_t;
	DatetimeField *	datetime_field_t;
	IntLiteral *	int_literal_t;
	StringLiteral *	string_literal_t;
	BoolLiteral *	bool_literal_t;
	NumLiteral *	num_literal_t;
	FloatLiteral *	float_literal_t;
	NumericType *	numeric_type_t;
	CharacterType *	character_type_t;
	CharacterConflicta *	character_conflicta_t;
	OptLength *	opt_length_t;
}

/* fill in tokens */
%token OP_SEMI ALTER TABLE UMINUS OP_LP OP_RP SELECT UNION
%token WINDOW OP_COMMA AS PARTITION BY BETWEEN AND RANGE
%token ROWS GROUPS UNBOUNDED PRECEDING FOLLOWING CURRENT ROW GROUP
%token HAVING WHERE FROM INDEXED NOT ON USING JOIN
%token NATURAL LEFT OUTER INNER CROSS LIMIT OFFSET ORDER
%token ASC DESC WITH RECURSIVE ALL DISTINCT CREATE LIKE
%token BTREE HASH INDEX TRIGGER FOR EACH VIEW OR
%token REPLACE INSERT_METHOD ROW_FORMAT NO FIRST LAST DEFAULT DYNAMIC
%token FIXED COMPRESSED REDUNDANT COMPACT IGNORE ALGORITHM OP_EQUAL UNDEFINED
%token MERGE TEMPTABLE SQL SECURITY DEFINER INVOKER INPLACE COPY
%token LOCK NONE SHARED EXCLUSIVE DELETE INSERT UPDATE BEFORE
%token AFTER DROP RESTRICT CASCADE SET LOW_PRIORITY DELAYED HIGH_PRIORITY
%token INTO VALUE VALUES DUPLICATE KEY RENAME TO COLUMN
%token ADD PRIMARY FORCE DISABLE KEYS ENABLE VALIDATION WITHOUT
%token UNIQUE FOREIGN FULLTEXT SPATIAL NULL VISIBLE INVISIBLE AUTO_INCREMENT
%token COLUMN_FORMAT STORAGE DISK MEMORY REFERENCES MATCH FULL PARTIAL
%token SIMPLE ACTION CHECK CONSTRAINT ENFORCED TEMPORARY OPTION CASCADED
%token LOCAL CAST OP_SUB ISNULL IS OP_ADD IN CASE
%token END ELSE EXISTS OVER WHEN THEN OP_NOTEQUAL OP_GREATERTHAN
%token OP_LESSTHAN OP_LESSEQ OP_GREATEREQ EXTRACT SECOND MINUTE HOUR DAY
%token MONTH YEAR ARRAY OP_LBRACKET OP_RBRACKET TRUE FALSE IF
%token OP_POINT OP_MUL OP_DIVIDE OP_MOD OP_XOR ENUM BINARY CHARACTER
%token CHAR VARCHAR TEXT TINYTEXT MEDIUMTEXT LONGTEXT NATIONAL NCHAR
%token INT INTEGER SMALLINT BIGINT REAL FLOAT DOUBLE PRECISION
%token DECIMAL DEC NUMERIC BOOLEAN
/* reserved basic tokens */
%token <ival> INTLITERAL
%token <fval> FLOATLITERAL
%token <sval> IDENTIFIER
%token <sval> STRINGLITERAL


/* define type of non-terminals */
%type <program_t>	program
%type <stmtlist_t>	stmtlist
%type <stmt_t>	stmt
%type <create_stmt_t>	create_stmt
%type <drop_stmt_t>	drop_stmt
%type <select_stmt_t>	select_stmt
%type <update_stmt_t>	update_stmt
%type <insert_stmt_t>	insert_stmt
%type <alter_stmt_t>	alter_stmt
%type <create_table_stmt_t>	create_table_stmt
%type <create_index_stmt_t>	create_index_stmt
%type <create_trigger_stmt_t>	create_trigger_stmt
%type <create_view_stmt_t>	create_view_stmt
%type <drop_index_stmt_t>	drop_index_stmt
%type <drop_table_stmt_t>	drop_table_stmt
%type <drop_trigger_stmt_t>	drop_trigger_stmt
%type <drop_view_stmt_t>	drop_view_stmt
%type <table_name_t>	table_name
%type <alter_action_t>	alter_action
%type <select_no_parens_t>	select_no_parens
%type <select_with_parens_t>	select_with_parens
%type <opt_with_clause_t>	opt_with_clause
%type <select_clause_list_t>	select_clause_list
%type <opt_order_clause_t>	opt_order_clause
%type <opt_limit_clause_t>	opt_limit_clause
%type <select_clause_t>	select_clause
%type <combine_clause_t>	combine_clause
%type <opt_all_or_distinct_t>	opt_all_or_distinct
%type <select_target_t>	select_target
%type <opt_from_clause_t>	opt_from_clause
%type <opt_where_clause_t>	opt_where_clause
%type <opt_group_clause_t>	opt_group_clause
%type <opt_window_clause_t>	opt_window_clause
%type <from_clause_t>	from_clause
%type <expr_list_t>	expr_list
%type <window_clause_t>	window_clause
%type <window_def_list_t>	window_def_list
%type <window_def_t>	window_def
%type <window_name_t>	window_name
%type <window_t>	window
%type <identifier_t>	identifier
%type <opt_exist_window_name_t>	opt_exist_window_name
%type <opt_partition_t>	opt_partition
%type <opt_frame_clause_t>	opt_frame_clause
%type <range_or_rows_t>	range_or_rows
%type <frame_bound_start_t>	frame_bound_start
%type <frame_bound_end_t>	frame_bound_end
%type <frame_bound_t>	frame_bound
%type <expr_t>	expr
%type <opt_having_clause_t>	opt_having_clause
%type <where_clause_t>	where_clause
%type <table_ref_t>	table_ref
%type <opt_table_prefix_t>	opt_table_prefix
%type <opt_as_alias_t>	opt_as_alias
%type <opt_index_t>	opt_index
%type <opt_on_t>	opt_on
%type <opt_using_t>	opt_using
%type <column_name_t>	column_name
%type <column_name_list_t>	column_name_list
%type <join_op_t>	join_op
%type <opt_join_type_t>	opt_join_type
%type <limit_clause_t>	limit_clause
%type <opt_limit_row_count_t>	opt_limit_row_count
%type <order_item_list_t>	order_item_list
%type <order_item_t>	order_item
%type <opt_order_behavior_t>	opt_order_behavior
%type <cte_table_list_t>	cte_table_list
%type <cte_table_t>	cte_table
%type <cte_table_name_t>	cte_table_name
%type <opt_column_name_list_p_t>	opt_column_name_list_p
%type <opt_temp_t>	opt_temp
%type <opt_if_not_exist_t>	opt_if_not_exist
%type <create_definition_list_t>	create_definition_list
%type <opt_table_option_list_t>	opt_table_option_list
%type <opt_create_definition_list_p_t>	opt_create_definition_list_p
%type <opt_ignore_or_replace_t>	opt_ignore_or_replace
%type <opt_as_t>	opt_as
%type <like_field_t>	like_field
%type <opt_index_type_t>	opt_index_type
%type <index_type_t>	index_type
%type <opt_index_keyword_t>	opt_index_keyword
%type <index_name_t>	index_name
%type <key_part_list_t>	key_part_list
%type <opt_index_option_t>	opt_index_option
%type <opt_extra_option_t>	opt_extra_option
%type <trigger_name_t>	trigger_name
%type <trigger_action_time_t>	trigger_action_time
%type <trigger_events_t>	trigger_events
%type <trigger_body_t>	trigger_body
%type <opt_view_algorithm_t>	opt_view_algorithm
%type <opt_sql_security_t>	opt_sql_security
%type <view_name_t>	view_name
%type <opt_check_option_t>	opt_check_option
%type <table_option_list_t>	table_option_list
%type <table_option_t>	table_option
%type <opt_op_comma_t>	opt_op_comma
%type <opt_op_equal_t>	opt_op_equal
%type <insert_method_t>	insert_method
%type <row_format_t>	row_format
%type <visible_invisible_t>	visible_invisible
%type <index_algorithm_option_t>	index_algorithm_option
%type <lock_option_t>	lock_option
%type <opt_if_exist_t>	opt_if_exist
%type <table_name_list_t>	table_name_list
%type <opt_restrict_or_cascade_t>	opt_restrict_or_cascade
%type <opt_priority_t>	opt_priority
%type <opt_ignore_t>	opt_ignore
%type <opt_into_t>	opt_into
%type <value_or_values_t>	value_or_values
%type <super_value_list_t>	super_value_list
%type <opt_as_row_alias_t>	opt_as_row_alias
%type <opt_on_duplicate_t>	opt_on_duplicate
%type <assignment_list_t>	assignment_list
%type <opt_low_priority_t>	opt_low_priority
%type <value_list_t>	value_list
%type <value_t>	value
%type <row_alias_t>	row_alias
%type <opt_col_alias_t>	opt_col_alias
%type <col_alias_list_t>	col_alias_list
%type <col_alias_t>	col_alias
%type <key_part_t>	key_part
%type <opt_column_t>	opt_column
%type <column_def_t>	column_def
%type <alter_constant_action_t>	alter_constant_action
%type <column_def_list_t>	column_def_list
%type <create_definition_t>	create_definition
%type <column_definition_t>	column_definition
%type <index_or_key_t>	index_or_key
%type <opt_index_name_t>	opt_index_name
%type <fulltext_or_spatial_t>	fulltext_or_spatial
%type <opt_index_or_key_t>	opt_index_or_key
%type <opt_constraint_symbol_t>	opt_constraint_symbol
%type <reference_definition_t>	reference_definition
%type <check_constraint_definition_t>	check_constraint_definition
%type <data_type_t>	data_type
%type <opt_null_not_null_t>	opt_null_not_null
%type <opt_visible_invisible_t>	opt_visible_invisible
%type <opt_auto_increment_t>	opt_auto_increment
%type <opt_unique_primary_t>	opt_unique_primary
%type <opt_column_format_t>	opt_column_format
%type <opt_storage_t>	opt_storage
%type <opt_reference_definition_t>	opt_reference_definition
%type <opt_check_constraint_definition_t>	opt_check_constraint_definition
%type <column_format_t>	column_format
%type <storage_t>	storage
%type <opt_match_t>	opt_match
%type <opt_on_delete_t>	opt_on_delete
%type <opt_on_update_t>	opt_on_update
%type <reference_option_t>	reference_option
%type <opt_enforced_t>	opt_enforced
%type <symbol_t>	symbol
%type <assignment_t>	assignment
%type <as_alias_t>	as_alias
%type <operand_t>	operand
%type <between_expr_t>	between_expr
%type <exists_expr_t>	exists_expr
%type <in_expr_t>	in_expr
%type <cast_expr_t>	cast_expr
%type <logic_expr_t>	logic_expr
%type <array_index_t>	array_index
%type <scalar_expr_t>	scalar_expr
%type <unary_expr_t>	unary_expr
%type <binary_expr_t>	binary_expr
%type <case_expr_t>	case_expr
%type <extract_expr_t>	extract_expr
%type <array_expr_t>	array_expr
%type <function_expr_t>	function_expr
%type <expr_column_name_t>	expr_column_name
%type <literal_t>	literal
%type <comp_expr_t>	comp_expr
%type <binary_op_t>	binary_op
%type <opt_not_t>	opt_not
%type <case_list_t>	case_list
%type <function_name_t>	function_name
%type <opt_over_clause_t>	opt_over_clause
%type <opt_distinct_t>	opt_distinct
%type <case_clause_t>	case_clause
%type <datetime_field_t>	datetime_field
%type <int_literal_t>	int_literal
%type <string_literal_t>	string_literal
%type <bool_literal_t>	bool_literal
%type <num_literal_t>	num_literal
%type <float_literal_t>	float_literal
%type <numeric_type_t>	numeric_type
%type <character_type_t>	character_type
%type <character_conflicta_t>	character_conflicta
%type <opt_length_t>	opt_length

/* define precedence & association  */
%left  OR
%left  AND
%left  NOT
%nonassoc  OP_NOTEQUAL MATCH LIKE OP_EQUAL
%nonassoc  OP_GREATERTHAN OP_LESSTHAN OP_GREATEREQ OP_LESSEQ
%nonassoc  ISNULL
%nonassoc  IS

%left  OP_ADD OP_SUB
%left  OP_MUL OP_MOD OP_DIVIDE
%left  OP_XOR
%right  UMINUS
%left  OP_LBRACKET OP_RBRACKET
%left  OP_RP OP_LP

%nonassoc  AS
%nonassoc  ON
%nonassoc  IDENTIFIER
%nonassoc  JOIN
%nonassoc  INSERT_METHOD
%nonassoc  ROW_FORMAT

%destructor{
	free( ($$) );
}  <sval>

%destructor{
	 
}  <fval> <ival>

%destructor { if($$!=NULL)$$->deep_delete(); } <*>

%%
/* define grammar rule & actions */
program:
	stmtlist  {
		$$ = result;
		$$->case_idx_ = CASE0;
		$$->stmtlist_ = $1;
		$$ = NULL;
	}
  ;

stmtlist:
	stmt OP_SEMI stmtlist  {
		$$ = new Stmtlist();
		$$->case_idx_ = CASE0;
		$$->stmt_ = $1;
		$$->stmtlist_ = $3;
	}
   |	stmt OP_SEMI  {
		$$ = new Stmtlist();
		$$->case_idx_ = CASE1;
		$$->stmt_ = $1;
	}
  ;

stmt:
	create_stmt  {
		$$ = new Stmt();
		$$->case_idx_ = CASE0;
		$$->create_stmt_ = $1;
	}
   |	drop_stmt  {
		$$ = new Stmt();
		$$->case_idx_ = CASE1;
		$$->drop_stmt_ = $1;
	}
   |	select_stmt  {
		$$ = new Stmt();
		$$->case_idx_ = CASE2;
		$$->select_stmt_ = $1;
	}
   |	update_stmt  {
		$$ = new Stmt();
		$$->case_idx_ = CASE3;
		$$->update_stmt_ = $1;
	}
   |	insert_stmt  {
		$$ = new Stmt();
		$$->case_idx_ = CASE4;
		$$->insert_stmt_ = $1;
	}
   |	alter_stmt  {
		$$ = new Stmt();
		$$->case_idx_ = CASE5;
		$$->alter_stmt_ = $1;
	}
  ;

create_stmt:
	create_table_stmt  {
		$$ = new CreateStmt();
		$$->case_idx_ = CASE0;
		$$->create_table_stmt_ = $1;
	}
   |	create_index_stmt  {
		$$ = new CreateStmt();
		$$->case_idx_ = CASE1;
		$$->create_index_stmt_ = $1;
	}
   |	create_trigger_stmt  {
		$$ = new CreateStmt();
		$$->case_idx_ = CASE2;
		$$->create_trigger_stmt_ = $1;
	}
   |	create_view_stmt  {
		$$ = new CreateStmt();
		$$->case_idx_ = CASE3;
		$$->create_view_stmt_ = $1;
	}
  ;

drop_stmt:
	drop_index_stmt  {
		$$ = new DropStmt();
		$$->case_idx_ = CASE0;
		$$->drop_index_stmt_ = $1;
	}
   |	drop_table_stmt  {
		$$ = new DropStmt();
		$$->case_idx_ = CASE1;
		$$->drop_table_stmt_ = $1;
	}
   |	drop_trigger_stmt  {
		$$ = new DropStmt();
		$$->case_idx_ = CASE2;
		$$->drop_trigger_stmt_ = $1;
	}
   |	drop_view_stmt  {
		$$ = new DropStmt();
		$$->case_idx_ = CASE3;
		$$->drop_view_stmt_ = $1;
	}
  ;

alter_stmt:
	ALTER TABLE table_name alter_action  {
		$$ = new AlterStmt();
		$$->case_idx_ = CASE0;
		$$->table_name_ = $3;
		$$->alter_action_ = $4;
	}
  ;

select_stmt:
	select_no_parens %prec UMINUS  {
		$$ = new SelectStmt();
		$$->case_idx_ = CASE0;
		$$->select_no_parens_ = $1;
	}
   |	select_with_parens %prec UMINUS  {
		$$ = new SelectStmt();
		$$->case_idx_ = CASE1;
		$$->select_with_parens_ = $1;
	}
  ;

select_with_parens:
	OP_LP select_no_parens OP_RP  {
		$$ = new SelectWithParens();
		$$->case_idx_ = CASE0;
		$$->select_no_parens_ = $2;
	}
   |	OP_LP select_with_parens OP_RP  {
		$$ = new SelectWithParens();
		$$->case_idx_ = CASE1;
		$$->select_with_parens_ = $2;
	}
  ;

select_no_parens:
	opt_with_clause select_clause_list opt_order_clause opt_limit_clause  {
		$$ = new SelectNoParens();
		$$->case_idx_ = CASE0;
		$$->opt_with_clause_ = $1;
		$$->select_clause_list_ = $2;
		$$->opt_order_clause_ = $3;
		$$->opt_limit_clause_ = $4;
	}
  ;

select_clause_list:
	select_clause  {
		$$ = new SelectClauseList();
		$$->case_idx_ = CASE0;
		$$->select_clause_ = $1;
	}
   |	select_clause combine_clause select_clause_list  {
		$$ = new SelectClauseList();
		$$->case_idx_ = CASE1;
		$$->select_clause_ = $1;
		$$->combine_clause_ = $2;
		$$->select_clause_list_ = $3;
	}
  ;

select_clause:
	SELECT opt_all_or_distinct select_target opt_from_clause opt_where_clause opt_group_clause opt_window_clause  {
		$$ = new SelectClause();
		$$->case_idx_ = CASE0;
		$$->opt_all_or_distinct_ = $2;
		$$->select_target_ = $3;
		$$->opt_from_clause_ = $4;
		$$->opt_where_clause_ = $5;
		$$->opt_group_clause_ = $6;
		$$->opt_window_clause_ = $7;
	}
  ;

combine_clause:
	UNION  {
		$$ = new CombineClause();
		$$->case_idx_ = CASE0;
	}
  ;

opt_from_clause:
	from_clause  {
		$$ = new OptFromClause();
		$$->case_idx_ = CASE0;
		$$->from_clause_ = $1;
	}
   |	  {
		$$ = new OptFromClause();
		$$->case_idx_ = CASE1;
	}
  ;

select_target:
	expr_list  {
		$$ = new SelectTarget();
		$$->case_idx_ = CASE0;
		$$->expr_list_ = $1;
	}
  ;

opt_window_clause:
	window_clause  {
		$$ = new OptWindowClause();
		$$->case_idx_ = CASE0;
		$$->window_clause_ = $1;
	}
   |	  {
		$$ = new OptWindowClause();
		$$->case_idx_ = CASE1;
	}
  ;

window_clause:
	WINDOW window_def_list  {
		$$ = new WindowClause();
		$$->case_idx_ = CASE0;
		$$->window_def_list_ = $2;
	}
  ;

window_def_list:
	window_def  {
		$$ = new WindowDefList();
		$$->case_idx_ = CASE0;
		$$->window_def_ = $1;
	}
   |	window_def OP_COMMA window_def_list  {
		$$ = new WindowDefList();
		$$->case_idx_ = CASE1;
		$$->window_def_ = $1;
		$$->window_def_list_ = $3;
	}
  ;

window_def:
	window_name AS OP_LP window OP_RP  {
		$$ = new WindowDef();
		$$->case_idx_ = CASE0;
		$$->window_name_ = $1;
		$$->window_ = $4;
	}
  ;

window_name:
	identifier  {
		$$ = new WindowName();
		$$->case_idx_ = CASE0;
		$$->identifier_ = $1;
	}
  ;

window:
	opt_exist_window_name opt_partition opt_order_clause opt_frame_clause  {
		$$ = new Window();
		$$->case_idx_ = CASE0;
		$$->opt_exist_window_name_ = $1;
		$$->opt_partition_ = $2;
		$$->opt_order_clause_ = $3;
		$$->opt_frame_clause_ = $4;
	}
  ;

opt_partition:
	PARTITION BY expr_list  {
		$$ = new OptPartition();
		$$->case_idx_ = CASE0;
		$$->expr_list_ = $3;
	}
   |	  {
		$$ = new OptPartition();
		$$->case_idx_ = CASE1;
	}
  ;

opt_frame_clause:
	range_or_rows frame_bound_start  {
		$$ = new OptFrameClause();
		$$->case_idx_ = CASE0;
		$$->range_or_rows_ = $1;
		$$->frame_bound_start_ = $2;
	}
   |	range_or_rows BETWEEN frame_bound_start AND frame_bound_end  {
		$$ = new OptFrameClause();
		$$->case_idx_ = CASE1;
		$$->range_or_rows_ = $1;
		$$->frame_bound_start_ = $3;
		$$->frame_bound_end_ = $5;
	}
   |	  {
		$$ = new OptFrameClause();
		$$->case_idx_ = CASE2;
	}
  ;

range_or_rows:
	RANGE  {
		$$ = new RangeOrRows();
		$$->case_idx_ = CASE0;
	}
   |	ROWS  {
		$$ = new RangeOrRows();
		$$->case_idx_ = CASE1;
	}
   |	GROUPS  {
		$$ = new RangeOrRows();
		$$->case_idx_ = CASE2;
	}
  ;

frame_bound_start:
	frame_bound  {
		$$ = new FrameBoundStart();
		$$->case_idx_ = CASE0;
		$$->frame_bound_ = $1;
	}
   |	UNBOUNDED PRECEDING  {
		$$ = new FrameBoundStart();
		$$->case_idx_ = CASE1;
	}
  ;

frame_bound_end:
	frame_bound  {
		$$ = new FrameBoundEnd();
		$$->case_idx_ = CASE0;
		$$->frame_bound_ = $1;
	}
   |	UNBOUNDED FOLLOWING  {
		$$ = new FrameBoundEnd();
		$$->case_idx_ = CASE1;
	}
  ;

frame_bound:
	expr PRECEDING  {
		$$ = new FrameBound();
		$$->case_idx_ = CASE0;
		$$->expr_ = $1;
	}
   |	expr FOLLOWING  {
		$$ = new FrameBound();
		$$->case_idx_ = CASE1;
		$$->expr_ = $1;
	}
   |	CURRENT ROW  {
		$$ = new FrameBound();
		$$->case_idx_ = CASE2;
	}
  ;

opt_exist_window_name:
	identifier  {
		$$ = new OptExistWindowName();
		$$->case_idx_ = CASE0;
		$$->identifier_ = $1;
	}
   |	  {
		$$ = new OptExistWindowName();
		$$->case_idx_ = CASE1;
	}
  ;

opt_group_clause:
	GROUP BY expr_list opt_having_clause  {
		$$ = new OptGroupClause();
		$$->case_idx_ = CASE0;
		$$->expr_list_ = $3;
		$$->opt_having_clause_ = $4;
	}
   |	  {
		$$ = new OptGroupClause();
		$$->case_idx_ = CASE1;
	}
  ;

opt_having_clause:
	HAVING expr  {
		$$ = new OptHavingClause();
		$$->case_idx_ = CASE0;
		$$->expr_ = $2;
	}
   |	  {
		$$ = new OptHavingClause();
		$$->case_idx_ = CASE1;
	}
  ;

opt_where_clause:
	where_clause  {
		$$ = new OptWhereClause();
		$$->case_idx_ = CASE0;
		$$->where_clause_ = $1;
	}
   |	  {
		$$ = new OptWhereClause();
		$$->case_idx_ = CASE1;
	}
  ;

where_clause:
	WHERE expr  {
		$$ = new WhereClause();
		$$->case_idx_ = CASE0;
		$$->expr_ = $2;
	}
  ;

from_clause:
	FROM table_ref  {
		$$ = new FromClause();
		$$->case_idx_ = CASE0;
		$$->table_ref_ = $2;
	}
  ;

table_ref:
	opt_table_prefix table_name opt_as_alias opt_index opt_on opt_using  {
		$$ = new TableRef();
		$$->case_idx_ = CASE0;
		$$->opt_table_prefix_ = $1;
		$$->table_name_ = $2;
		$$->opt_as_alias_ = $3;
		$$->opt_index_ = $4;
		$$->opt_on_ = $5;
		$$->opt_using_ = $6;
	}
   |	opt_table_prefix OP_LP select_no_parens OP_RP opt_as_alias opt_on opt_using  {
		$$ = new TableRef();
		$$->case_idx_ = CASE1;
		$$->opt_table_prefix_ = $1;
		$$->select_no_parens_ = $3;
		$$->opt_as_alias_ = $5;
		$$->opt_on_ = $6;
		$$->opt_using_ = $7;
	}
   |	opt_table_prefix OP_LP table_ref OP_RP opt_as_alias opt_on opt_using  {
		$$ = new TableRef();
		$$->case_idx_ = CASE2;
		$$->opt_table_prefix_ = $1;
		$$->table_ref_ = $3;
		$$->opt_as_alias_ = $5;
		$$->opt_on_ = $6;
		$$->opt_using_ = $7;
	}
  ;

opt_index:
	INDEXED BY column_name  {
		$$ = new OptIndex();
		$$->case_idx_ = CASE0;
		$$->column_name_ = $3;
	}
   |	NOT INDEXED  {
		$$ = new OptIndex();
		$$->case_idx_ = CASE1;
	}
   |	  {
		$$ = new OptIndex();
		$$->case_idx_ = CASE2;
	}
  ;

opt_on:
	ON expr  {
		$$ = new OptOn();
		$$->case_idx_ = CASE0;
		$$->expr_ = $2;
	}
   |	 %prec AS  {
		$$ = new OptOn();
		$$->case_idx_ = CASE1;
	}
  ;

opt_using:
	USING OP_LP column_name_list OP_RP  {
		$$ = new OptUsing();
		$$->case_idx_ = CASE0;
		$$->column_name_list_ = $3;
	}
   |	  {
		$$ = new OptUsing();
		$$->case_idx_ = CASE1;
	}
  ;

column_name_list:
	column_name  {
		$$ = new ColumnNameList();
		$$->case_idx_ = CASE0;
		$$->column_name_ = $1;
	}
   |	column_name OP_COMMA column_name_list  {
		$$ = new ColumnNameList();
		$$->case_idx_ = CASE1;
		$$->column_name_ = $1;
		$$->column_name_list_ = $3;
	}
  ;

opt_table_prefix:
	table_ref join_op  {
		$$ = new OptTablePrefix();
		$$->case_idx_ = CASE0;
		$$->table_ref_ = $1;
		$$->join_op_ = $2;
	}
   |	  {
		$$ = new OptTablePrefix();
		$$->case_idx_ = CASE1;
	}
  ;

join_op:
	OP_COMMA  {
		$$ = new JoinOp();
		$$->case_idx_ = CASE0;
	}
   |	JOIN  {
		$$ = new JoinOp();
		$$->case_idx_ = CASE1;
	}
   |	NATURAL opt_join_type JOIN  {
		$$ = new JoinOp();
		$$->case_idx_ = CASE2;
		$$->opt_join_type_ = $2;
	}
  ;

opt_join_type:
	LEFT  {
		$$ = new OptJoinType();
		$$->case_idx_ = CASE0;
	}
   |	LEFT OUTER  {
		$$ = new OptJoinType();
		$$->case_idx_ = CASE1;
	}
   |	INNER  {
		$$ = new OptJoinType();
		$$->case_idx_ = CASE2;
	}
   |	CROSS  {
		$$ = new OptJoinType();
		$$->case_idx_ = CASE3;
	}
   |	  {
		$$ = new OptJoinType();
		$$->case_idx_ = CASE4;
	}
  ;

expr_list:
	expr opt_as_alias OP_COMMA expr_list  {
		$$ = new ExprList();
		$$->case_idx_ = CASE0;
		$$->expr_ = $1;
		$$->opt_as_alias_ = $2;
		$$->expr_list_ = $4;
	}
   |	expr opt_as_alias  {
		$$ = new ExprList();
		$$->case_idx_ = CASE1;
		$$->expr_ = $1;
		$$->opt_as_alias_ = $2;
	}
  ;

opt_limit_clause:
	limit_clause  {
		$$ = new OptLimitClause();
		$$->case_idx_ = CASE0;
		$$->limit_clause_ = $1;
	}
   |	  {
		$$ = new OptLimitClause();
		$$->case_idx_ = CASE1;
	}
  ;

limit_clause:
	LIMIT expr  {
		$$ = new LimitClause();
		$$->case_idx_ = CASE0;
		$$->expr_1_ = $2;
	}
   |	LIMIT expr OFFSET expr  {
		$$ = new LimitClause();
		$$->case_idx_ = CASE1;
		$$->expr_1_ = $2;
		$$->expr_2_ = $4;
	}
   |	LIMIT expr OP_COMMA expr  {
		$$ = new LimitClause();
		$$->case_idx_ = CASE2;
		$$->expr_1_ = $2;
		$$->expr_2_ = $4;
	}
  ;

opt_limit_row_count:
	LIMIT expr  {
		$$ = new OptLimitRowCount();
		$$->case_idx_ = CASE0;
		$$->expr_ = $2;
	}
   |	  {
		$$ = new OptLimitRowCount();
		$$->case_idx_ = CASE1;
	}
  ;

opt_order_clause:
	ORDER BY order_item_list  {
		$$ = new OptOrderClause();
		$$->case_idx_ = CASE0;
		$$->order_item_list_ = $3;
	}
   |	  {
		$$ = new OptOrderClause();
		$$->case_idx_ = CASE1;
	}
  ;

order_item_list:
	order_item  {
		$$ = new OrderItemList();
		$$->case_idx_ = CASE0;
		$$->order_item_ = $1;
	}
   |	order_item OP_COMMA order_item_list  {
		$$ = new OrderItemList();
		$$->case_idx_ = CASE1;
		$$->order_item_ = $1;
		$$->order_item_list_ = $3;
	}
  ;

order_item:
	expr opt_order_behavior  {
		$$ = new OrderItem();
		$$->case_idx_ = CASE0;
		$$->expr_ = $1;
		$$->opt_order_behavior_ = $2;
	}
  ;

opt_order_behavior:
	ASC  {
		$$ = new OptOrderBehavior();
		$$->case_idx_ = CASE0;
	}
   |	DESC  {
		$$ = new OptOrderBehavior();
		$$->case_idx_ = CASE1;
	}
   |	  {
		$$ = new OptOrderBehavior();
		$$->case_idx_ = CASE2;
	}
  ;

opt_with_clause:
	WITH cte_table_list  {
		$$ = new OptWithClause();
		$$->case_idx_ = CASE0;
		$$->cte_table_list_ = $2;
	}
   |	WITH RECURSIVE cte_table_list  {
		$$ = new OptWithClause();
		$$->case_idx_ = CASE1;
		$$->cte_table_list_ = $3;
	}
   |	  {
		$$ = new OptWithClause();
		$$->case_idx_ = CASE2;
	}
  ;

cte_table_list:
	cte_table  {
		$$ = new CteTableList();
		$$->case_idx_ = CASE0;
		$$->cte_table_ = $1;
	}
   |	cte_table OP_COMMA cte_table_list  {
		$$ = new CteTableList();
		$$->case_idx_ = CASE1;
		$$->cte_table_ = $1;
		$$->cte_table_list_ = $3;
	}
  ;

cte_table:
	cte_table_name AS OP_LP select_stmt OP_RP  {
		$$ = new CteTable();
		$$->case_idx_ = CASE0;
		$$->cte_table_name_ = $1;
		$$->select_stmt_ = $4;
	}
  ;

cte_table_name:
	table_name opt_column_name_list_p  {
		$$ = new CteTableName();
		$$->case_idx_ = CASE0;
		$$->table_name_ = $1;
		$$->opt_column_name_list_p_ = $2;
	}
  ;

opt_all_or_distinct:
	ALL  {
		$$ = new OptAllOrDistinct();
		$$->case_idx_ = CASE0;
	}
   |	DISTINCT  {
		$$ = new OptAllOrDistinct();
		$$->case_idx_ = CASE1;
	}
   |	  {
		$$ = new OptAllOrDistinct();
		$$->case_idx_ = CASE2;
	}
  ;

create_table_stmt:
	CREATE opt_temp TABLE opt_if_not_exist table_name OP_LP create_definition_list OP_RP opt_table_option_list  {
		$$ = new CreateTableStmt();
		$$->case_idx_ = CASE0;
		$$->opt_temp_ = $2;
		$$->opt_if_not_exist_ = $4;
		$$->table_name_ = $5;
		$$->create_definition_list_ = $7;
		$$->opt_table_option_list_ = $9;
	}
   |	CREATE opt_temp TABLE opt_if_not_exist table_name opt_create_definition_list_p opt_table_option_list opt_ignore_or_replace opt_as select_stmt  {
		$$ = new CreateTableStmt();
		$$->case_idx_ = CASE1;
		$$->opt_temp_ = $2;
		$$->opt_if_not_exist_ = $4;
		$$->table_name_ = $5;
		$$->opt_create_definition_list_p_ = $6;
		$$->opt_table_option_list_ = $7;
		$$->opt_ignore_or_replace_ = $8;
		$$->opt_as_ = $9;
		$$->select_stmt_ = $10;
	}
   |	CREATE opt_temp TABLE opt_if_not_exist table_name like_field  {
		$$ = new CreateTableStmt();
		$$->case_idx_ = CASE2;
		$$->opt_temp_ = $2;
		$$->opt_if_not_exist_ = $4;
		$$->table_name_ = $5;
		$$->like_field_ = $6;
	}
  ;

opt_as:
	AS  {
		$$ = new OptAs();
		$$->case_idx_ = CASE0;
	}
   |	  {
		$$ = new OptAs();
		$$->case_idx_ = CASE1;
	}
  ;

like_field:
	LIKE table_name  {
		$$ = new LikeField();
		$$->case_idx_ = CASE0;
		$$->table_name_ = $2;
	}
   |	OP_LP LIKE table_name OP_RP  {
		$$ = new LikeField();
		$$->case_idx_ = CASE1;
		$$->table_name_ = $3;
	}
  ;

opt_index_type:
	index_type  {
		$$ = new OptIndexType();
		$$->case_idx_ = CASE0;
		$$->index_type_ = $1;
	}
   |	  {
		$$ = new OptIndexType();
		$$->case_idx_ = CASE1;
	}
  ;

index_type:
	USING BTREE  {
		$$ = new IndexType();
		$$->case_idx_ = CASE0;
	}
   |	USING HASH  {
		$$ = new IndexType();
		$$->case_idx_ = CASE1;
	}
  ;

create_index_stmt:
	CREATE opt_index_keyword INDEX index_name opt_index_type ON table_name OP_LP key_part_list OP_RP opt_index_option opt_extra_option  {
		$$ = new CreateIndexStmt();
		$$->case_idx_ = CASE0;
		$$->opt_index_keyword_ = $2;
		$$->index_name_ = $4;
		$$->opt_index_type_ = $5;
		$$->table_name_ = $7;
		$$->key_part_list_ = $9;
		$$->opt_index_option_ = $11;
		$$->opt_extra_option_ = $12;
	}
  ;

create_trigger_stmt:
	CREATE TRIGGER trigger_name trigger_action_time trigger_events ON table_name FOR EACH ROW trigger_body  {
		$$ = new CreateTriggerStmt();
		$$->case_idx_ = CASE0;
		$$->trigger_name_ = $3;
		$$->trigger_action_time_ = $4;
		$$->trigger_events_ = $5;
		$$->table_name_ = $7;
		$$->trigger_body_ = $11;
	}
  ;

create_view_stmt:
	CREATE opt_view_algorithm opt_sql_security VIEW view_name opt_column_name_list_p AS select_stmt opt_check_option  {
		$$ = new CreateViewStmt();
		$$->case_idx_ = CASE0;
		$$->opt_view_algorithm_ = $2;
		$$->opt_sql_security_ = $3;
		$$->view_name_ = $5;
		$$->opt_column_name_list_p_ = $6;
		$$->select_stmt_ = $8;
		$$->opt_check_option_ = $9;
	}
   |	CREATE OR REPLACE opt_view_algorithm opt_sql_security VIEW view_name opt_column_name_list_p AS select_stmt opt_check_option  {
		$$ = new CreateViewStmt();
		$$->case_idx_ = CASE1;
		$$->opt_view_algorithm_ = $4;
		$$->opt_sql_security_ = $5;
		$$->view_name_ = $7;
		$$->opt_column_name_list_p_ = $8;
		$$->select_stmt_ = $10;
		$$->opt_check_option_ = $11;
	}
  ;

opt_table_option_list:
	table_option_list  {
		$$ = new OptTableOptionList();
		$$->case_idx_ = CASE0;
		$$->table_option_list_ = $1;
	}
   |	  {
		$$ = new OptTableOptionList();
		$$->case_idx_ = CASE1;
	}
  ;

table_option_list:
	table_option  {
		$$ = new TableOptionList();
		$$->case_idx_ = CASE0;
		$$->table_option_ = $1;
	}
   |	table_option opt_op_comma table_option_list  {
		$$ = new TableOptionList();
		$$->case_idx_ = CASE1;
		$$->table_option_ = $1;
		$$->opt_op_comma_ = $2;
		$$->table_option_list_ = $3;
	}
  ;

table_option:
	INSERT_METHOD opt_op_equal insert_method  {
		$$ = new TableOption();
		$$->case_idx_ = CASE0;
		$$->opt_op_equal_ = $2;
		$$->insert_method_ = $3;
	}
   |	ROW_FORMAT opt_op_equal row_format  {
		$$ = new TableOption();
		$$->case_idx_ = CASE1;
		$$->opt_op_equal_ = $2;
		$$->row_format_ = $3;
	}
  ;

insert_method:
	NO  {
		$$ = new InsertMethod();
		$$->case_idx_ = CASE0;
	}
   |	FIRST  {
		$$ = new InsertMethod();
		$$->case_idx_ = CASE1;
	}
   |	LAST  {
		$$ = new InsertMethod();
		$$->case_idx_ = CASE2;
	}
  ;

row_format:
	DEFAULT  {
		$$ = new RowFormat();
		$$->case_idx_ = CASE0;
	}
   |	DYNAMIC  {
		$$ = new RowFormat();
		$$->case_idx_ = CASE1;
	}
   |	FIXED  {
		$$ = new RowFormat();
		$$->case_idx_ = CASE2;
	}
   |	COMPRESSED  {
		$$ = new RowFormat();
		$$->case_idx_ = CASE3;
	}
   |	REDUNDANT  {
		$$ = new RowFormat();
		$$->case_idx_ = CASE4;
	}
   |	COMPACT  {
		$$ = new RowFormat();
		$$->case_idx_ = CASE5;
	}
  ;

opt_op_comma:
	OP_COMMA  {
		$$ = new OptOpComma();
		$$->case_idx_ = CASE0;
	}
   |	  {
		$$ = new OptOpComma();
		$$->case_idx_ = CASE1;
	}
  ;

opt_ignore_or_replace:
	IGNORE  {
		$$ = new OptIgnoreOrReplace();
		$$->case_idx_ = CASE0;
	}
   |	REPLACE  {
		$$ = new OptIgnoreOrReplace();
		$$->case_idx_ = CASE1;
	}
   |	  {
		$$ = new OptIgnoreOrReplace();
		$$->case_idx_ = CASE2;
	}
  ;

opt_view_algorithm:
	ALGORITHM OP_EQUAL UNDEFINED  {
		$$ = new OptViewAlgorithm();
		$$->case_idx_ = CASE0;
	}
   |	ALGORITHM OP_EQUAL MERGE  {
		$$ = new OptViewAlgorithm();
		$$->case_idx_ = CASE1;
	}
   |	ALGORITHM OP_EQUAL TEMPTABLE  {
		$$ = new OptViewAlgorithm();
		$$->case_idx_ = CASE2;
	}
   |	  {
		$$ = new OptViewAlgorithm();
		$$->case_idx_ = CASE3;
	}
  ;

opt_sql_security:
	SQL SECURITY DEFINER  {
		$$ = new OptSqlSecurity();
		$$->case_idx_ = CASE0;
	}
   |	SQL SECURITY INVOKER  {
		$$ = new OptSqlSecurity();
		$$->case_idx_ = CASE1;
	}
   |	  {
		$$ = new OptSqlSecurity();
		$$->case_idx_ = CASE2;
	}
  ;

opt_index_option:
	index_type  {
		$$ = new OptIndexOption();
		$$->case_idx_ = CASE0;
		$$->index_type_ = $1;
	}
   |	visible_invisible  {
		$$ = new OptIndexOption();
		$$->case_idx_ = CASE1;
		$$->visible_invisible_ = $1;
	}
   |	  {
		$$ = new OptIndexOption();
		$$->case_idx_ = CASE2;
	}
  ;

opt_extra_option:
	index_algorithm_option  {
		$$ = new OptExtraOption();
		$$->case_idx_ = CASE0;
		$$->index_algorithm_option_ = $1;
	}
   |	lock_option  {
		$$ = new OptExtraOption();
		$$->case_idx_ = CASE1;
		$$->lock_option_ = $1;
	}
   |	  {
		$$ = new OptExtraOption();
		$$->case_idx_ = CASE2;
	}
  ;

index_algorithm_option:
	ALGORITHM opt_op_equal DEFAULT  {
		$$ = new IndexAlgorithmOption();
		$$->case_idx_ = CASE0;
		$$->opt_op_equal_ = $2;
	}
   |	ALGORITHM opt_op_equal INPLACE  {
		$$ = new IndexAlgorithmOption();
		$$->case_idx_ = CASE1;
		$$->opt_op_equal_ = $2;
	}
   |	ALGORITHM opt_op_equal COPY  {
		$$ = new IndexAlgorithmOption();
		$$->case_idx_ = CASE2;
		$$->opt_op_equal_ = $2;
	}
  ;

lock_option:
	LOCK opt_op_equal DEFAULT  {
		$$ = new LockOption();
		$$->case_idx_ = CASE0;
		$$->opt_op_equal_ = $2;
	}
   |	LOCK opt_op_equal NONE  {
		$$ = new LockOption();
		$$->case_idx_ = CASE1;
		$$->opt_op_equal_ = $2;
	}
   |	LOCK opt_op_equal SHARED  {
		$$ = new LockOption();
		$$->case_idx_ = CASE2;
		$$->opt_op_equal_ = $2;
	}
   |	LOCK opt_op_equal EXCLUSIVE  {
		$$ = new LockOption();
		$$->case_idx_ = CASE3;
		$$->opt_op_equal_ = $2;
	}
  ;

opt_op_equal:
	OP_EQUAL  {
		$$ = new OptOpEqual();
		$$->case_idx_ = CASE0;
	}
   |	  {
		$$ = new OptOpEqual();
		$$->case_idx_ = CASE1;
	}
  ;

trigger_events:
	DELETE  {
		$$ = new TriggerEvents();
		$$->case_idx_ = CASE0;
	}
   |	INSERT  {
		$$ = new TriggerEvents();
		$$->case_idx_ = CASE1;
	}
   |	UPDATE  {
		$$ = new TriggerEvents();
		$$->case_idx_ = CASE2;
	}
  ;

trigger_name:
	identifier  {
		$$ = new TriggerName();
		$$->case_idx_ = CASE0;
		$$->identifier_ = $1;
	}
  ;

trigger_action_time:
	BEFORE  {
		$$ = new TriggerActionTime();
		$$->case_idx_ = CASE0;
	}
   |	AFTER  {
		$$ = new TriggerActionTime();
		$$->case_idx_ = CASE1;
	}
  ;

drop_index_stmt:
	DROP INDEX index_name ON table_name opt_extra_option  {
		$$ = new DropIndexStmt();
		$$->case_idx_ = CASE0;
		$$->index_name_ = $3;
		$$->table_name_ = $5;
		$$->opt_extra_option_ = $6;
	}
  ;

drop_table_stmt:
	DROP opt_temp TABLE opt_if_exist table_name_list opt_restrict_or_cascade  {
		$$ = new DropTableStmt();
		$$->case_idx_ = CASE0;
		$$->opt_temp_ = $2;
		$$->opt_if_exist_ = $4;
		$$->table_name_list_ = $5;
		$$->opt_restrict_or_cascade_ = $6;
	}
  ;

table_name_list:
	table_name OP_COMMA table_name_list  {
		$$ = new TableNameList();
		$$->case_idx_ = CASE0;
		$$->table_name_ = $1;
		$$->table_name_list_ = $3;
	}
   |	table_name  {
		$$ = new TableNameList();
		$$->case_idx_ = CASE1;
		$$->table_name_ = $1;
	}
  ;

opt_restrict_or_cascade:
	RESTRICT  {
		$$ = new OptRestrictOrCascade();
		$$->case_idx_ = CASE0;
	}
   |	CASCADE  {
		$$ = new OptRestrictOrCascade();
		$$->case_idx_ = CASE1;
	}
   |	  {
		$$ = new OptRestrictOrCascade();
		$$->case_idx_ = CASE2;
	}
  ;

drop_trigger_stmt:
	DROP TRIGGER opt_if_exist trigger_name  {
		$$ = new DropTriggerStmt();
		$$->case_idx_ = CASE0;
		$$->opt_if_exist_ = $3;
		$$->trigger_name_ = $4;
	}
  ;

drop_view_stmt:
	DROP VIEW opt_if_exist view_name opt_restrict_or_cascade  {
		$$ = new DropViewStmt();
		$$->case_idx_ = CASE0;
		$$->opt_if_exist_ = $3;
		$$->view_name_ = $4;
		$$->opt_restrict_or_cascade_ = $5;
	}
  ;

insert_stmt:
	INSERT opt_priority opt_ignore opt_into table_name opt_column_name_list_p value_or_values super_value_list opt_as_row_alias opt_on_duplicate  {
		$$ = new InsertStmt();
		$$->case_idx_ = CASE0;
		$$->opt_priority_ = $2;
		$$->opt_ignore_ = $3;
		$$->opt_into_ = $4;
		$$->table_name_1_ = $5;
		$$->opt_column_name_list_p_ = $6;
		$$->value_or_values_ = $7;
		$$->super_value_list_ = $8;
		$$->opt_as_row_alias_ = $9;
		$$->opt_on_duplicate_ = $10;
	}
   |	INSERT opt_priority opt_ignore opt_into table_name opt_as_row_alias SET assignment_list opt_on_duplicate  {
		$$ = new InsertStmt();
		$$->case_idx_ = CASE1;
		$$->opt_priority_ = $2;
		$$->opt_ignore_ = $3;
		$$->opt_into_ = $4;
		$$->table_name_1_ = $5;
		$$->opt_as_row_alias_ = $6;
		$$->assignment_list_ = $8;
		$$->opt_on_duplicate_ = $9;
	}
   |	INSERT opt_priority opt_ignore opt_into table_name opt_column_name_list_p opt_as_row_alias select_no_parens opt_on_duplicate  {
		$$ = new InsertStmt();
		$$->case_idx_ = CASE2;
		$$->opt_priority_ = $2;
		$$->opt_ignore_ = $3;
		$$->opt_into_ = $4;
		$$->table_name_1_ = $5;
		$$->opt_column_name_list_p_ = $6;
		$$->opt_as_row_alias_ = $7;
		$$->select_no_parens_ = $8;
		$$->opt_on_duplicate_ = $9;
	}
   |	INSERT opt_priority opt_ignore opt_into table_name opt_column_name_list_p opt_as_row_alias TABLE table_name opt_on_duplicate  {
		$$ = new InsertStmt();
		$$->case_idx_ = CASE3;
		$$->opt_priority_ = $2;
		$$->opt_ignore_ = $3;
		$$->opt_into_ = $4;
		$$->table_name_1_ = $5;
		$$->opt_column_name_list_p_ = $6;
		$$->opt_as_row_alias_ = $7;
		$$->table_name_2_ = $9;
		$$->opt_on_duplicate_ = $10;
	}
  ;

opt_priority:
	LOW_PRIORITY  {
		$$ = new OptPriority();
		$$->case_idx_ = CASE0;
	}
   |	DELAYED  {
		$$ = new OptPriority();
		$$->case_idx_ = CASE1;
	}
   |	HIGH_PRIORITY  {
		$$ = new OptPriority();
		$$->case_idx_ = CASE2;
	}
   |	  {
		$$ = new OptPriority();
		$$->case_idx_ = CASE3;
	}
  ;

opt_low_priority:
	LOW_PRIORITY  {
		$$ = new OptLowPriority();
		$$->case_idx_ = CASE0;
	}
   |	  {
		$$ = new OptLowPriority();
		$$->case_idx_ = CASE1;
	}
  ;

opt_into:
	INTO  {
		$$ = new OptInto();
		$$->case_idx_ = CASE0;
	}
   |	  {
		$$ = new OptInto();
		$$->case_idx_ = CASE1;
	}
  ;

value_or_values:
	VALUE  {
		$$ = new ValueOrValues();
		$$->case_idx_ = CASE0;
	}
   |	VALUES  {
		$$ = new ValueOrValues();
		$$->case_idx_ = CASE1;
	}
  ;

super_value_list:
	OP_LP value_list OP_RP  {
		$$ = new SuperValueList();
		$$->case_idx_ = CASE0;
		$$->value_list_ = $2;
	}
   |	OP_LP value_list OP_RP OP_COMMA super_value_list  {
		$$ = new SuperValueList();
		$$->case_idx_ = CASE1;
		$$->value_list_ = $2;
		$$->super_value_list_ = $5;
	}
  ;

value_list:
	value  {
		$$ = new ValueList();
		$$->case_idx_ = CASE0;
		$$->value_ = $1;
	}
   |	value OP_COMMA value_list  {
		$$ = new ValueList();
		$$->case_idx_ = CASE1;
		$$->value_ = $1;
		$$->value_list_ = $3;
	}
  ;

value:
	expr  {
		$$ = new Value();
		$$->case_idx_ = CASE0;
		$$->expr_ = $1;
	}
   |	DEFAULT  {
		$$ = new Value();
		$$->case_idx_ = CASE1;
	}
  ;

opt_as_row_alias:
	AS row_alias opt_col_alias  {
		$$ = new OptAsRowAlias();
		$$->case_idx_ = CASE0;
		$$->row_alias_ = $2;
		$$->opt_col_alias_ = $3;
	}
   |	  {
		$$ = new OptAsRowAlias();
		$$->case_idx_ = CASE1;
	}
  ;

row_alias:
	identifier  {
		$$ = new RowAlias();
		$$->case_idx_ = CASE0;
		$$->identifier_ = $1;
	}
  ;

opt_col_alias:
	OP_LP col_alias_list OP_RP  {
		$$ = new OptColAlias();
		$$->case_idx_ = CASE0;
		$$->col_alias_list_ = $2;
	}
   |	  {
		$$ = new OptColAlias();
		$$->case_idx_ = CASE1;
	}
  ;

col_alias_list:
	col_alias  {
		$$ = new ColAliasList();
		$$->case_idx_ = CASE0;
		$$->col_alias_ = $1;
	}
   |	col_alias OP_COMMA col_alias_list  {
		$$ = new ColAliasList();
		$$->case_idx_ = CASE1;
		$$->col_alias_ = $1;
		$$->col_alias_list_ = $3;
	}
  ;

col_alias:
	identifier  {
		$$ = new ColAlias();
		$$->case_idx_ = CASE0;
		$$->identifier_ = $1;
	}
  ;

opt_on_duplicate:
	ON DUPLICATE KEY UPDATE assignment_list  {
		$$ = new OptOnDuplicate();
		$$->case_idx_ = CASE0;
		$$->assignment_list_ = $5;
	}
   |	  {
		$$ = new OptOnDuplicate();
		$$->case_idx_ = CASE1;
	}
  ;

key_part_list:
	key_part  {
		$$ = new KeyPartList();
		$$->case_idx_ = CASE0;
		$$->key_part_ = $1;
	}
   |	key_part OP_COMMA key_part_list  {
		$$ = new KeyPartList();
		$$->case_idx_ = CASE1;
		$$->key_part_ = $1;
		$$->key_part_list_ = $3;
	}
  ;

key_part:
	expr opt_order_behavior  {
		$$ = new KeyPart();
		$$->case_idx_ = CASE0;
		$$->expr_ = $1;
		$$->opt_order_behavior_ = $2;
	}
  ;

update_stmt:
	opt_with_clause UPDATE opt_low_priority opt_ignore table_ref SET assignment_list opt_where_clause opt_order_clause opt_limit_row_count  {
		$$ = new UpdateStmt();
		$$->case_idx_ = CASE0;
		$$->opt_with_clause_ = $1;
		$$->opt_low_priority_ = $3;
		$$->opt_ignore_ = $4;
		$$->table_ref_ = $5;
		$$->assignment_list_ = $7;
		$$->opt_where_clause_ = $8;
		$$->opt_order_clause_ = $9;
		$$->opt_limit_row_count_ = $10;
	}
  ;

opt_ignore:
	IGNORE  {
		$$ = new OptIgnore();
		$$->case_idx_ = CASE0;
	}
   |	  {
		$$ = new OptIgnore();
		$$->case_idx_ = CASE1;
	}
  ;

alter_action:
	RENAME TO table_name  {
		$$ = new AlterAction();
		$$->case_idx_ = CASE0;
		$$->table_name_ = $3;
	}
   |	RENAME COLUMN column_name TO column_name  {
		$$ = new AlterAction();
		$$->case_idx_ = CASE1;
		$$->column_name_1_ = $3;
		$$->column_name_2_ = $5;
	}
   |	ADD opt_column column_def  {
		$$ = new AlterAction();
		$$->case_idx_ = CASE2;
		$$->opt_column_ = $2;
		$$->column_def_ = $3;
	}
   |	DROP opt_column column_name  {
		$$ = new AlterAction();
		$$->case_idx_ = CASE3;
		$$->opt_column_ = $2;
		$$->column_name_1_ = $3;
	}
   |	alter_constant_action  {
		$$ = new AlterAction();
		$$->case_idx_ = CASE4;
		$$->alter_constant_action_ = $1;
	}
   |	ADD opt_column OP_LP column_def_list OP_RP  {
		$$ = new AlterAction();
		$$->case_idx_ = CASE5;
		$$->opt_column_ = $2;
		$$->column_def_list_ = $4;
	}
  ;

alter_constant_action:
	DROP PRIMARY KEY  {
		$$ = new AlterConstantAction();
		$$->case_idx_ = CASE0;
	}
   |	FORCE  {
		$$ = new AlterConstantAction();
		$$->case_idx_ = CASE1;
	}
   |	DISABLE KEYS  {
		$$ = new AlterConstantAction();
		$$->case_idx_ = CASE2;
	}
   |	ENABLE KEYS  {
		$$ = new AlterConstantAction();
		$$->case_idx_ = CASE3;
	}
   |	lock_option  {
		$$ = new AlterConstantAction();
		$$->case_idx_ = CASE4;
		$$->lock_option_ = $1;
	}
   |	WITH VALIDATION  {
		$$ = new AlterConstantAction();
		$$->case_idx_ = CASE5;
	}
   |	WITHOUT VALIDATION  {
		$$ = new AlterConstantAction();
		$$->case_idx_ = CASE6;
	}
  ;

opt_create_definition_list_p:
	OP_LP create_definition_list OP_RP  {
		$$ = new OptCreateDefinitionListP();
		$$->case_idx_ = CASE0;
		$$->create_definition_list_ = $2;
	}
   |	 %prec UMINUS  {
		$$ = new OptCreateDefinitionListP();
		$$->case_idx_ = CASE1;
	}
  ;

create_definition_list:
	create_definition  {
		$$ = new CreateDefinitionList();
		$$->case_idx_ = CASE0;
		$$->create_definition_ = $1;
	}
   |	create_definition OP_COMMA create_definition_list  {
		$$ = new CreateDefinitionList();
		$$->case_idx_ = CASE1;
		$$->create_definition_ = $1;
		$$->create_definition_list_ = $3;
	}
  ;

create_definition:
	column_name column_definition  {
		$$ = new CreateDefinition();
		$$->case_idx_ = CASE0;
		$$->column_name_ = $1;
		$$->column_definition_ = $2;
	}
   |	index_or_key opt_index_name opt_index_type OP_LP key_part_list OP_RP opt_index_option  {
		$$ = new CreateDefinition();
		$$->case_idx_ = CASE1;
		$$->index_or_key_ = $1;
		$$->opt_index_name_ = $2;
		$$->opt_index_type_ = $3;
		$$->key_part_list_ = $5;
		$$->opt_index_option_ = $7;
	}
   |	fulltext_or_spatial opt_index_or_key opt_index_name OP_LP key_part_list OP_RP opt_index_option  {
		$$ = new CreateDefinition();
		$$->case_idx_ = CASE2;
		$$->fulltext_or_spatial_ = $1;
		$$->opt_index_or_key_ = $2;
		$$->opt_index_name_ = $3;
		$$->key_part_list_ = $5;
		$$->opt_index_option_ = $7;
	}
   |	opt_constraint_symbol PRIMARY KEY opt_index_type OP_LP key_part_list OP_RP opt_index_option  {
		$$ = new CreateDefinition();
		$$->case_idx_ = CASE3;
		$$->opt_constraint_symbol_ = $1;
		$$->opt_index_type_ = $4;
		$$->key_part_list_ = $6;
		$$->opt_index_option_ = $8;
	}
   |	opt_constraint_symbol UNIQUE opt_index_or_key opt_index_name opt_index_type OP_LP key_part_list OP_RP opt_index_option  {
		$$ = new CreateDefinition();
		$$->case_idx_ = CASE4;
		$$->opt_constraint_symbol_ = $1;
		$$->opt_index_or_key_ = $3;
		$$->opt_index_name_ = $4;
		$$->opt_index_type_ = $5;
		$$->key_part_list_ = $7;
		$$->opt_index_option_ = $9;
	}
   |	opt_constraint_symbol FOREIGN KEY opt_index_name OP_LP column_name_list OP_RP reference_definition  {
		$$ = new CreateDefinition();
		$$->case_idx_ = CASE5;
		$$->opt_constraint_symbol_ = $1;
		$$->opt_index_name_ = $4;
		$$->column_name_list_ = $6;
		$$->reference_definition_ = $8;
	}
   |	check_constraint_definition  {
		$$ = new CreateDefinition();
		$$->case_idx_ = CASE6;
		$$->check_constraint_definition_ = $1;
	}
  ;

column_definition:
	data_type opt_null_not_null opt_visible_invisible opt_auto_increment opt_unique_primary opt_column_format opt_storage opt_reference_definition opt_check_constraint_definition  {
		$$ = new ColumnDefinition();
		$$->case_idx_ = CASE0;
		$$->data_type_ = $1;
		$$->opt_null_not_null_ = $2;
		$$->opt_visible_invisible_ = $3;
		$$->opt_auto_increment_ = $4;
		$$->opt_unique_primary_ = $5;
		$$->opt_column_format_ = $6;
		$$->opt_storage_ = $7;
		$$->opt_reference_definition_ = $8;
		$$->opt_check_constraint_definition_ = $9;
	}
  ;

fulltext_or_spatial:
	FULLTEXT  {
		$$ = new FulltextOrSpatial();
		$$->case_idx_ = CASE0;
	}
   |	SPATIAL  {
		$$ = new FulltextOrSpatial();
		$$->case_idx_ = CASE1;
	}
  ;

opt_index_or_key:
	index_or_key  {
		$$ = new OptIndexOrKey();
		$$->case_idx_ = CASE0;
		$$->index_or_key_ = $1;
	}
   |	  {
		$$ = new OptIndexOrKey();
		$$->case_idx_ = CASE1;
	}
  ;

index_or_key:
	INDEX  {
		$$ = new IndexOrKey();
		$$->case_idx_ = CASE0;
	}
   |	KEY  {
		$$ = new IndexOrKey();
		$$->case_idx_ = CASE1;
	}
  ;

opt_index_name:
	index_name  {
		$$ = new OptIndexName();
		$$->case_idx_ = CASE0;
		$$->index_name_ = $1;
	}
   |	  {
		$$ = new OptIndexName();
		$$->case_idx_ = CASE1;
	}
  ;

opt_null_not_null:
	NOT NULL  {
		$$ = new OptNullNotNull();
		$$->case_idx_ = CASE0;
	}
   |	NULL  {
		$$ = new OptNullNotNull();
		$$->case_idx_ = CASE1;
	}
   |	  {
		$$ = new OptNullNotNull();
		$$->case_idx_ = CASE2;
	}
  ;

opt_visible_invisible:
	visible_invisible  {
		$$ = new OptVisibleInvisible();
		$$->case_idx_ = CASE0;
		$$->visible_invisible_ = $1;
	}
   |	  {
		$$ = new OptVisibleInvisible();
		$$->case_idx_ = CASE1;
	}
  ;

visible_invisible:
	VISIBLE  {
		$$ = new VisibleInvisible();
		$$->case_idx_ = CASE0;
	}
   |	INVISIBLE  {
		$$ = new VisibleInvisible();
		$$->case_idx_ = CASE1;
	}
  ;

opt_auto_increment:
	AUTO_INCREMENT  {
		$$ = new OptAutoIncrement();
		$$->case_idx_ = CASE0;
	}
   |	  {
		$$ = new OptAutoIncrement();
		$$->case_idx_ = CASE1;
	}
  ;

opt_unique_primary:
	UNIQUE KEY  {
		$$ = new OptUniquePrimary();
		$$->case_idx_ = CASE0;
	}
   |	UNIQUE PRIMARY KEY  {
		$$ = new OptUniquePrimary();
		$$->case_idx_ = CASE1;
	}
   |	UNIQUE KEY KEY  {
		$$ = new OptUniquePrimary();
		$$->case_idx_ = CASE2;
	}
   |	UNIQUE KEY PRIMARY KEY  {
		$$ = new OptUniquePrimary();
		$$->case_idx_ = CASE3;
	}
   |	  {
		$$ = new OptUniquePrimary();
		$$->case_idx_ = CASE4;
	}
  ;

opt_column_format:
	COLUMN_FORMAT column_format  {
		$$ = new OptColumnFormat();
		$$->case_idx_ = CASE0;
		$$->column_format_ = $2;
	}
   |	  {
		$$ = new OptColumnFormat();
		$$->case_idx_ = CASE1;
	}
  ;

column_format:
	FIXED  {
		$$ = new ColumnFormat();
		$$->case_idx_ = CASE0;
	}
   |	DYNAMIC  {
		$$ = new ColumnFormat();
		$$->case_idx_ = CASE1;
	}
   |	DEFAULT  {
		$$ = new ColumnFormat();
		$$->case_idx_ = CASE2;
	}
  ;

opt_storage:
	STORAGE storage  {
		$$ = new OptStorage();
		$$->case_idx_ = CASE0;
		$$->storage_ = $2;
	}
   |	  {
		$$ = new OptStorage();
		$$->case_idx_ = CASE1;
	}
  ;

storage:
	DISK  {
		$$ = new Storage();
		$$->case_idx_ = CASE0;
	}
   |	MEMORY  {
		$$ = new Storage();
		$$->case_idx_ = CASE1;
	}
  ;

opt_reference_definition:
	reference_definition  {
		$$ = new OptReferenceDefinition();
		$$->case_idx_ = CASE0;
		$$->reference_definition_ = $1;
	}
   |	  {
		$$ = new OptReferenceDefinition();
		$$->case_idx_ = CASE1;
	}
  ;

reference_definition:
	REFERENCES table_name OP_LP key_part_list OP_RP opt_match opt_on_delete opt_on_update  {
		$$ = new ReferenceDefinition();
		$$->case_idx_ = CASE0;
		$$->table_name_ = $2;
		$$->key_part_list_ = $4;
		$$->opt_match_ = $6;
		$$->opt_on_delete_ = $7;
		$$->opt_on_update_ = $8;
	}
  ;

opt_match:
	MATCH FULL  {
		$$ = new OptMatch();
		$$->case_idx_ = CASE0;
	}
   |	MATCH PARTIAL  {
		$$ = new OptMatch();
		$$->case_idx_ = CASE1;
	}
   |	MATCH SIMPLE  {
		$$ = new OptMatch();
		$$->case_idx_ = CASE2;
	}
   |	  {
		$$ = new OptMatch();
		$$->case_idx_ = CASE3;
	}
  ;

opt_on_delete:
	ON DELETE reference_option  {
		$$ = new OptOnDelete();
		$$->case_idx_ = CASE0;
		$$->reference_option_ = $3;
	}
   |	 %prec AS  {
		$$ = new OptOnDelete();
		$$->case_idx_ = CASE1;
	}
  ;

opt_on_update:
	ON UPDATE reference_option  {
		$$ = new OptOnUpdate();
		$$->case_idx_ = CASE0;
		$$->reference_option_ = $3;
	}
   |	 %prec AS  {
		$$ = new OptOnUpdate();
		$$->case_idx_ = CASE1;
	}
  ;

reference_option:
	RESTRICT  {
		$$ = new ReferenceOption();
		$$->case_idx_ = CASE0;
	}
   |	CASCADE  {
		$$ = new ReferenceOption();
		$$->case_idx_ = CASE1;
	}
   |	SET NULL  {
		$$ = new ReferenceOption();
		$$->case_idx_ = CASE2;
	}
   |	NO ACTION  {
		$$ = new ReferenceOption();
		$$->case_idx_ = CASE3;
	}
   |	SET DEFAULT  {
		$$ = new ReferenceOption();
		$$->case_idx_ = CASE4;
	}
  ;

opt_check_constraint_definition:
	check_constraint_definition  {
		$$ = new OptCheckConstraintDefinition();
		$$->case_idx_ = CASE0;
		$$->check_constraint_definition_ = $1;
	}
   |	  {
		$$ = new OptCheckConstraintDefinition();
		$$->case_idx_ = CASE1;
	}
  ;

check_constraint_definition:
	opt_constraint_symbol CHECK OP_LP expr OP_RP opt_enforced  {
		$$ = new CheckConstraintDefinition();
		$$->case_idx_ = CASE0;
		$$->opt_constraint_symbol_ = $1;
		$$->expr_ = $4;
		$$->opt_enforced_ = $6;
	}
  ;

opt_constraint_symbol:
	CONSTRAINT symbol  {
		$$ = new OptConstraintSymbol();
		$$->case_idx_ = CASE0;
		$$->symbol_ = $2;
	}
   |	CONSTRAINT  {
		$$ = new OptConstraintSymbol();
		$$->case_idx_ = CASE1;
	}
   |	  {
		$$ = new OptConstraintSymbol();
		$$->case_idx_ = CASE2;
	}
  ;

opt_enforced:
	ENFORCED  {
		$$ = new OptEnforced();
		$$->case_idx_ = CASE0;
	}
   |	NOT ENFORCED  {
		$$ = new OptEnforced();
		$$->case_idx_ = CASE1;
	}
   |	  {
		$$ = new OptEnforced();
		$$->case_idx_ = CASE2;
	}
  ;

column_def_list:
	column_def  {
		$$ = new ColumnDefList();
		$$->case_idx_ = CASE0;
		$$->column_def_ = $1;
	}
   |	column_def_list OP_COMMA column_def  {
		$$ = new ColumnDefList();
		$$->case_idx_ = CASE1;
		$$->column_def_list_ = $1;
		$$->column_def_ = $3;
	}
  ;

column_def:
	column_name column_definition  {
		$$ = new ColumnDef();
		$$->case_idx_ = CASE0;
		$$->column_name_ = $1;
		$$->column_definition_ = $2;
	}
  ;

opt_temp:
	TEMPORARY  {
		$$ = new OptTemp();
		$$->case_idx_ = CASE0;
	}
   |	  {
		$$ = new OptTemp();
		$$->case_idx_ = CASE1;
	}
  ;

opt_check_option:
	WITH CHECK OPTION  {
		$$ = new OptCheckOption();
		$$->case_idx_ = CASE0;
	}
   |	WITH CASCADED CHECK OPTION  {
		$$ = new OptCheckOption();
		$$->case_idx_ = CASE1;
	}
   |	WITH LOCAL CHECK OPTION  {
		$$ = new OptCheckOption();
		$$->case_idx_ = CASE2;
	}
   |	  {
		$$ = new OptCheckOption();
		$$->case_idx_ = CASE3;
	}
  ;

opt_column_name_list_p:
	OP_LP column_name_list OP_RP  {
		$$ = new OptColumnNameListP();
		$$->case_idx_ = CASE0;
		$$->column_name_list_ = $2;
	}
   |	 %prec JOIN  {
		$$ = new OptColumnNameListP();
		$$->case_idx_ = CASE1;
	}
  ;

assignment_list:
	assignment  {
		$$ = new AssignmentList();
		$$->case_idx_ = CASE0;
		$$->assignment_ = $1;
	}
   |	assignment OP_COMMA assignment_list  {
		$$ = new AssignmentList();
		$$->case_idx_ = CASE1;
		$$->assignment_ = $1;
		$$->assignment_list_ = $3;
	}
  ;

assignment:
	column_name OP_EQUAL value  {
		$$ = new Assignment();
		$$->case_idx_ = CASE0;
		$$->column_name_ = $1;
		$$->value_ = $3;
	}
  ;

opt_as_alias:
	as_alias  {
		$$ = new OptAsAlias();
		$$->case_idx_ = CASE0;
		$$->as_alias_ = $1;
	}
   |	 %prec JOIN  {
		$$ = new OptAsAlias();
		$$->case_idx_ = CASE1;
	}
  ;

expr:
	operand  {
		$$ = new Expr();
		$$->case_idx_ = CASE0;
		$$->operand_ = $1;
	}
   |	between_expr  {
		$$ = new Expr();
		$$->case_idx_ = CASE1;
		$$->between_expr_ = $1;
	}
   |	exists_expr  {
		$$ = new Expr();
		$$->case_idx_ = CASE2;
		$$->exists_expr_ = $1;
	}
   |	in_expr  {
		$$ = new Expr();
		$$->case_idx_ = CASE3;
		$$->in_expr_ = $1;
	}
   |	cast_expr  {
		$$ = new Expr();
		$$->case_idx_ = CASE4;
		$$->cast_expr_ = $1;
	}
   |	logic_expr  {
		$$ = new Expr();
		$$->case_idx_ = CASE5;
		$$->logic_expr_ = $1;
	}
  ;

operand:
	OP_LP expr_list OP_RP  {
		$$ = new Operand();
		$$->case_idx_ = CASE0;
		$$->expr_list_ = $2;
	}
   |	array_index  {
		$$ = new Operand();
		$$->case_idx_ = CASE1;
		$$->array_index_ = $1;
	}
   |	scalar_expr  {
		$$ = new Operand();
		$$->case_idx_ = CASE2;
		$$->scalar_expr_ = $1;
	}
   |	unary_expr  {
		$$ = new Operand();
		$$->case_idx_ = CASE3;
		$$->unary_expr_ = $1;
	}
   |	binary_expr  {
		$$ = new Operand();
		$$->case_idx_ = CASE4;
		$$->binary_expr_ = $1;
	}
   |	case_expr  {
		$$ = new Operand();
		$$->case_idx_ = CASE5;
		$$->case_expr_ = $1;
	}
   |	extract_expr  {
		$$ = new Operand();
		$$->case_idx_ = CASE6;
		$$->extract_expr_ = $1;
	}
   |	array_expr  {
		$$ = new Operand();
		$$->case_idx_ = CASE7;
		$$->array_expr_ = $1;
	}
   |	function_expr  {
		$$ = new Operand();
		$$->case_idx_ = CASE8;
		$$->function_expr_ = $1;
	}
   |	OP_LP select_no_parens OP_RP  {
		$$ = new Operand();
		$$->case_idx_ = CASE9;
		$$->select_no_parens_ = $2;
	}
  ;

cast_expr:
	CAST OP_LP expr AS data_type OP_RP  {
		$$ = new CastExpr();
		$$->case_idx_ = CASE0;
		$$->expr_ = $3;
		$$->data_type_ = $5;
	}
  ;

scalar_expr:
	expr_column_name  {
		$$ = new ScalarExpr();
		$$->case_idx_ = CASE0;
		$$->expr_column_name_ = $1;
	}
   |	literal  {
		$$ = new ScalarExpr();
		$$->case_idx_ = CASE1;
		$$->literal_ = $1;
	}
  ;

unary_expr:
	OP_SUB operand %prec OP_SUB  {
		$$ = new UnaryExpr();
		$$->case_idx_ = CASE0;
		$$->operand_ = $2;
	}
   |	NOT operand %prec NOT  {
		$$ = new UnaryExpr();
		$$->case_idx_ = CASE1;
		$$->operand_ = $2;
	}
   |	operand ISNULL %prec ISNULL  {
		$$ = new UnaryExpr();
		$$->case_idx_ = CASE2;
		$$->operand_ = $1;
	}
   |	operand IS NULL  {
		$$ = new UnaryExpr();
		$$->case_idx_ = CASE3;
		$$->operand_ = $1;
	}
   |	operand IS NOT NULL  {
		$$ = new UnaryExpr();
		$$->case_idx_ = CASE4;
		$$->operand_ = $1;
	}
   |	NULL  {
		$$ = new UnaryExpr();
		$$->case_idx_ = CASE5;
	}
  ;

binary_expr:
	comp_expr  {
		$$ = new BinaryExpr();
		$$->case_idx_ = CASE0;
		$$->comp_expr_ = $1;
	}
   |	operand binary_op operand %prec OP_ADD  {
		$$ = new BinaryExpr();
		$$->case_idx_ = CASE1;
		$$->operand_1_ = $1;
		$$->binary_op_ = $2;
		$$->operand_2_ = $3;
	}
   |	operand LIKE operand  {
		$$ = new BinaryExpr();
		$$->case_idx_ = CASE2;
		$$->operand_1_ = $1;
		$$->operand_2_ = $3;
	}
   |	operand NOT LIKE operand  {
		$$ = new BinaryExpr();
		$$->case_idx_ = CASE3;
		$$->operand_1_ = $1;
		$$->operand_2_ = $4;
	}
  ;

logic_expr:
	expr AND expr  {
		$$ = new LogicExpr();
		$$->case_idx_ = CASE0;
		$$->expr_1_ = $1;
		$$->expr_2_ = $3;
	}
   |	expr OR expr  {
		$$ = new LogicExpr();
		$$->case_idx_ = CASE1;
		$$->expr_1_ = $1;
		$$->expr_2_ = $3;
	}
  ;

in_expr:
	operand opt_not IN OP_LP select_no_parens OP_RP  {
		$$ = new InExpr();
		$$->case_idx_ = CASE0;
		$$->operand_ = $1;
		$$->opt_not_ = $2;
		$$->select_no_parens_ = $5;
	}
   |	operand opt_not IN OP_LP expr_list OP_RP  {
		$$ = new InExpr();
		$$->case_idx_ = CASE1;
		$$->operand_ = $1;
		$$->opt_not_ = $2;
		$$->expr_list_ = $5;
	}
   |	operand opt_not IN table_name  {
		$$ = new InExpr();
		$$->case_idx_ = CASE2;
		$$->operand_ = $1;
		$$->opt_not_ = $2;
		$$->table_name_ = $4;
	}
  ;

case_expr:
	CASE expr case_list END  {
		$$ = new CaseExpr();
		$$->case_idx_ = CASE0;
		$$->expr_1_ = $2;
		$$->case_list_ = $3;
	}
   |	CASE case_list END  {
		$$ = new CaseExpr();
		$$->case_idx_ = CASE1;
		$$->case_list_ = $2;
	}
   |	CASE expr case_list ELSE expr END  {
		$$ = new CaseExpr();
		$$->case_idx_ = CASE2;
		$$->expr_1_ = $2;
		$$->case_list_ = $3;
		$$->expr_2_ = $5;
	}
   |	CASE case_list ELSE expr END  {
		$$ = new CaseExpr();
		$$->case_idx_ = CASE3;
		$$->case_list_ = $2;
		$$->expr_1_ = $4;
	}
  ;

between_expr:
	operand BETWEEN operand AND operand %prec BETWEEN  {
		$$ = new BetweenExpr();
		$$->case_idx_ = CASE0;
		$$->operand_1_ = $1;
		$$->operand_2_ = $3;
		$$->operand_3_ = $5;
	}
   |	operand NOT BETWEEN operand AND operand %prec NOT  {
		$$ = new BetweenExpr();
		$$->case_idx_ = CASE1;
		$$->operand_1_ = $1;
		$$->operand_2_ = $4;
		$$->operand_3_ = $6;
	}
  ;

exists_expr:
	opt_not EXISTS OP_LP select_no_parens OP_RP  {
		$$ = new ExistsExpr();
		$$->case_idx_ = CASE0;
		$$->opt_not_ = $1;
		$$->select_no_parens_ = $4;
	}
  ;

function_expr:
	function_name OP_LP OP_RP opt_over_clause  {
		$$ = new FunctionExpr();
		$$->case_idx_ = CASE0;
		$$->function_name_ = $1;
		$$->opt_over_clause_ = $4;
	}
   |	function_name OP_LP opt_distinct expr_list OP_RP opt_over_clause  {
		$$ = new FunctionExpr();
		$$->case_idx_ = CASE1;
		$$->function_name_ = $1;
		$$->opt_distinct_ = $3;
		$$->expr_list_ = $4;
		$$->opt_over_clause_ = $6;
	}
  ;

opt_distinct:
	DISTINCT  {
		$$ = new OptDistinct();
		$$->case_idx_ = CASE0;
	}
   |	  {
		$$ = new OptDistinct();
		$$->case_idx_ = CASE1;
	}
  ;

opt_over_clause:
	OVER OP_LP window OP_RP  {
		$$ = new OptOverClause();
		$$->case_idx_ = CASE0;
		$$->window_ = $3;
	}
   |	OVER window_name  {
		$$ = new OptOverClause();
		$$->case_idx_ = CASE1;
		$$->window_name_ = $2;
	}
   |	  {
		$$ = new OptOverClause();
		$$->case_idx_ = CASE2;
	}
  ;

case_list:
	case_clause  {
		$$ = new CaseList();
		$$->case_idx_ = CASE0;
		$$->case_clause_ = $1;
	}
   |	case_clause case_list  {
		$$ = new CaseList();
		$$->case_idx_ = CASE1;
		$$->case_clause_ = $1;
		$$->case_list_ = $2;
	}
  ;

case_clause:
	WHEN expr THEN expr  {
		$$ = new CaseClause();
		$$->case_idx_ = CASE0;
		$$->expr_1_ = $2;
		$$->expr_2_ = $4;
	}
  ;

comp_expr:
	operand OP_EQUAL operand  {
		$$ = new CompExpr();
		$$->case_idx_ = CASE0;
		$$->operand_1_ = $1;
		$$->operand_2_ = $3;
	}
   |	operand OP_NOTEQUAL operand  {
		$$ = new CompExpr();
		$$->case_idx_ = CASE1;
		$$->operand_1_ = $1;
		$$->operand_2_ = $3;
	}
   |	operand OP_GREATERTHAN operand  {
		$$ = new CompExpr();
		$$->case_idx_ = CASE2;
		$$->operand_1_ = $1;
		$$->operand_2_ = $3;
	}
   |	operand OP_LESSTHAN operand  {
		$$ = new CompExpr();
		$$->case_idx_ = CASE3;
		$$->operand_1_ = $1;
		$$->operand_2_ = $3;
	}
   |	operand OP_LESSEQ operand  {
		$$ = new CompExpr();
		$$->case_idx_ = CASE4;
		$$->operand_1_ = $1;
		$$->operand_2_ = $3;
	}
   |	operand OP_GREATEREQ operand  {
		$$ = new CompExpr();
		$$->case_idx_ = CASE5;
		$$->operand_1_ = $1;
		$$->operand_2_ = $3;
	}
  ;

extract_expr:
	EXTRACT OP_LP datetime_field FROM expr OP_RP  {
		$$ = new ExtractExpr();
		$$->case_idx_ = CASE0;
		$$->datetime_field_ = $3;
		$$->expr_ = $5;
	}
  ;

datetime_field:
	SECOND  {
		$$ = new DatetimeField();
		$$->case_idx_ = CASE0;
	}
   |	MINUTE  {
		$$ = new DatetimeField();
		$$->case_idx_ = CASE1;
	}
   |	HOUR  {
		$$ = new DatetimeField();
		$$->case_idx_ = CASE2;
	}
   |	DAY  {
		$$ = new DatetimeField();
		$$->case_idx_ = CASE3;
	}
   |	MONTH  {
		$$ = new DatetimeField();
		$$->case_idx_ = CASE4;
	}
   |	YEAR  {
		$$ = new DatetimeField();
		$$->case_idx_ = CASE5;
	}
  ;

array_expr:
	ARRAY OP_LBRACKET expr_list OP_RBRACKET  {
		$$ = new ArrayExpr();
		$$->case_idx_ = CASE0;
		$$->expr_list_ = $3;
	}
  ;

array_index:
	operand OP_LBRACKET int_literal OP_RBRACKET  {
		$$ = new ArrayIndex();
		$$->case_idx_ = CASE0;
		$$->operand_ = $1;
		$$->int_literal_ = $3;
	}
  ;

literal:
	string_literal  {
		$$ = new Literal();
		$$->case_idx_ = CASE0;
		$$->string_literal_ = $1;
	}
   |	bool_literal  {
		$$ = new Literal();
		$$->case_idx_ = CASE1;
		$$->bool_literal_ = $1;
	}
   |	num_literal  {
		$$ = new Literal();
		$$->case_idx_ = CASE2;
		$$->num_literal_ = $1;
	}
  ;

string_literal:
	STRINGLITERAL  {
		$$ = new StringLiteral();
		$$->case_idx_ = CASE0;
		$$->string_val_ = $1;
		free($1);
	}
  ;

bool_literal:
	TRUE  {
		$$ = new BoolLiteral();
		$$->case_idx_ = CASE0;
	}
   |	FALSE  {
		$$ = new BoolLiteral();
		$$->case_idx_ = CASE1;
	}
  ;

num_literal:
	int_literal  {
		$$ = new NumLiteral();
		$$->case_idx_ = CASE0;
		$$->int_literal_ = $1;
	}
   |	float_literal  {
		$$ = new NumLiteral();
		$$->case_idx_ = CASE1;
		$$->float_literal_ = $1;
	}
  ;

int_literal:
	INTLITERAL  {
		$$ = new IntLiteral();
		$$->case_idx_ = CASE0;
		$$->int_val_ = $1;
	}
  ;

float_literal:
	FLOATLITERAL  {
		$$ = new FloatLiteral();
		$$->case_idx_ = CASE0;
		$$->float_val_ = $1;
	}
  ;

opt_column:
	COLUMN  {
		$$ = new OptColumn();
		$$->case_idx_ = CASE0;
	}
   |	  {
		$$ = new OptColumn();
		$$->case_idx_ = CASE1;
	}
  ;

trigger_body:
	drop_stmt  {
		$$ = new TriggerBody();
		$$->case_idx_ = CASE0;
		$$->drop_stmt_ = $1;
	}
   |	update_stmt  {
		$$ = new TriggerBody();
		$$->case_idx_ = CASE1;
		$$->update_stmt_ = $1;
	}
   |	insert_stmt  {
		$$ = new TriggerBody();
		$$->case_idx_ = CASE2;
		$$->insert_stmt_ = $1;
	}
   |	alter_stmt  {
		$$ = new TriggerBody();
		$$->case_idx_ = CASE3;
		$$->alter_stmt_ = $1;
	}
  ;

opt_if_not_exist:
	IF NOT EXISTS  {
		$$ = new OptIfNotExist();
		$$->case_idx_ = CASE0;
	}
   |	  {
		$$ = new OptIfNotExist();
		$$->case_idx_ = CASE1;
	}
  ;

opt_if_exist:
	IF EXISTS  {
		$$ = new OptIfExist();
		$$->case_idx_ = CASE0;
	}
   |	  {
		$$ = new OptIfExist();
		$$->case_idx_ = CASE1;
	}
  ;

identifier:
	IDENTIFIER  {
		$$ = new Identifier();
		$$->case_idx_ = CASE0;
		$$->string_val_ = $1;
		free($1);
	}
  ;

as_alias:
	AS identifier  {
		$$ = new AsAlias();
		$$->case_idx_ = CASE0;
		$$->identifier_ = $2;
	}
  ;

table_name:
	identifier  {
		$$ = new TableName();
		$$->case_idx_ = CASE0;
		$$->identifier_ = $1;
	}
  ;

index_name:
	identifier  {
		$$ = new IndexName();
		$$->case_idx_ = CASE0;
		$$->identifier_ = $1;
	}
  ;

column_name:
	identifier  {
		$$ = new ColumnName();
		$$->case_idx_ = CASE0;
		$$->identifier_ = $1;
	}
  ;

expr_column_name:
	column_name  {
		$$ = new ExprColumnName();
		$$->case_idx_ = CASE0;
		$$->column_name_ = $1;
	}
   |	table_name OP_POINT column_name  {
		$$ = new ExprColumnName();
		$$->case_idx_ = CASE1;
		$$->table_name_ = $1;
		$$->column_name_ = $3;
	}
   |	OP_MUL  {
		$$ = new ExprColumnName();
		$$->case_idx_ = CASE2;
	}
   |	table_name OP_POINT OP_MUL  {
		$$ = new ExprColumnName();
		$$->case_idx_ = CASE3;
		$$->table_name_ = $1;
	}
  ;

opt_index_keyword:
	UNIQUE  {
		$$ = new OptIndexKeyword();
		$$->case_idx_ = CASE0;
	}
   |	FULLTEXT  {
		$$ = new OptIndexKeyword();
		$$->case_idx_ = CASE1;
	}
   |	SPATIAL  {
		$$ = new OptIndexKeyword();
		$$->case_idx_ = CASE2;
	}
   |	  {
		$$ = new OptIndexKeyword();
		$$->case_idx_ = CASE3;
	}
  ;

view_name:
	identifier  {
		$$ = new ViewName();
		$$->case_idx_ = CASE0;
		$$->identifier_ = $1;
	}
  ;

function_name:
	identifier  {
		$$ = new FunctionName();
		$$->case_idx_ = CASE0;
		$$->identifier_ = $1;
	}
  ;

binary_op:
	OP_ADD  {
		$$ = new BinaryOp();
		$$->case_idx_ = CASE0;
	}
   |	OP_SUB  {
		$$ = new BinaryOp();
		$$->case_idx_ = CASE1;
	}
   |	OP_DIVIDE  {
		$$ = new BinaryOp();
		$$->case_idx_ = CASE2;
	}
   |	OP_MOD  {
		$$ = new BinaryOp();
		$$->case_idx_ = CASE3;
	}
   |	OP_MUL  {
		$$ = new BinaryOp();
		$$->case_idx_ = CASE4;
	}
   |	OP_XOR  {
		$$ = new BinaryOp();
		$$->case_idx_ = CASE5;
	}
  ;

opt_not:
	NOT  {
		$$ = new OptNot();
		$$->case_idx_ = CASE0;
	}
   |	  {
		$$ = new OptNot();
		$$->case_idx_ = CASE1;
	}
  ;

symbol:
	identifier  {
		$$ = new Symbol();
		$$->case_idx_ = CASE0;
		$$->identifier_ = $1;
	}
  ;

data_type:
	numeric_type  {
		$$ = new DataType();
		$$->case_idx_ = CASE0;
		$$->numeric_type_ = $1;
	}
   |	character_type  {
		$$ = new DataType();
		$$->case_idx_ = CASE1;
		$$->character_type_ = $1;
	}
  ;

character_type:
	character_conflicta opt_length  {
		$$ = new CharacterType();
		$$->case_idx_ = CASE0;
		$$->character_conflicta_ = $1;
		$$->opt_length_ = $2;
	}
   |	SET  {
		$$ = new CharacterType();
		$$->case_idx_ = CASE1;
	}
   |	ENUM  {
		$$ = new CharacterType();
		$$->case_idx_ = CASE2;
	}
   |	BINARY  {
		$$ = new CharacterType();
		$$->case_idx_ = CASE3;
	}
  ;

opt_length:
	OP_LP int_literal OP_RP  {
		$$ = new OptLength();
		$$->case_idx_ = CASE0;
		$$->int_literal_ = $2;
	}
   |	 %prec UMINUS  {
		$$ = new OptLength();
		$$->case_idx_ = CASE1;
	}
  ;

character_conflicta:
	CHARACTER  {
		$$ = new CharacterConflicta();
		$$->case_idx_ = CASE0;
	}
   |	CHAR  {
		$$ = new CharacterConflicta();
		$$->case_idx_ = CASE1;
	}
   |	VARCHAR  {
		$$ = new CharacterConflicta();
		$$->case_idx_ = CASE2;
	}
   |	TEXT  {
		$$ = new CharacterConflicta();
		$$->case_idx_ = CASE3;
	}
   |	TINYTEXT  {
		$$ = new CharacterConflicta();
		$$->case_idx_ = CASE4;
	}
   |	MEDIUMTEXT  {
		$$ = new CharacterConflicta();
		$$->case_idx_ = CASE5;
	}
   |	LONGTEXT  {
		$$ = new CharacterConflicta();
		$$->case_idx_ = CASE6;
	}
   |	NATIONAL CHARACTER  {
		$$ = new CharacterConflicta();
		$$->case_idx_ = CASE7;
	}
   |	NATIONAL CHAR  {
		$$ = new CharacterConflicta();
		$$->case_idx_ = CASE8;
	}
   |	NCHAR  {
		$$ = new CharacterConflicta();
		$$->case_idx_ = CASE9;
	}
  ;

numeric_type:
	INT  {
		$$ = new NumericType();
		$$->case_idx_ = CASE0;
	}
   |	INTEGER  {
		$$ = new NumericType();
		$$->case_idx_ = CASE1;
	}
   |	SMALLINT  {
		$$ = new NumericType();
		$$->case_idx_ = CASE2;
	}
   |	BIGINT  {
		$$ = new NumericType();
		$$->case_idx_ = CASE3;
	}
   |	REAL  {
		$$ = new NumericType();
		$$->case_idx_ = CASE4;
	}
   |	FLOAT  {
		$$ = new NumericType();
		$$->case_idx_ = CASE5;
	}
   |	FIXED  {
		$$ = new NumericType();
		$$->case_idx_ = CASE6;
	}
   |	DOUBLE  {
		$$ = new NumericType();
		$$->case_idx_ = CASE7;
	}
   |	DOUBLE PRECISION  {
		$$ = new NumericType();
		$$->case_idx_ = CASE8;
	}
   |	DECIMAL  {
		$$ = new NumericType();
		$$->case_idx_ = CASE9;
	}
   |	DEC  {
		$$ = new NumericType();
		$$->case_idx_ = CASE10;
	}
   |	NUMERIC  {
		$$ = new NumericType();
		$$->case_idx_ = CASE11;
	}
   |	BOOLEAN  {
		$$ = new NumericType();
		$$->case_idx_ = CASE12;
	}
  ;

%%
