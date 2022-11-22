/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_FF_BISON_PARSER_H_INCLUDED
# define YY_FF_BISON_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef FF_DEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define FF_DEBUG 1
#  else
#   define FF_DEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define FF_DEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined FF_DEBUG */
#if FF_DEBUG
extern int ff_debug;
#endif
/* "%code requires" blocks.  */
#line 8 "bison.y" /* yacc.c:1909  */

#include "../include/ast.h"
#include "parser_typedef.h"

#line 57 "bison_parser.h" /* yacc.c:1909  */

/* Token type.  */
#ifndef FF_TOKENTYPE
# define FF_TOKENTYPE
  enum ff_tokentype
  {
    SQL_OP_SEMI = 258,
    SQL_ALTER = 259,
    SQL_TABLE = 260,
    SQL_UMINUS = 261,
    SQL_OP_LP = 262,
    SQL_OP_RP = 263,
    SQL_SELECT = 264,
    SQL_UNION = 265,
    SQL_WINDOW = 266,
    SQL_OP_COMMA = 267,
    SQL_AS = 268,
    SQL_PARTITION = 269,
    SQL_BY = 270,
    SQL_BETWEEN = 271,
    SQL_AND = 272,
    SQL_RANGE = 273,
    SQL_ROWS = 274,
    SQL_GROUPS = 275,
    SQL_UNBOUNDED = 276,
    SQL_PRECEDING = 277,
    SQL_FOLLOWING = 278,
    SQL_CURRENT = 279,
    SQL_ROW = 280,
    SQL_GROUP = 281,
    SQL_HAVING = 282,
    SQL_WHERE = 283,
    SQL_FROM = 284,
    SQL_INDEXED = 285,
    SQL_NOT = 286,
    SQL_ON = 287,
    SQL_USING = 288,
    SQL_JOIN = 289,
    SQL_NATURAL = 290,
    SQL_LEFT = 291,
    SQL_OUTER = 292,
    SQL_INNER = 293,
    SQL_CROSS = 294,
    SQL_LIMIT = 295,
    SQL_OFFSET = 296,
    SQL_ORDER = 297,
    SQL_ASC = 298,
    SQL_DESC = 299,
    SQL_WITH = 300,
    SQL_RECURSIVE = 301,
    SQL_ALL = 302,
    SQL_DISTINCT = 303,
    SQL_CREATE = 304,
    SQL_LIKE = 305,
    SQL_BTREE = 306,
    SQL_HASH = 307,
    SQL_INDEX = 308,
    SQL_TRIGGER = 309,
    SQL_FOR = 310,
    SQL_EACH = 311,
    SQL_VIEW = 312,
    SQL_OR = 313,
    SQL_REPLACE = 314,
    SQL_INSERT_METHOD = 315,
    SQL_ROW_FORMAT = 316,
    SQL_NO = 317,
    SQL_FIRST = 318,
    SQL_LAST = 319,
    SQL_DEFAULT = 320,
    SQL_DYNAMIC = 321,
    SQL_FIXED = 322,
    SQL_COMPRESSED = 323,
    SQL_REDUNDANT = 324,
    SQL_COMPACT = 325,
    SQL_IGNORE = 326,
    SQL_ALGORITHM = 327,
    SQL_OP_EQUAL = 328,
    SQL_UNDEFINED = 329,
    SQL_MERGE = 330,
    SQL_TEMPTABLE = 331,
    SQL_SQL = 332,
    SQL_SECURITY = 333,
    SQL_DEFINER = 334,
    SQL_INVOKER = 335,
    SQL_INPLACE = 336,
    SQL_COPY = 337,
    SQL_LOCK = 338,
    SQL_NONE = 339,
    SQL_SHARED = 340,
    SQL_EXCLUSIVE = 341,
    SQL_DELETE = 342,
    SQL_INSERT = 343,
    SQL_UPDATE = 344,
    SQL_BEFORE = 345,
    SQL_AFTER = 346,
    SQL_DROP = 347,
    SQL_RESTRICT = 348,
    SQL_CASCADE = 349,
    SQL_SET = 350,
    SQL_LOW_PRIORITY = 351,
    SQL_DELAYED = 352,
    SQL_HIGH_PRIORITY = 353,
    SQL_INTO = 354,
    SQL_VALUE = 355,
    SQL_VALUES = 356,
    SQL_DUPLICATE = 357,
    SQL_KEY = 358,
    SQL_RENAME = 359,
    SQL_TO = 360,
    SQL_COLUMN = 361,
    SQL_ADD = 362,
    SQL_PRIMARY = 363,
    SQL_FORCE = 364,
    SQL_DISABLE = 365,
    SQL_KEYS = 366,
    SQL_ENABLE = 367,
    SQL_VALIDATION = 368,
    SQL_WITHOUT = 369,
    SQL_UNIQUE = 370,
    SQL_FOREIGN = 371,
    SQL_FULLTEXT = 372,
    SQL_SPATIAL = 373,
    SQL_NULL = 374,
    SQL_VISIBLE = 375,
    SQL_INVISIBLE = 376,
    SQL_AUTO_INCREMENT = 377,
    SQL_COLUMN_FORMAT = 378,
    SQL_STORAGE = 379,
    SQL_DISK = 380,
    SQL_MEMORY = 381,
    SQL_REFERENCES = 382,
    SQL_MATCH = 383,
    SQL_FULL = 384,
    SQL_PARTIAL = 385,
    SQL_SIMPLE = 386,
    SQL_ACTION = 387,
    SQL_CHECK = 388,
    SQL_CONSTRAINT = 389,
    SQL_ENFORCED = 390,
    SQL_TEMPORARY = 391,
    SQL_OPTION = 392,
    SQL_CASCADED = 393,
    SQL_LOCAL = 394,
    SQL_CAST = 395,
    SQL_OP_SUB = 396,
    SQL_ISNULL = 397,
    SQL_IS = 398,
    SQL_OP_ADD = 399,
    SQL_IN = 400,
    SQL_CASE = 401,
    SQL_END = 402,
    SQL_ELSE = 403,
    SQL_EXISTS = 404,
    SQL_OVER = 405,
    SQL_WHEN = 406,
    SQL_THEN = 407,
    SQL_OP_NOTEQUAL = 408,
    SQL_OP_GREATERTHAN = 409,
    SQL_OP_LESSTHAN = 410,
    SQL_OP_LESSEQ = 411,
    SQL_OP_GREATEREQ = 412,
    SQL_EXTRACT = 413,
    SQL_SECOND = 414,
    SQL_MINUTE = 415,
    SQL_HOUR = 416,
    SQL_DAY = 417,
    SQL_MONTH = 418,
    SQL_YEAR = 419,
    SQL_ARRAY = 420,
    SQL_OP_LBRACKET = 421,
    SQL_OP_RBRACKET = 422,
    SQL_TRUE = 423,
    SQL_FALSE = 424,
    SQL_IF = 425,
    SQL_OP_POINT = 426,
    SQL_OP_MUL = 427,
    SQL_OP_DIVIDE = 428,
    SQL_OP_MOD = 429,
    SQL_OP_XOR = 430,
    SQL_ENUM = 431,
    SQL_BINARY = 432,
    SQL_CHARACTER = 433,
    SQL_CHAR = 434,
    SQL_VARCHAR = 435,
    SQL_TEXT = 436,
    SQL_TINYTEXT = 437,
    SQL_MEDIUMTEXT = 438,
    SQL_LONGTEXT = 439,
    SQL_NATIONAL = 440,
    SQL_NCHAR = 441,
    SQL_INT = 442,
    SQL_INTEGER = 443,
    SQL_SMALLINT = 444,
    SQL_BIGINT = 445,
    SQL_REAL = 446,
    SQL_FLOAT = 447,
    SQL_DOUBLE = 448,
    SQL_PRECISION = 449,
    SQL_DECIMAL = 450,
    SQL_DEC = 451,
    SQL_NUMERIC = 452,
    SQL_BOOLEAN = 453,
    SQL_INTLITERAL = 454,
    SQL_FLOATLITERAL = 455,
    SQL_IDENTIFIER = 456,
    SQL_STRINGLITERAL = 457
  };
#endif

/* Value type.  */
#if ! defined FF_STYPE && ! defined FF_STYPE_IS_DECLARED
#line 21 "bison.y" /* yacc.c:1909  */
union FF_STYPE
{
#line 21 "bison.y" /* yacc.c:1909  */

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

#line 468 "bison_parser.h" /* yacc.c:1909  */
};
#line 21 "bison.y" /* yacc.c:1909  */
typedef union FF_STYPE FF_STYPE;
# define FF_STYPE_IS_TRIVIAL 1
# define FF_STYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined FF_LTYPE && ! defined FF_LTYPE_IS_DECLARED
typedef struct FF_LTYPE FF_LTYPE;
struct FF_LTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define FF_LTYPE_IS_DECLARED 1
# define FF_LTYPE_IS_TRIVIAL 1
#endif



int ff_parse (Program* result, yyscan_t scanner);

#endif /* !YY_FF_BISON_PARSER_H_INCLUDED  */
