/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         FF_STYPE
#define YYLTYPE         FF_LTYPE
/* Substitute the variable and function names.  */
#define yyparse         ff_parse
#define yylex           ff_lex
#define yyerror         ff_error
#define yydebug         ff_debug
#define yynerrs         ff_nerrs


/* Copy the first part of user declarations.  */
#line 1 "bison.y" /* yacc.c:339  */

#include "bison_parser.h"
#include "flex_lexer.h"
#include <stdio.h>
#include <string.h>
int yyerror(YYLTYPE* llocp, Program * result, yyscan_t scanner, const char *msg) { return 0; }

#line 82 "bison_parser.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "bison_parser.h".  */
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
#line 8 "bison.y" /* yacc.c:355  */

#include "../include/ast.h"
#include "parser_typedef.h"

#line 125 "bison_parser.cpp" /* yacc.c:355  */

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
#line 21 "bison.y" /* yacc.c:355  */
union FF_STYPE
{
#line 21 "bison.y" /* yacc.c:355  */

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

#line 536 "bison_parser.cpp" /* yacc.c:355  */
};
#line 21 "bison.y" /* yacc.c:355  */
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

/* Copy the second part of user declarations.  */

#line 566 "bison_parser.cpp" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined FF_LTYPE_IS_TRIVIAL && FF_LTYPE_IS_TRIVIAL \
             && defined FF_STYPE_IS_TRIVIAL && FF_STYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  56
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1030

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  203
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  188
/* YYNRULES -- Number of rules.  */
#define YYNRULES  459
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  776

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   457

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202
};

#if FF_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   475,   475,   484,   490,   498,   503,   508,   513,   518,
     523,   531,   536,   541,   546,   554,   559,   564,   569,   577,
     586,   591,   599,   604,   612,   623,   628,   638,   651,   658,
     663,   670,   678,   683,   690,   698,   703,   712,   721,   729,
     740,   745,   752,   758,   765,   772,   776,   780,   787,   792,
     799,   804,   811,   816,   821,   828,   833,   840,   846,   853,
     858,   865,   870,   877,   885,   893,   903,   912,   924,   929,
     933,   940,   945,   952,   957,   964,   969,   978,   984,   991,
     995,   999,  1007,  1011,  1015,  1019,  1023,  1030,  1037,  1046,
    1051,  1058,  1063,  1069,  1078,  1083,  1090,  1095,  1102,  1107,
    1116,  1125,  1129,  1133,  1140,  1145,  1150,  1157,  1162,  1171,
    1180,  1189,  1193,  1197,  1204,  1213,  1225,  1236,  1240,  1247,
    1252,  1260,  1265,  1272,  1276,  1283,  1297,  1309,  1319,  1332,
    1337,  1344,  1349,  1359,  1365,  1374,  1378,  1382,  1389,  1393,
    1397,  1401,  1405,  1409,  1416,  1420,  1427,  1431,  1435,  1442,
    1446,  1450,  1454,  1461,  1465,  1469,  1476,  1481,  1486,  1493,
    1498,  1503,  1510,  1515,  1520,  1528,  1533,  1538,  1543,  1551,
    1555,  1562,  1566,  1570,  1577,  1585,  1589,  1596,  1606,  1617,
    1623,  1631,  1635,  1639,  1646,  1655,  1665,  1678,  1689,  1701,
    1716,  1720,  1724,  1728,  1735,  1739,  1746,  1750,  1757,  1761,
    1768,  1773,  1782,  1787,  1796,  1801,  1808,  1814,  1821,  1829,
    1834,  1841,  1846,  1855,  1863,  1868,  1875,  1880,  1889,  1898,
    1913,  1917,  1924,  1929,  1935,  1941,  1947,  1952,  1961,  1965,
    1969,  1973,  1977,  1982,  1986,  1993,  1998,  2005,  2010,  2019,
    2025,  2034,  2043,  2051,  2061,  2069,  2077,  2093,  2097,  2104,
    2109,  2116,  2120,  2127,  2132,  2139,  2143,  2147,  2154,  2159,
    2166,  2170,  2177,  2181,  2188,  2192,  2196,  2200,  2204,  2211,
    2216,  2223,  2227,  2231,  2238,  2243,  2250,  2254,  2261,  2266,
    2273,  2285,  2289,  2293,  2297,  2304,  2309,  2316,  2321,  2328,
    2332,  2336,  2340,  2344,  2351,  2356,  2363,  2373,  2378,  2382,
    2389,  2393,  2397,  2404,  2409,  2418,  2427,  2431,  2438,  2442,
    2446,  2450,  2457,  2462,  2469,  2474,  2483,  2492,  2497,  2504,
    2509,  2514,  2519,  2524,  2529,  2537,  2542,  2547,  2552,  2557,
    2562,  2567,  2572,  2577,  2582,  2590,  2599,  2604,  2612,  2617,
    2622,  2627,  2632,  2637,  2644,  2649,  2656,  2662,  2671,  2677,
    2686,  2693,  2700,  2710,  2716,  2721,  2728,  2737,  2744,  2754,
    2763,  2769,  2780,  2784,  2791,  2796,  2801,  2808,  2813,  2822,
    2831,  2837,  2843,  2849,  2855,  2861,  2870,  2879,  2883,  2887,
    2891,  2895,  2899,  2906,  2914,  2923,  2928,  2933,  2941,  2950,
    2954,  2961,  2966,  2974,  2982,  2990,  2994,  3001,  3006,  3011,
    3016,  3024,  3028,  3035,  3039,  3046,  3055,  3063,  3071,  3079,
    3087,  3092,  3098,  3102,  3110,  3114,  3118,  3122,  3129,  3137,
    3145,  3149,  3153,  3157,  3161,  3165,  3172,  3176,  3183,  3191,
    3196,  3204,  3210,  3214,  3218,  3225,  3230,  3237,  3241,  3245,
    3249,  3253,  3257,  3261,  3265,  3269,  3273,  3280,  3284,  3288,
    3292,  3296,  3300,  3304,  3308,  3312,  3316,  3320,  3324,  3328
};
#endif

#if FF_DEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "OP_SEMI", "ALTER", "TABLE", "UMINUS",
  "OP_LP", "OP_RP", "SELECT", "UNION", "WINDOW", "OP_COMMA", "AS",
  "PARTITION", "BY", "BETWEEN", "AND", "RANGE", "ROWS", "GROUPS",
  "UNBOUNDED", "PRECEDING", "FOLLOWING", "CURRENT", "ROW", "GROUP",
  "HAVING", "WHERE", "FROM", "INDEXED", "NOT", "ON", "USING", "JOIN",
  "NATURAL", "LEFT", "OUTER", "INNER", "CROSS", "LIMIT", "OFFSET", "ORDER",
  "ASC", "DESC", "WITH", "RECURSIVE", "ALL", "DISTINCT", "CREATE", "LIKE",
  "BTREE", "HASH", "INDEX", "TRIGGER", "FOR", "EACH", "VIEW", "OR",
  "REPLACE", "INSERT_METHOD", "ROW_FORMAT", "NO", "FIRST", "LAST",
  "DEFAULT", "DYNAMIC", "FIXED", "COMPRESSED", "REDUNDANT", "COMPACT",
  "IGNORE", "ALGORITHM", "OP_EQUAL", "UNDEFINED", "MERGE", "TEMPTABLE",
  "SQL", "SECURITY", "DEFINER", "INVOKER", "INPLACE", "COPY", "LOCK",
  "NONE", "SHARED", "EXCLUSIVE", "DELETE", "INSERT", "UPDATE", "BEFORE",
  "AFTER", "DROP", "RESTRICT", "CASCADE", "SET", "LOW_PRIORITY", "DELAYED",
  "HIGH_PRIORITY", "INTO", "VALUE", "VALUES", "DUPLICATE", "KEY", "RENAME",
  "TO", "COLUMN", "ADD", "PRIMARY", "FORCE", "DISABLE", "KEYS", "ENABLE",
  "VALIDATION", "WITHOUT", "UNIQUE", "FOREIGN", "FULLTEXT", "SPATIAL",
  "NULL", "VISIBLE", "INVISIBLE", "AUTO_INCREMENT", "COLUMN_FORMAT",
  "STORAGE", "DISK", "MEMORY", "REFERENCES", "MATCH", "FULL", "PARTIAL",
  "SIMPLE", "ACTION", "CHECK", "CONSTRAINT", "ENFORCED", "TEMPORARY",
  "OPTION", "CASCADED", "LOCAL", "CAST", "OP_SUB", "ISNULL", "IS",
  "OP_ADD", "IN", "CASE", "END", "ELSE", "EXISTS", "OVER", "WHEN", "THEN",
  "OP_NOTEQUAL", "OP_GREATERTHAN", "OP_LESSTHAN", "OP_LESSEQ",
  "OP_GREATEREQ", "EXTRACT", "SECOND", "MINUTE", "HOUR", "DAY", "MONTH",
  "YEAR", "ARRAY", "OP_LBRACKET", "OP_RBRACKET", "TRUE", "FALSE", "IF",
  "OP_POINT", "OP_MUL", "OP_DIVIDE", "OP_MOD", "OP_XOR", "ENUM", "BINARY",
  "CHARACTER", "CHAR", "VARCHAR", "TEXT", "TINYTEXT", "MEDIUMTEXT",
  "LONGTEXT", "NATIONAL", "NCHAR", "INT", "INTEGER", "SMALLINT", "BIGINT",
  "REAL", "FLOAT", "DOUBLE", "PRECISION", "DECIMAL", "DEC", "NUMERIC",
  "BOOLEAN", "INTLITERAL", "FLOATLITERAL", "IDENTIFIER", "STRINGLITERAL",
  "$accept", "program", "stmtlist", "stmt", "create_stmt", "drop_stmt",
  "alter_stmt", "select_stmt", "select_with_parens", "select_no_parens",
  "select_clause_list", "select_clause", "combine_clause",
  "opt_from_clause", "select_target", "opt_window_clause", "window_clause",
  "window_def_list", "window_def", "window_name", "window",
  "opt_partition", "opt_frame_clause", "range_or_rows",
  "frame_bound_start", "frame_bound_end", "frame_bound",
  "opt_exist_window_name", "opt_group_clause", "opt_having_clause",
  "opt_where_clause", "where_clause", "from_clause", "table_ref",
  "opt_index", "opt_on", "opt_using", "column_name_list",
  "opt_table_prefix", "join_op", "opt_join_type", "expr_list",
  "opt_limit_clause", "limit_clause", "opt_limit_row_count",
  "opt_order_clause", "order_item_list", "order_item",
  "opt_order_behavior", "opt_with_clause", "cte_table_list", "cte_table",
  "cte_table_name", "opt_all_or_distinct", "create_table_stmt", "opt_as",
  "like_field", "opt_index_type", "index_type", "create_index_stmt",
  "create_trigger_stmt", "create_view_stmt", "opt_table_option_list",
  "table_option_list", "table_option", "insert_method", "row_format",
  "opt_op_comma", "opt_ignore_or_replace", "opt_view_algorithm",
  "opt_sql_security", "opt_index_option", "opt_extra_option",
  "index_algorithm_option", "lock_option", "opt_op_equal",
  "trigger_events", "trigger_name", "trigger_action_time",
  "drop_index_stmt", "drop_table_stmt", "table_name_list",
  "opt_restrict_or_cascade", "drop_trigger_stmt", "drop_view_stmt",
  "insert_stmt", "opt_priority", "opt_low_priority", "opt_into",
  "value_or_values", "super_value_list", "value_list", "value",
  "opt_as_row_alias", "row_alias", "opt_col_alias", "col_alias_list",
  "col_alias", "opt_on_duplicate", "key_part_list", "key_part",
  "update_stmt", "opt_ignore", "alter_action", "alter_constant_action",
  "opt_create_definition_list_p", "create_definition_list",
  "create_definition", "column_definition", "fulltext_or_spatial",
  "opt_index_or_key", "index_or_key", "opt_index_name",
  "opt_null_not_null", "opt_visible_invisible", "visible_invisible",
  "opt_auto_increment", "opt_unique_primary", "opt_column_format",
  "column_format", "opt_storage", "storage", "opt_reference_definition",
  "reference_definition", "opt_match", "opt_on_delete", "opt_on_update",
  "reference_option", "opt_check_constraint_definition",
  "check_constraint_definition", "opt_constraint_symbol", "opt_enforced",
  "column_def_list", "column_def", "opt_temp", "opt_check_option",
  "opt_column_name_list_p", "assignment_list", "assignment",
  "opt_as_alias", "expr", "operand", "cast_expr", "scalar_expr",
  "unary_expr", "binary_expr", "logic_expr", "in_expr", "case_expr",
  "between_expr", "exists_expr", "function_expr", "opt_distinct",
  "opt_over_clause", "case_list", "case_clause", "comp_expr",
  "extract_expr", "datetime_field", "array_expr", "array_index", "literal",
  "string_literal", "bool_literal", "num_literal", "int_literal",
  "float_literal", "opt_column", "trigger_body", "opt_if_not_exist",
  "opt_if_exist", "identifier", "as_alias", "table_name", "index_name",
  "column_name", "expr_column_name", "opt_index_keyword", "view_name",
  "function_name", "binary_op", "opt_not", "symbol", "data_type",
  "character_type", "opt_length", "character_conflicta", "numeric_type", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457
};
# endif

#define YYPACT_NINF -618

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-618)))

#define YYTABLE_NINF -428

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-428)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     310,   132,   194,   -28,   188,   286,    -2,   174,  -618,   216,
    -618,  -618,  -618,  -618,  -618,  -618,    24,  -618,  -618,  -618,
    -618,  -618,  -618,  -618,  -618,  -618,  -618,    46,   224,   256,
     247,    46,  -618,  -618,   255,   271,  -618,   305,    46,   266,
     269,  -618,  -618,  -618,  -618,   244,   328,   282,  -618,  -618,
    -618,   276,    46,   179,   179,   364,  -618,   322,    68,   315,
     330,   389,   468,  -618,  -618,  -618,    46,   378,    46,  -618,
     272,  -618,   343,   314,   342,   368,   259,    46,  -618,   340,
    -618,   395,   296,    46,    46,   179,  -618,  -618,  -618,   563,
    -618,   276,   452,   430,  -618,   247,   370,   419,   -46,   260,
     388,  -618,   386,   392,   396,  -618,  -618,  -618,  -618,   194,
     490,  -618,   493,  -618,  -618,   306,   244,  -618,  -618,  -618,
     325,    46,   479,    46,   478,  -618,    46,    46,  -618,  -618,
    -618,   324,    46,   300,   627,  -618,   505,   627,   449,   508,
     352,  -618,  -618,  -618,  -618,  -618,  -618,   491,  -618,   208,
     664,  -618,  -618,  -618,  -618,  -618,  -618,  -618,  -618,  -618,
    -618,  -618,  -618,  -618,  -618,  -618,  -618,  -618,  -618,  -618,
    -618,    10,   350,  -618,  -618,   512,   374,  -618,   563,   563,
    -618,  -618,  -618,  -618,  -618,   289,  -618,   424,    46,    46,
      46,     2,  -618,  -618,  -618,   520,  -618,    46,  -618,  -618,
    -618,   497,   475,  -618,  -618,   305,   393,    59,   356,   509,
    -618,    49,   182,  -618,  -618,  -618,   324,   533,   540,   541,
     627,   815,   563,   204,   563,    20,   284,   405,   375,   563,
    -618,   530,  -618,    46,   563,   563,   547,  -618,   627,   198,
     627,   627,  -618,  -618,    65,  -618,   627,   627,   627,   627,
     627,   362,  -618,  -618,  -618,  -618,   627,   418,    57,    64,
     557,    55,     3,  -618,   553,   173,   185,  -618,  -618,  -618,
    -618,  -618,  -618,  -618,   461,    46,  -618,   745,  -618,  -618,
      46,    46,   554,  -618,   -24,    46,  -618,   387,  -618,  -618,
      46,    46,   474,    21,   419,  -618,  -618,  -618,  -618,    46,
    -618,  -618,   521,   211,    26,   303,  -618,   563,  -618,  -618,
    -618,  -618,  -618,  -618,  -618,   544,   407,   251,   563,   550,
    -618,  -618,  -618,   564,   563,   702,   627,   627,   820,   820,
     469,  -618,   820,   855,   855,   855,   855,   426,   204,     4,
    -618,  -618,   441,  -618,   563,   551,  -618,  -618,   301,    46,
    -618,    50,   585,   563,  -618,  -618,  -618,   563,   563,    46,
      80,  -618,  -618,  -618,  -618,  -618,  -618,  -618,  -618,  -618,
    -618,  -618,  -618,   275,  -618,  -618,  -618,  -618,  -618,  -618,
    -618,   408,  -618,  -618,  -618,  -618,  -618,    70,  -618,   592,
    -618,   546,   305,   194,    46,  -618,  -618,  -618,  -618,    46,
     595,   597,     0,    46,  -618,   160,   745,  -618,   419,   419,
     181,  -618,   184,   604,   608,  -618,    46,  -618,  -618,   609,
      52,   262,  -618,   745,   563,  -618,   563,    29,   563,  -618,
     195,   611,   612,  -618,   627,   707,   820,  -618,  -618,   300,
    -618,     6,  -618,   616,   619,   582,  -618,  -618,   601,   530,
     631,   558,   636,   326,   429,  -618,   195,   195,  -618,  -618,
      46,  -618,  -618,  -618,   526,  -618,   355,   362,  -618,   591,
     641,   610,   648,  -618,  -618,    45,   -32,    46,  -618,   478,
    -618,   556,     0,   559,   653,  -618,   360,   572,  -618,  -618,
     655,  -618,   387,   563,    46,  -618,   629,   548,   657,    46,
     629,  -618,  -618,  -618,   663,   195,    33,  -618,    53,   563,
      46,  -618,  -618,   743,   627,   665,   666,    46,  -618,  -618,
     441,  -618,  -618,  -618,   330,    46,   548,   585,   585,   661,
     642,   645,  -618,  -618,  -618,  -618,   561,  -618,   670,   654,
     194,   248,  -618,  -618,  -618,  -618,   674,   677,   478,    46,
      46,   563,  -618,  -618,  -618,  -618,  -618,  -618,  -618,  -618,
    -618,  -618,  -618,  -618,   194,  -618,   678,   673,   173,   679,
     680,  -618,   588,  -618,  -618,   685,   684,   195,   629,   629,
    -618,  -618,  -618,  -618,   671,  -618,   687,   688,   743,  -618,
    -618,   689,   686,  -618,  -618,   662,  -618,  -618,   645,   645,
      46,  -618,   563,   672,  -618,   593,  -618,    72,   610,   570,
     577,   578,   563,   563,   705,   478,   708,   162,  -618,    31,
     563,  -618,  -618,    46,   615,   710,   548,  -618,  -618,   563,
    -618,    46,   716,  -618,   711,   330,   563,  -618,   672,   672,
    -618,   195,   718,  -618,   192,   607,  -618,  -618,   638,  -618,
    -618,  -618,  -618,  -618,   599,   602,   726,   732,   563,   735,
      46,    -4,  -618,   182,  -618,  -618,  -618,   656,   609,  -618,
     195,  -618,    46,   563,   416,   195,  -618,  -618,    46,   210,
     640,   377,   620,  -618,  -618,    31,    31,   746,   563,   747,
     618,  -618,  -618,  -618,    46,  -618,   748,  -618,  -618,  -618,
    -618,  -618,   151,   750,  -618,   658,  -618,  -618,  -618,  -618,
    -618,   353,   624,  -618,  -618,    31,   751,   624,  -618,  -618,
    -618,   385,   738,   741,  -618,  -618,   257,  -618,  -618,  -618,
    -618,  -618,    46,   348,  -618,  -618,    31,  -618,   752,  -618,
    -618,  -618,  -618,   760,  -618,  -618,   637,  -618,   464,   563,
     749,  -618,  -618,   763,  -618,   649,   333,   744,  -618,  -618,
    -618,   691,   754,   156,   690,  -618,   650,  -618,  -618,   -11,
    -618,   156,  -618,  -618,  -618,  -618
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     106,     0,   106,     0,   152,   193,   307,     0,     2,     0,
       5,     6,    10,     7,    21,    20,     0,    11,    12,    13,
      14,    15,    16,    17,    18,     9,     8,     0,     0,     0,
       0,     0,   405,   104,   107,     0,   407,   313,     0,     0,
       0,   414,   415,   416,   306,   155,     0,     0,   190,   191,
     192,   221,     0,   404,   404,     0,     1,   106,   113,   195,
      97,    25,     0,    23,    22,   105,     0,     0,     0,   110,
       0,   174,   152,     0,     0,     0,   402,     0,   220,   197,
     408,     0,     0,     0,     0,   404,     3,   111,   112,   427,
     194,   221,     0,    90,    28,     0,     0,   170,   396,     0,
     396,   229,     0,     0,     0,   232,    19,   226,   108,   106,
       0,   409,    75,   175,   176,     0,   155,   149,   150,   151,
       0,     0,     0,     0,   122,   196,     0,     0,   403,   184,
     418,   183,     0,   106,   426,   343,     0,     0,   427,     0,
       0,   389,   390,   412,   393,   394,   388,    30,    31,   318,
     319,   323,   327,   328,   329,   324,   322,   330,   320,   321,
     333,   344,   331,   332,   326,   337,   385,   386,   387,   391,
     392,   409,     0,   410,   336,     0,     0,    78,   427,   427,
      24,    89,    26,   233,   169,     0,   395,     0,     0,     0,
       0,     0,   230,   231,   234,     0,   312,     0,   171,   172,
     173,     0,     0,   153,   154,   313,     0,   236,     0,     0,
     121,   313,   161,   181,   182,   185,   183,   180,     0,     0,
       0,   339,   427,   338,   427,     0,     0,   367,     0,   427,
      78,    62,    29,     0,   427,   427,    88,   317,     0,   426,
       0,     0,   421,   340,     0,   420,     0,     0,     0,     0,
       0,     0,   424,   422,   423,   425,     0,     0,     0,   363,
       0,     0,     0,    96,    98,   103,    91,   165,   166,   167,
     168,   228,   225,   222,     0,     0,   224,     0,   109,    76,
       0,     0,     0,   401,   299,     0,   116,   130,   123,   124,
       0,     0,     0,   207,   170,   177,   159,   160,   178,     0,
     334,   325,     0,     0,     0,     0,   354,   427,   368,   377,
     378,   379,   380,   381,   382,     0,     0,    64,   427,    58,
      61,   406,   348,   349,   427,     0,     0,     0,   346,   370,
       0,   341,   371,   372,   373,   374,   375,     0,   345,     0,
     413,   411,   366,   362,   427,   106,    79,    80,    86,     0,
      77,    78,   318,   427,   101,   102,   100,   427,   427,     0,
       0,   303,   453,   432,   433,   434,   437,   438,   439,   440,
     441,   442,   443,     0,   446,   447,   448,   449,   450,   451,
     452,   454,   456,   457,   458,   459,   305,   257,   430,   436,
     429,     0,   313,   106,     0,   251,   252,   247,   248,   298,
       0,   237,   250,   254,   245,     0,     0,   119,   170,   170,
     148,   129,   131,     0,   210,   208,     0,   198,   199,     0,
     106,     0,   179,     0,   427,   353,   427,     0,   427,   383,
      63,     0,    33,    87,     0,     0,   347,   342,   384,   106,
     352,     0,   360,     0,     0,    82,    84,    85,     0,    62,
     314,     0,     0,     0,    70,    99,    93,    92,   223,   227,
       0,   444,   445,   455,     0,   256,   259,     0,   431,     0,
       0,   311,     0,   428,   297,   235,   299,   254,   249,   122,
     253,     0,   250,     0,     0,   239,     0,     0,   147,   146,
     118,   144,     0,   427,     0,   206,   215,   427,   207,     0,
     215,   162,   163,   164,     0,   369,     0,   356,     0,   427,
       0,    27,    32,   357,     0,     0,     0,    56,   365,    38,
     366,   359,    83,    81,    97,     0,   427,   318,   318,     0,
       0,    72,   304,   255,   260,   261,   263,   258,     0,     0,
     106,     0,   127,   120,   114,   238,     0,     0,   122,   254,
     254,   427,   135,   136,   137,   133,   138,   139,   140,   141,
     142,   143,   134,   117,   106,   132,     0,   216,   103,     0,
     211,   213,     0,   187,   205,     0,   202,   204,   215,   215,
     188,   335,   355,   376,    60,    34,    35,     0,   358,   350,
     351,     0,    41,    55,   361,    95,   315,   316,    72,    72,
       0,    69,   427,    74,   262,   268,   435,   106,   311,     0,
       0,     0,   427,   427,     0,   122,     0,     0,   115,   158,
     427,   218,   209,     0,     0,   200,   427,   186,   189,   427,
      57,     0,     0,   364,     0,    97,   427,   219,    74,    74,
      68,    71,     0,    65,     0,   270,   397,   400,     0,   399,
     398,   126,   128,   308,     0,     0,     0,     0,   427,     0,
       0,   302,   156,   161,   157,   217,   212,     0,     0,   203,
      59,    36,    56,   427,    44,    94,    66,    67,     0,   264,
       0,     0,   275,   309,   310,   158,   158,     0,   427,     0,
       0,   300,   296,   125,     0,   201,     0,    40,    45,    46,
      47,    39,   427,     0,   266,     0,   265,   273,   272,   271,
     269,     0,   279,   241,   240,   158,     0,     0,   301,   214,
      37,   427,     0,     0,    42,    48,     0,    73,   267,   276,
     277,   274,     0,   295,   278,   242,   158,   244,     0,    49,
      54,    52,    53,     0,   246,   294,     0,   243,   427,   427,
       0,    43,    50,     0,    51,   284,     0,   286,   281,   282,
     283,     0,   288,     0,     0,   280,     0,   289,   290,     0,
     285,     0,   292,   293,   291,   287
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -618,  -618,   724,  -618,  -618,   176,   177,  -103,   785,    13,
     693,  -618,  -618,  -618,  -618,  -618,  -618,   158,  -618,   349,
     119,  -618,  -618,  -618,    73,  -618,    54,  -618,  -618,  -618,
     351,  -618,  -618,  -192,  -618,  -112,  -149,  -194,  -618,  -618,
    -618,  -129,  -618,  -618,  -618,  -502,   444,  -618,   230,     1,
     169,  -618,  -618,  -618,  -618,  -618,  -618,  -449,  -122,  -618,
    -618,  -618,   329,   309,  -618,  -618,  -618,  -618,  -618,   731,
     694,  -617,   148,  -618,   753,  -247,  -618,   730,  -618,  -618,
    -618,   515,   606,  -618,  -618,   217,  -618,  -618,  -618,  -618,
     155,   199,   307,  -285,  -618,  -618,   209,  -618,  -370,  -581,
    -618,   227,   740,  -618,  -618,  -618,   359,  -618,   435,  -618,
     365,  -357,  -312,  -618,  -618,   376,  -618,  -618,  -618,  -618,
    -618,  -618,  -618,   135,  -618,  -618,  -618,    82,  -618,   121,
     133,  -618,  -618,  -261,   861,   261,  -186,  -411,  -618,  -336,
     -96,   -93,  -618,  -618,  -618,  -618,  -618,  -618,  -618,  -618,
    -618,  -618,  -618,   358,    77,  -618,  -618,  -618,  -618,  -618,
    -618,  -618,  -618,  -618,  -618,  -244,  -618,   771,  -618,  -618,
      19,    -3,  -618,     9,   221,   -48,  -618,  -618,   -98,  -618,
    -618,   722,  -618,   460,  -618,  -618,  -618,  -618
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      60,    61,    95,   231,   147,   511,   512,   585,   586,   587,
     591,   635,   701,   702,   724,   751,   725,   592,   432,   630,
     319,   320,   232,   261,   531,   603,   643,   110,   262,   350,
     448,   148,   180,   181,   637,    93,   263,   264,   356,    30,
      33,    34,    35,    89,    17,   564,   286,   209,   662,    18,
      19,    20,   410,   411,   412,   555,   562,   492,   490,    45,
      75,   663,   295,   296,   297,   185,   201,    70,   115,    21,
      22,   216,   215,    23,    24,    25,    51,    91,   126,   419,
     498,   575,   576,   292,   414,   495,   569,   570,   573,   566,
     567,    26,    79,   106,   107,   287,   400,   401,   386,   402,
     477,   403,   479,   466,   536,   664,   605,   645,   682,   710,
     712,   731,   733,   734,   757,   762,   765,   770,   744,   404,
     405,   692,   360,   276,    46,   542,    69,   449,   450,   236,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   344,   442,   226,   227,   161,   162,   315,   163,
     164,   165,   166,   167,   168,   169,   170,   188,   651,   123,
      83,   171,   237,   172,   480,   173,   174,    47,   131,   175,
     256,   176,   474,   387,   388,   468,   389,   390
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      36,    16,   210,   279,   219,   496,   195,   337,   420,   275,
     351,   439,    37,   517,   361,    29,   454,  -419,    31,   282,
     112,   395,   595,   205,    36,   293,   394,   690,    36,   395,
     547,   656,   657,    58,   291,    71,    62,   234,   317,   665,
      37,   221,   225,   234,   223,   478,   234,   421,  -130,    80,
     234,    52,    53,   395,   773,    54,    68,   499,    16,  -106,
     186,   583,   187,    36,   208,   111,   284,   346,   713,   714,
     234,   396,   342,    84,    80,    37,     1,   687,   235,   396,
      71,   130,   265,   266,   235,   397,   398,   235,   459,   347,
     348,   235,   460,   397,   398,     3,   330,     3,   735,   614,
     316,   464,   399,   396,   132,   408,   409,   716,   774,   285,
     399,   235,   343,    59,   596,    87,    88,     3,   130,   747,
      36,   417,   418,    36,    36,   478,   303,   221,   304,    36,
     580,   691,   207,   674,    44,   211,   212,    27,   322,   323,
     272,   217,   274,   277,  -207,   325,   218,   328,   329,   112,
     349,   534,   535,   332,   333,   334,   335,   336,   133,   453,
       5,   486,   487,   338,     6,   546,   659,   721,   753,    32,
     661,   224,   722,    32,    56,   723,   507,    32,   424,   234,
     582,  -407,   134,   392,   331,   111,    36,   111,   111,   465,
     234,   598,   599,  -307,   111,   433,   491,   357,   273,   532,
      65,     2,   234,    32,    32,    32,   470,    32,   627,   628,
     341,   427,   234,   578,   326,   443,   354,   355,   766,    57,
     235,   233,   430,   538,   423,   234,   358,   277,   234,   340,
     321,   235,    63,   435,   436,   108,   406,   615,   616,     3,
     488,  -417,    38,   235,  -145,  -145,    39,    32,   327,   767,
     768,   769,   489,   235,   294,   111,    58,   265,    32,    36,
      40,   456,   457,   346,    64,    97,   235,    66,   481,   235,
     135,   352,   111,    81,   234,   482,   483,    36,   130,   741,
     742,   111,    36,   719,    67,   347,   348,    36,   415,   391,
     471,   136,   137,   484,   407,   679,    36,   138,   124,   413,
     680,   451,   305,    41,   308,    42,    43,   133,   217,   139,
     516,   458,    68,   704,     1,   235,   140,     2,   705,   141,
     142,    74,    -4,   143,    44,    72,     1,   501,   505,     2,
     506,   134,   508,    76,   528,    77,    36,   445,   346,   446,
     447,   513,    73,   502,   503,     3,   111,    78,   440,    82,
     144,   145,    32,   146,   267,     3,   111,   210,   444,     4,
     347,   348,   113,   114,   452,   189,   190,     3,   451,    85,
     251,     4,    92,   268,   269,   270,   252,   253,   254,   255,
     584,   609,    48,    49,    50,   109,   610,   611,   117,   118,
     119,    36,   133,   198,   199,   200,   473,   568,     5,    94,
      80,   577,     6,   472,   203,   204,   722,   288,   289,   723,
       5,    90,   277,   111,     6,    40,   134,   213,   214,   135,
     120,   588,   552,   553,   554,   121,   210,   127,   406,   122,
     577,   306,   307,   500,   698,   699,   700,   608,   519,   125,
     136,   137,   707,   708,   709,   128,   138,   408,   409,  -427,
     425,   426,   515,   461,   462,   617,   133,   111,   139,   529,
     530,   618,   758,   759,   760,   140,   689,   178,   141,   142,
     179,   133,   143,   111,    80,   534,   535,   451,   729,   730,
     134,  -299,   399,   183,   703,   750,   638,   639,   723,   676,
     677,   571,   184,   210,   186,   134,    36,   192,   196,   144,
     145,    32,   146,   193,   135,   197,   641,   519,   579,   194,
     206,   208,   222,    96,   593,   228,   568,   568,   229,   259,
     230,   258,   111,   260,   568,   136,   137,   271,   278,   280,
     577,   138,   281,   670,   309,   310,   311,   312,   313,   314,
     675,   290,   283,   139,   697,   299,    80,    80,   300,   301,
     140,    97,   640,   141,   142,   133,   224,   143,   318,   324,
      98,   144,   568,   339,   345,   353,   359,   393,   135,   416,
     133,   327,    99,   428,   429,   100,   431,   101,   102,   134,
     103,   234,   104,   135,   144,   145,    32,   146,   437,   136,
     137,   441,   568,   438,   134,   138,     3,   111,   233,   467,
     224,   469,   463,   475,   136,   137,   726,   139,   648,   476,
     138,   493,   112,   574,   140,   494,   497,   141,   142,   522,
     571,   143,   139,   510,   520,   726,   509,   521,   519,   140,
     112,   526,   141,   142,   133,   523,   143,   556,   557,   558,
     559,   560,   561,   525,   527,   533,   451,   539,   144,   145,
      32,   146,   726,   568,   540,   541,   543,   111,   220,   548,
     551,   572,   550,   144,   145,    32,   146,   135,   563,   593,
     291,   581,   601,   589,   590,   111,   600,   602,   606,   607,
     238,   612,   135,   604,   613,   620,   619,   622,   136,   137,
     624,   111,   623,   625,   138,   239,   626,   633,   629,   631,
     634,   632,   636,   136,   137,   642,   139,   653,   644,   138,
     654,   655,   658,   140,   240,   660,   141,   142,   667,   434,
     143,   139,   668,   672,   514,   678,   673,    59,   140,    36,
     681,   141,   142,   302,   685,   143,   683,   241,   302,   684,
     686,   743,   688,   706,   711,   694,   135,   144,   145,    32,
     146,   732,   240,   718,   715,   717,   720,   240,   727,   736,
     739,   728,   144,   145,    32,   146,   740,   749,   137,   748,
     484,   755,   754,   138,   302,   241,   761,   756,   763,   771,
     241,    86,   772,   646,   647,   139,   764,    28,   182,   671,
     518,   696,   140,   240,   738,   141,   142,   455,   621,   143,
     524,   565,   752,   116,   544,   242,   243,   244,   245,  -427,
     202,   693,   362,   129,   422,   105,   241,   246,   247,   248,
     249,   250,   298,   695,   649,   669,   144,   145,    32,   146,
     251,   177,   666,   597,   650,   545,   252,   253,   254,   255,
     363,   485,   537,   242,   243,   244,   245,   549,   242,   243,
     244,   245,   737,   775,   745,   246,   247,   248,   249,   250,
     246,   247,   248,   249,   250,   240,   746,    55,   251,   652,
    -428,   191,   257,   251,   252,   253,   254,   255,   594,   252,
     253,   254,   255,   504,   242,   243,   244,   245,   241,     0,
       0,     0,     0,  -428,     0,     0,   246,   247,   248,   249,
     250,     0,     0,     0,     0,     0,     0,     0,     0,   251,
       0,     0,     0,     0,     0,   252,   253,   254,   255,     0,
       0,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,     0,
     382,   383,   384,   385,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   242,   243,   244,   245,
       0,   242,   243,   244,   245,     0,     0,     0,   246,   247,
     248,   249,   250,  -428,   247,   248,   249,   250,     0,     0,
       0,   251,     0,     0,     0,     0,   251,   252,   253,   254,
     255,     0,   252,   253,   254,   255,   242,   243,   244,   245,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -428,
    -428,  -428,  -428,     0,     0,     0,     0,     0,     0,     0,
       0,   251,     0,     0,     0,     0,     0,   252,   253,   254,
     255
};

static const yytype_int16 yycheck[] =
{
       3,     0,   124,   197,   133,   416,   109,   251,   293,     7,
       7,     7,     3,     7,   275,     2,   352,     7,    46,   205,
      68,    53,   524,   121,    27,   211,    50,    31,    31,    53,
     479,   612,   613,     9,    13,    38,    27,    17,   230,   620,
      31,   134,   138,    17,   137,   402,    17,   294,     3,    52,
      17,    53,    54,    53,    65,    57,     7,     5,    57,     9,
     106,     8,   108,    66,    33,    68,     7,    12,   685,   686,
      17,   103,     8,    54,    77,    66,     4,   658,    58,   103,
      83,    84,   178,   179,    58,   117,   118,    58,     8,    34,
      35,    58,    12,   117,   118,    45,    31,    45,   715,   548,
     229,    31,   134,   103,    85,    60,    61,   688,   119,    50,
     134,    58,    48,    89,   525,    47,    48,    45,   121,   736,
     123,   100,   101,   126,   127,   482,   222,   220,   224,   132,
     500,   135,   123,   635,   136,   126,   127,     5,   234,   235,
     188,   132,   190,   191,    95,   238,   133,   240,   241,   197,
      95,   120,   121,   246,   247,   248,   249,   250,     7,   351,
      88,   408,   409,   256,    92,   477,   615,    16,   749,   201,
       8,   151,    21,   201,     0,    24,   147,   201,   152,    17,
     147,   171,    31,   281,   119,   188,   189,   190,   191,   119,
      17,   527,   528,     5,   197,   324,    12,    12,   189,   460,
      31,     7,    17,   201,   201,   201,   392,   201,   578,   579,
     258,   307,    17,   498,    16,   344,    43,    44,    62,     3,
      58,    13,   318,   467,    13,    17,    41,   275,    17,   172,
     233,    58,     8,   326,   327,    66,   284,   549,   550,    45,
      59,    53,    54,    58,    60,    61,    58,   201,    50,    93,
      94,    95,    71,    58,    72,   258,     9,   353,   201,   262,
      72,   357,   358,    12,     8,    83,    58,    12,   108,    58,
     119,   262,   275,    52,    17,   115,   116,   280,   281,    22,
      23,   284,   285,   694,    13,    34,    35,   290,   291,   280,
     393,   140,   141,   133,   285,   103,   299,   146,    77,   290,
     108,   349,   225,   115,   227,   117,   118,     7,   299,   158,
     439,   359,     7,   103,     4,    58,   165,     7,   108,   168,
     169,    77,     0,   172,   136,    59,     4,    65,   424,     7,
     426,    31,   428,     5,     8,    53,   339,    36,    12,    38,
      39,   434,    73,    81,    82,    45,   349,    71,   339,   170,
     199,   200,   201,   202,    65,    45,   359,   479,   345,    49,
      34,    35,    90,    91,   351,   105,   106,    45,   416,     5,
     166,    49,    42,    84,    85,    86,   172,   173,   174,   175,
     509,   133,    96,    97,    98,     7,   138,   139,    74,    75,
      76,   394,     7,    87,    88,    89,   399,   493,    88,    10,
     403,   497,    92,   394,    79,    80,    21,    51,    52,    24,
      88,    96,   460,   416,    92,    72,    31,    93,    94,   119,
      78,   514,    62,    63,    64,    57,   548,    32,   476,   170,
     526,   147,   148,   420,    18,    19,    20,   540,   441,    99,
     140,   141,    65,    66,    67,   149,   146,    60,    61,   149,
     147,   148,   439,   178,   179,   551,     7,   460,   158,    30,
      31,   564,   129,   130,   131,   165,   660,    15,   168,   169,
      40,     7,   172,   476,   477,   120,   121,   525,   125,   126,
      31,   133,   134,   113,   678,    21,   598,   599,    24,   638,
     639,   494,    73,   615,   106,    31,   499,   111,     8,   199,
     200,   201,   202,   111,   119,    12,   602,   510,   499,   113,
      31,    33,     7,    45,   517,     7,   612,   613,   166,     7,
      29,   171,   525,   149,   620,   140,   141,   103,     8,    32,
     626,   146,    57,   629,   159,   160,   161,   162,   163,   164,
     636,    32,   149,   158,   673,    12,   549,   550,     8,     8,
     165,    83,   600,   168,   169,     7,   151,   172,    28,    12,
      92,   199,   658,   145,     7,    12,   105,    13,   119,    95,
       7,    50,   104,    29,   167,   107,    26,   109,   110,    31,
     112,    17,   114,   119,   199,   200,   201,   202,   119,   140,
     141,   150,   688,   167,    31,   146,    45,   600,    13,     7,
     151,    55,   194,     8,   140,   141,   702,   158,   607,    12,
     146,     7,   660,    65,   165,     7,     7,   168,   169,    37,
     623,   172,   158,    11,     8,   721,    15,     8,   631,   165,
     678,    73,   168,   169,     7,    34,   172,    65,    66,    67,
      68,    69,    70,    12,     8,   119,   694,    56,   199,   200,
     201,   202,   748,   749,    13,    45,     8,   660,    31,   103,
       7,    32,   103,   199,   200,   201,   202,   119,    13,   672,
      13,     8,    30,     8,     8,   678,    15,    32,     8,    25,
      16,     7,   119,   122,     7,    12,     8,     8,   140,   141,
     102,   694,    12,     8,   146,    31,    12,     8,    27,    12,
      14,    13,    40,   140,   141,    33,   158,   137,   115,   146,
     133,   133,     7,   165,    50,     7,   168,   169,   103,    17,
     172,   158,    12,     7,    17,     7,    15,    89,   165,   732,
     123,   168,   169,    31,     8,   172,   137,    73,    31,   137,
       8,   732,     7,   103,   124,    89,   119,   199,   200,   201,
     202,   127,    50,   135,     8,     8,     8,    50,     8,     8,
      22,   103,   199,   200,   201,   202,    25,     7,   141,    17,
     133,     8,    23,   146,    31,    73,    32,   128,    87,    89,
      73,    57,   132,   607,   607,   158,    32,     2,    95,   631,
     441,   672,   165,    50,   721,   168,   169,   353,   568,   172,
     449,   492,   748,    72,   475,   141,   142,   143,   144,   145,
     116,   663,    67,    83,   299,    62,    73,   153,   154,   155,
     156,   157,   216,   668,   607,   626,   199,   200,   201,   202,
     166,    91,   623,   526,   607,   476,   172,   173,   174,   175,
      95,   406,   466,   141,   142,   143,   144,   482,   141,   142,
     143,   144,   717,   771,   733,   153,   154,   155,   156,   157,
     153,   154,   155,   156,   157,    50,   733,     6,   166,   608,
      50,   100,   150,   166,   172,   173,   174,   175,   520,   172,
     173,   174,   175,   423,   141,   142,   143,   144,    73,    -1,
      -1,    -1,    -1,    73,    -1,    -1,   153,   154,   155,   156,
     157,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   166,
      -1,    -1,    -1,    -1,    -1,   172,   173,   174,   175,    -1,
      -1,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,    -1,
     195,   196,   197,   198,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   141,   142,   143,   144,
      -1,   141,   142,   143,   144,    -1,    -1,    -1,   153,   154,
     155,   156,   157,   153,   154,   155,   156,   157,    -1,    -1,
      -1,   166,    -1,    -1,    -1,    -1,   166,   172,   173,   174,
     175,    -1,   172,   173,   174,   175,   141,   142,   143,   144,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   154,
     155,   156,   157,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   166,    -1,    -1,    -1,    -1,    -1,   172,   173,   174,
     175
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     4,     7,    45,    49,    88,    92,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   252,   257,   262,   263,
     264,   282,   283,   286,   287,   288,   304,     5,   211,   212,
     252,    46,   201,   253,   254,   255,   374,   376,    54,    58,
      72,   115,   117,   118,   136,   272,   337,   380,    96,    97,
      98,   289,    53,    54,    57,   337,     0,     3,     9,    89,
     213,   214,   376,     8,     8,   253,    12,    13,     7,   339,
     280,   374,    59,    73,    77,   273,     5,    53,    71,   305,
     374,   377,   170,   373,   373,     5,   205,    47,    48,   256,
      96,   290,    42,   248,    10,   215,    45,    83,    92,   104,
     107,   109,   110,   112,   114,   277,   306,   307,   253,     7,
     240,   374,   378,    90,    91,   281,   272,    74,    75,    76,
      78,    57,   170,   372,   377,    99,   291,    32,   149,   280,
     374,   381,   373,     7,    31,   119,   140,   141,   146,   158,
     165,   168,   169,   172,   199,   200,   202,   217,   244,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   359,   360,   362,   363,   364,   365,   366,   367,   368,
     369,   374,   376,   378,   379,   382,   384,   305,    15,    40,
     245,   246,   213,   113,    73,   278,   106,   108,   370,   105,
     106,   370,   111,   111,   113,   210,     8,    12,    87,    88,
      89,   279,   273,    79,    80,   381,    31,   376,    33,   260,
     261,   376,   376,    93,    94,   285,   284,   376,   212,   244,
      31,   344,     7,   344,   151,   343,   357,   358,     7,   166,
      29,   216,   235,    13,    17,    58,   342,   375,    16,    31,
      50,    73,   141,   142,   143,   144,   153,   154,   155,   156,
     157,   166,   172,   173,   174,   175,   383,   384,   171,     7,
     149,   236,   241,   249,   250,   343,   343,    65,    84,    85,
      86,   103,   378,   376,   378,     7,   336,   378,     8,   240,
      32,    57,   339,   149,     7,    50,   259,   308,    51,    52,
      32,    13,   296,   339,    72,   275,   276,   277,   285,    12,
       8,     8,    31,   343,   343,   357,   147,   148,   357,   159,
     160,   161,   162,   163,   164,   361,   244,   236,    28,   233,
     234,   374,   343,   343,    12,   344,    16,    50,   344,   344,
      31,   119,   344,   344,   344,   344,   344,   368,   344,   145,
     172,   378,     8,    48,   355,     7,    12,    34,    35,    95,
     242,     7,   376,    12,    43,    44,   251,    12,    41,   105,
     335,   336,    67,    95,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   195,   196,   197,   198,   311,   386,   387,   389,
     390,   376,   381,    13,    50,    53,   103,   117,   118,   134,
     309,   310,   312,   314,   332,   333,   378,   376,    60,    61,
     265,   266,   267,   376,   297,   374,    95,   100,   101,   292,
     296,   278,   284,    13,   152,   147,   148,   343,    29,   167,
     343,    26,   231,   244,    17,   344,   344,   119,   167,     7,
     376,   150,   356,   244,   212,    36,    38,    39,   243,   340,
     341,   378,   212,   236,   342,   249,   343,   343,   378,     8,
      12,   178,   179,   194,    31,   119,   316,     7,   388,    55,
     339,   210,   376,   374,   385,     8,    12,   313,   314,   315,
     377,   108,   115,   116,   133,   311,   278,   278,    59,    71,
     271,    12,   270,     7,     7,   298,   340,     7,   293,     5,
     212,    65,    81,    82,   386,   343,   343,   147,   343,    15,
      11,   218,   219,   344,    17,   212,   244,     7,   222,   374,
       8,     8,    37,    34,   233,    12,    73,     8,     8,    30,
      31,   237,   336,   119,   120,   121,   317,   318,   368,    56,
      13,    45,   338,     8,   265,   309,   315,   260,   103,   313,
     103,     7,    62,    63,    64,   268,    65,    66,    67,    68,
      69,    70,   269,    13,   258,   266,   302,   303,   343,   299,
     300,   374,    32,   301,    65,   294,   295,   343,   296,   376,
     301,     8,   147,     8,   244,   220,   221,   222,   344,     8,
       8,   223,   230,   374,   356,   248,   340,   295,   342,   342,
      15,    30,    32,   238,   122,   319,     8,    25,   210,   133,
     138,   139,     7,     7,   260,   315,   315,   343,   210,     8,
      12,   251,     8,    12,   102,     8,    12,   301,   301,    27,
     232,    12,    13,     8,    14,   224,    40,   247,   238,   238,
     378,   343,    33,   239,   115,   320,   208,   209,   252,   288,
     304,   371,   338,   137,   133,   133,   302,   302,     7,   260,
       7,     8,   261,   274,   318,   302,   299,   103,    12,   294,
     343,   220,     7,    15,   248,   343,   239,   239,     7,   103,
     108,   123,   321,   137,   137,     8,     8,   302,     7,   240,
      31,   135,   334,   275,    89,   293,   223,   244,    18,    19,
      20,   225,   226,   240,   103,   108,   103,    65,    66,    67,
     322,   124,   323,   274,   274,     8,   302,     8,   135,   340,
       8,    16,    21,    24,   227,   229,   343,     8,   103,   125,
     126,   324,   127,   325,   326,   274,     8,   326,   227,    22,
      25,    22,    23,   376,   331,   332,   333,   274,    17,     7,
      21,   228,   229,   302,    23,     8,   128,   327,   129,   130,
     131,    32,   328,    87,    32,   329,    62,    93,    94,    95,
     330,    89,   132,    65,   119,   330
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   203,   204,   205,   205,   206,   206,   206,   206,   206,
     206,   207,   207,   207,   207,   208,   208,   208,   208,   209,
     210,   210,   211,   211,   212,   213,   213,   214,   215,   216,
     216,   217,   218,   218,   219,   220,   220,   221,   222,   223,
     224,   224,   225,   225,   225,   226,   226,   226,   227,   227,
     228,   228,   229,   229,   229,   230,   230,   231,   231,   232,
     232,   233,   233,   234,   235,   236,   236,   236,   237,   237,
     237,   238,   238,   239,   239,   240,   240,   241,   241,   242,
     242,   242,   243,   243,   243,   243,   243,   244,   244,   245,
     245,   246,   246,   246,   247,   247,   248,   248,   249,   249,
     250,   251,   251,   251,   252,   252,   252,   253,   253,   254,
     255,   256,   256,   256,   257,   257,   257,   258,   258,   259,
     259,   260,   260,   261,   261,   262,   263,   264,   264,   265,
     265,   266,   266,   267,   267,   268,   268,   268,   269,   269,
     269,   269,   269,   269,   270,   270,   271,   271,   271,   272,
     272,   272,   272,   273,   273,   273,   274,   274,   274,   275,
     275,   275,   276,   276,   276,   277,   277,   277,   277,   278,
     278,   279,   279,   279,   280,   281,   281,   282,   283,   284,
     284,   285,   285,   285,   286,   287,   288,   288,   288,   288,
     289,   289,   289,   289,   290,   290,   291,   291,   292,   292,
     293,   293,   294,   294,   295,   295,   296,   296,   297,   298,
     298,   299,   299,   300,   301,   301,   302,   302,   303,   304,
     305,   305,   306,   306,   306,   306,   306,   306,   307,   307,
     307,   307,   307,   307,   307,   308,   308,   309,   309,   310,
     310,   310,   310,   310,   310,   310,   311,   312,   312,   313,
     313,   314,   314,   315,   315,   316,   316,   316,   317,   317,
     318,   318,   319,   319,   320,   320,   320,   320,   320,   321,
     321,   322,   322,   322,   323,   323,   324,   324,   325,   325,
     326,   327,   327,   327,   327,   328,   328,   329,   329,   330,
     330,   330,   330,   330,   331,   331,   332,   333,   333,   333,
     334,   334,   334,   335,   335,   336,   337,   337,   338,   338,
     338,   338,   339,   339,   340,   340,   341,   342,   342,   343,
     343,   343,   343,   343,   343,   344,   344,   344,   344,   344,
     344,   344,   344,   344,   344,   345,   346,   346,   347,   347,
     347,   347,   347,   347,   348,   348,   348,   348,   349,   349,
     350,   350,   350,   351,   351,   351,   351,   352,   352,   353,
     354,   354,   355,   355,   356,   356,   356,   357,   357,   358,
     359,   359,   359,   359,   359,   359,   360,   361,   361,   361,
     361,   361,   361,   362,   363,   364,   364,   364,   365,   366,
     366,   367,   367,   368,   369,   370,   370,   371,   371,   371,
     371,   372,   372,   373,   373,   374,   375,   376,   377,   378,
     379,   379,   379,   379,   380,   380,   380,   380,   381,   382,
     383,   383,   383,   383,   383,   383,   384,   384,   385,   386,
     386,   387,   387,   387,   387,   388,   388,   389,   389,   389,
     389,   389,   389,   389,   389,   389,   389,   390,   390,   390,
     390,   390,   390,   390,   390,   390,   390,   390,   390,   390
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     1,     3,     3,     4,     1,     3,     7,     1,     1,
       0,     1,     1,     0,     2,     1,     3,     5,     1,     4,
       3,     0,     2,     5,     0,     1,     1,     1,     1,     2,
       1,     2,     2,     2,     2,     1,     0,     4,     0,     2,
       0,     1,     0,     2,     2,     6,     7,     7,     3,     2,
       0,     2,     0,     4,     0,     1,     3,     2,     0,     1,
       1,     3,     1,     2,     1,     1,     0,     4,     2,     1,
       0,     2,     4,     4,     2,     0,     3,     0,     1,     3,
       2,     1,     1,     0,     2,     3,     0,     1,     3,     5,
       2,     1,     1,     0,     9,    10,     6,     1,     0,     2,
       4,     1,     0,     2,     2,    12,    11,     9,    11,     1,
       0,     1,     3,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     1,     0,     3,
       3,     3,     0,     3,     3,     0,     1,     1,     0,     1,
       1,     0,     3,     3,     3,     3,     3,     3,     3,     1,
       0,     1,     1,     1,     1,     1,     1,     6,     6,     3,
       1,     1,     1,     0,     4,     5,    10,     9,     9,    10,
       1,     1,     1,     0,     1,     0,     1,     0,     1,     1,
       3,     5,     1,     3,     1,     1,     3,     0,     1,     3,
       0,     1,     3,     1,     5,     0,     1,     3,     2,    10,
       1,     0,     3,     5,     3,     3,     1,     5,     3,     1,
       2,     2,     1,     2,     2,     3,     0,     1,     3,     2,
       7,     7,     8,     9,     8,     1,     9,     1,     1,     1,
       0,     1,     1,     1,     0,     2,     1,     0,     1,     0,
       1,     1,     1,     0,     2,     3,     3,     4,     0,     2,
       0,     1,     1,     1,     2,     0,     1,     1,     1,     0,
       8,     2,     2,     2,     0,     3,     0,     3,     0,     1,
       1,     2,     2,     2,     1,     0,     6,     2,     1,     0,
       1,     2,     0,     1,     3,     2,     1,     0,     3,     4,
       4,     0,     3,     0,     1,     3,     3,     1,     0,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     6,     1,     1,     2,     2,
       2,     3,     4,     1,     1,     3,     3,     4,     3,     3,
       6,     6,     4,     4,     3,     6,     5,     5,     6,     5,
       4,     6,     1,     0,     4,     2,     0,     1,     2,     4,
       3,     3,     3,     3,     3,     3,     6,     1,     1,     1,
       1,     1,     1,     4,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     1,     1,
       1,     3,     0,     2,     0,     1,     2,     1,     1,     1,
       1,     3,     1,     3,     1,     1,     1,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     1,
       1,     2,     1,     1,     1,     3,     0,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (&yylloc, result, scanner, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if FF_DEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined FF_LTYPE_IS_TRIVIAL && FF_LTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, result, scanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, Program* result, yyscan_t scanner)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  YYUSE (result);
  YYUSE (scanner);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, Program* result, yyscan_t scanner)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, result, scanner);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, Program* result, yyscan_t scanner)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , result, scanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, result, scanner); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !FF_DEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !FF_DEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, Program* result, yyscan_t scanner)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (result);
  YYUSE (scanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
          case 199: /* INTLITERAL  */
#line 466 "bison.y" /* yacc.c:1257  */
      {
	 
}
#line 2182 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 200: /* FLOATLITERAL  */
#line 466 "bison.y" /* yacc.c:1257  */
      {
	 
}
#line 2190 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 201: /* IDENTIFIER  */
#line 462 "bison.y" /* yacc.c:1257  */
      {
	free( (((*yyvaluep).sval)) );
}
#line 2198 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 202: /* STRINGLITERAL  */
#line 462 "bison.y" /* yacc.c:1257  */
      {
	free( (((*yyvaluep).sval)) );
}
#line 2206 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 204: /* program  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).program_t)!=NULL)((*yyvaluep).program_t)->deep_delete(); }
#line 2212 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 205: /* stmtlist  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).stmtlist_t)!=NULL)((*yyvaluep).stmtlist_t)->deep_delete(); }
#line 2218 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 206: /* stmt  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).stmt_t)!=NULL)((*yyvaluep).stmt_t)->deep_delete(); }
#line 2224 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 207: /* create_stmt  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).create_stmt_t)!=NULL)((*yyvaluep).create_stmt_t)->deep_delete(); }
#line 2230 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 208: /* drop_stmt  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).drop_stmt_t)!=NULL)((*yyvaluep).drop_stmt_t)->deep_delete(); }
#line 2236 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 209: /* alter_stmt  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).alter_stmt_t)!=NULL)((*yyvaluep).alter_stmt_t)->deep_delete(); }
#line 2242 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 210: /* select_stmt  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).select_stmt_t)!=NULL)((*yyvaluep).select_stmt_t)->deep_delete(); }
#line 2248 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 211: /* select_with_parens  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).select_with_parens_t)!=NULL)((*yyvaluep).select_with_parens_t)->deep_delete(); }
#line 2254 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 212: /* select_no_parens  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).select_no_parens_t)!=NULL)((*yyvaluep).select_no_parens_t)->deep_delete(); }
#line 2260 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 213: /* select_clause_list  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).select_clause_list_t)!=NULL)((*yyvaluep).select_clause_list_t)->deep_delete(); }
#line 2266 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 214: /* select_clause  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).select_clause_t)!=NULL)((*yyvaluep).select_clause_t)->deep_delete(); }
#line 2272 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 215: /* combine_clause  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).combine_clause_t)!=NULL)((*yyvaluep).combine_clause_t)->deep_delete(); }
#line 2278 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 216: /* opt_from_clause  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_from_clause_t)!=NULL)((*yyvaluep).opt_from_clause_t)->deep_delete(); }
#line 2284 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 217: /* select_target  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).select_target_t)!=NULL)((*yyvaluep).select_target_t)->deep_delete(); }
#line 2290 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 218: /* opt_window_clause  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_window_clause_t)!=NULL)((*yyvaluep).opt_window_clause_t)->deep_delete(); }
#line 2296 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 219: /* window_clause  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).window_clause_t)!=NULL)((*yyvaluep).window_clause_t)->deep_delete(); }
#line 2302 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 220: /* window_def_list  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).window_def_list_t)!=NULL)((*yyvaluep).window_def_list_t)->deep_delete(); }
#line 2308 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 221: /* window_def  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).window_def_t)!=NULL)((*yyvaluep).window_def_t)->deep_delete(); }
#line 2314 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 222: /* window_name  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).window_name_t)!=NULL)((*yyvaluep).window_name_t)->deep_delete(); }
#line 2320 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 223: /* window  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).window_t)!=NULL)((*yyvaluep).window_t)->deep_delete(); }
#line 2326 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 224: /* opt_partition  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_partition_t)!=NULL)((*yyvaluep).opt_partition_t)->deep_delete(); }
#line 2332 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 225: /* opt_frame_clause  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_frame_clause_t)!=NULL)((*yyvaluep).opt_frame_clause_t)->deep_delete(); }
#line 2338 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 226: /* range_or_rows  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).range_or_rows_t)!=NULL)((*yyvaluep).range_or_rows_t)->deep_delete(); }
#line 2344 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 227: /* frame_bound_start  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).frame_bound_start_t)!=NULL)((*yyvaluep).frame_bound_start_t)->deep_delete(); }
#line 2350 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 228: /* frame_bound_end  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).frame_bound_end_t)!=NULL)((*yyvaluep).frame_bound_end_t)->deep_delete(); }
#line 2356 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 229: /* frame_bound  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).frame_bound_t)!=NULL)((*yyvaluep).frame_bound_t)->deep_delete(); }
#line 2362 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 230: /* opt_exist_window_name  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_exist_window_name_t)!=NULL)((*yyvaluep).opt_exist_window_name_t)->deep_delete(); }
#line 2368 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 231: /* opt_group_clause  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_group_clause_t)!=NULL)((*yyvaluep).opt_group_clause_t)->deep_delete(); }
#line 2374 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 232: /* opt_having_clause  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_having_clause_t)!=NULL)((*yyvaluep).opt_having_clause_t)->deep_delete(); }
#line 2380 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 233: /* opt_where_clause  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_where_clause_t)!=NULL)((*yyvaluep).opt_where_clause_t)->deep_delete(); }
#line 2386 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 234: /* where_clause  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).where_clause_t)!=NULL)((*yyvaluep).where_clause_t)->deep_delete(); }
#line 2392 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 235: /* from_clause  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).from_clause_t)!=NULL)((*yyvaluep).from_clause_t)->deep_delete(); }
#line 2398 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 236: /* table_ref  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).table_ref_t)!=NULL)((*yyvaluep).table_ref_t)->deep_delete(); }
#line 2404 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 237: /* opt_index  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_index_t)!=NULL)((*yyvaluep).opt_index_t)->deep_delete(); }
#line 2410 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 238: /* opt_on  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_on_t)!=NULL)((*yyvaluep).opt_on_t)->deep_delete(); }
#line 2416 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 239: /* opt_using  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_using_t)!=NULL)((*yyvaluep).opt_using_t)->deep_delete(); }
#line 2422 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 240: /* column_name_list  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).column_name_list_t)!=NULL)((*yyvaluep).column_name_list_t)->deep_delete(); }
#line 2428 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 241: /* opt_table_prefix  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_table_prefix_t)!=NULL)((*yyvaluep).opt_table_prefix_t)->deep_delete(); }
#line 2434 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 242: /* join_op  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).join_op_t)!=NULL)((*yyvaluep).join_op_t)->deep_delete(); }
#line 2440 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 243: /* opt_join_type  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_join_type_t)!=NULL)((*yyvaluep).opt_join_type_t)->deep_delete(); }
#line 2446 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 244: /* expr_list  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).expr_list_t)!=NULL)((*yyvaluep).expr_list_t)->deep_delete(); }
#line 2452 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 245: /* opt_limit_clause  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_limit_clause_t)!=NULL)((*yyvaluep).opt_limit_clause_t)->deep_delete(); }
#line 2458 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 246: /* limit_clause  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).limit_clause_t)!=NULL)((*yyvaluep).limit_clause_t)->deep_delete(); }
#line 2464 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 247: /* opt_limit_row_count  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_limit_row_count_t)!=NULL)((*yyvaluep).opt_limit_row_count_t)->deep_delete(); }
#line 2470 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 248: /* opt_order_clause  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_order_clause_t)!=NULL)((*yyvaluep).opt_order_clause_t)->deep_delete(); }
#line 2476 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 249: /* order_item_list  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).order_item_list_t)!=NULL)((*yyvaluep).order_item_list_t)->deep_delete(); }
#line 2482 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 250: /* order_item  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).order_item_t)!=NULL)((*yyvaluep).order_item_t)->deep_delete(); }
#line 2488 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 251: /* opt_order_behavior  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_order_behavior_t)!=NULL)((*yyvaluep).opt_order_behavior_t)->deep_delete(); }
#line 2494 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 252: /* opt_with_clause  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_with_clause_t)!=NULL)((*yyvaluep).opt_with_clause_t)->deep_delete(); }
#line 2500 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 253: /* cte_table_list  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).cte_table_list_t)!=NULL)((*yyvaluep).cte_table_list_t)->deep_delete(); }
#line 2506 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 254: /* cte_table  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).cte_table_t)!=NULL)((*yyvaluep).cte_table_t)->deep_delete(); }
#line 2512 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 255: /* cte_table_name  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).cte_table_name_t)!=NULL)((*yyvaluep).cte_table_name_t)->deep_delete(); }
#line 2518 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 256: /* opt_all_or_distinct  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_all_or_distinct_t)!=NULL)((*yyvaluep).opt_all_or_distinct_t)->deep_delete(); }
#line 2524 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 257: /* create_table_stmt  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).create_table_stmt_t)!=NULL)((*yyvaluep).create_table_stmt_t)->deep_delete(); }
#line 2530 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 258: /* opt_as  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_as_t)!=NULL)((*yyvaluep).opt_as_t)->deep_delete(); }
#line 2536 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 259: /* like_field  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).like_field_t)!=NULL)((*yyvaluep).like_field_t)->deep_delete(); }
#line 2542 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 260: /* opt_index_type  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_index_type_t)!=NULL)((*yyvaluep).opt_index_type_t)->deep_delete(); }
#line 2548 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 261: /* index_type  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).index_type_t)!=NULL)((*yyvaluep).index_type_t)->deep_delete(); }
#line 2554 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 262: /* create_index_stmt  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).create_index_stmt_t)!=NULL)((*yyvaluep).create_index_stmt_t)->deep_delete(); }
#line 2560 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 263: /* create_trigger_stmt  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).create_trigger_stmt_t)!=NULL)((*yyvaluep).create_trigger_stmt_t)->deep_delete(); }
#line 2566 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 264: /* create_view_stmt  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).create_view_stmt_t)!=NULL)((*yyvaluep).create_view_stmt_t)->deep_delete(); }
#line 2572 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 265: /* opt_table_option_list  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_table_option_list_t)!=NULL)((*yyvaluep).opt_table_option_list_t)->deep_delete(); }
#line 2578 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 266: /* table_option_list  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).table_option_list_t)!=NULL)((*yyvaluep).table_option_list_t)->deep_delete(); }
#line 2584 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 267: /* table_option  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).table_option_t)!=NULL)((*yyvaluep).table_option_t)->deep_delete(); }
#line 2590 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 268: /* insert_method  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).insert_method_t)!=NULL)((*yyvaluep).insert_method_t)->deep_delete(); }
#line 2596 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 269: /* row_format  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).row_format_t)!=NULL)((*yyvaluep).row_format_t)->deep_delete(); }
#line 2602 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 270: /* opt_op_comma  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_op_comma_t)!=NULL)((*yyvaluep).opt_op_comma_t)->deep_delete(); }
#line 2608 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 271: /* opt_ignore_or_replace  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_ignore_or_replace_t)!=NULL)((*yyvaluep).opt_ignore_or_replace_t)->deep_delete(); }
#line 2614 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 272: /* opt_view_algorithm  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_view_algorithm_t)!=NULL)((*yyvaluep).opt_view_algorithm_t)->deep_delete(); }
#line 2620 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 273: /* opt_sql_security  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_sql_security_t)!=NULL)((*yyvaluep).opt_sql_security_t)->deep_delete(); }
#line 2626 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 274: /* opt_index_option  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_index_option_t)!=NULL)((*yyvaluep).opt_index_option_t)->deep_delete(); }
#line 2632 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 275: /* opt_extra_option  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_extra_option_t)!=NULL)((*yyvaluep).opt_extra_option_t)->deep_delete(); }
#line 2638 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 276: /* index_algorithm_option  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).index_algorithm_option_t)!=NULL)((*yyvaluep).index_algorithm_option_t)->deep_delete(); }
#line 2644 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 277: /* lock_option  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).lock_option_t)!=NULL)((*yyvaluep).lock_option_t)->deep_delete(); }
#line 2650 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 278: /* opt_op_equal  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_op_equal_t)!=NULL)((*yyvaluep).opt_op_equal_t)->deep_delete(); }
#line 2656 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 279: /* trigger_events  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).trigger_events_t)!=NULL)((*yyvaluep).trigger_events_t)->deep_delete(); }
#line 2662 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 280: /* trigger_name  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).trigger_name_t)!=NULL)((*yyvaluep).trigger_name_t)->deep_delete(); }
#line 2668 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 281: /* trigger_action_time  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).trigger_action_time_t)!=NULL)((*yyvaluep).trigger_action_time_t)->deep_delete(); }
#line 2674 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 282: /* drop_index_stmt  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).drop_index_stmt_t)!=NULL)((*yyvaluep).drop_index_stmt_t)->deep_delete(); }
#line 2680 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 283: /* drop_table_stmt  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).drop_table_stmt_t)!=NULL)((*yyvaluep).drop_table_stmt_t)->deep_delete(); }
#line 2686 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 284: /* table_name_list  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).table_name_list_t)!=NULL)((*yyvaluep).table_name_list_t)->deep_delete(); }
#line 2692 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 285: /* opt_restrict_or_cascade  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_restrict_or_cascade_t)!=NULL)((*yyvaluep).opt_restrict_or_cascade_t)->deep_delete(); }
#line 2698 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 286: /* drop_trigger_stmt  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).drop_trigger_stmt_t)!=NULL)((*yyvaluep).drop_trigger_stmt_t)->deep_delete(); }
#line 2704 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 287: /* drop_view_stmt  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).drop_view_stmt_t)!=NULL)((*yyvaluep).drop_view_stmt_t)->deep_delete(); }
#line 2710 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 288: /* insert_stmt  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).insert_stmt_t)!=NULL)((*yyvaluep).insert_stmt_t)->deep_delete(); }
#line 2716 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 289: /* opt_priority  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_priority_t)!=NULL)((*yyvaluep).opt_priority_t)->deep_delete(); }
#line 2722 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 290: /* opt_low_priority  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_low_priority_t)!=NULL)((*yyvaluep).opt_low_priority_t)->deep_delete(); }
#line 2728 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 291: /* opt_into  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_into_t)!=NULL)((*yyvaluep).opt_into_t)->deep_delete(); }
#line 2734 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 292: /* value_or_values  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).value_or_values_t)!=NULL)((*yyvaluep).value_or_values_t)->deep_delete(); }
#line 2740 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 293: /* super_value_list  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).super_value_list_t)!=NULL)((*yyvaluep).super_value_list_t)->deep_delete(); }
#line 2746 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 294: /* value_list  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).value_list_t)!=NULL)((*yyvaluep).value_list_t)->deep_delete(); }
#line 2752 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 295: /* value  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).value_t)!=NULL)((*yyvaluep).value_t)->deep_delete(); }
#line 2758 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 296: /* opt_as_row_alias  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_as_row_alias_t)!=NULL)((*yyvaluep).opt_as_row_alias_t)->deep_delete(); }
#line 2764 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 297: /* row_alias  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).row_alias_t)!=NULL)((*yyvaluep).row_alias_t)->deep_delete(); }
#line 2770 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 298: /* opt_col_alias  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_col_alias_t)!=NULL)((*yyvaluep).opt_col_alias_t)->deep_delete(); }
#line 2776 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 299: /* col_alias_list  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).col_alias_list_t)!=NULL)((*yyvaluep).col_alias_list_t)->deep_delete(); }
#line 2782 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 300: /* col_alias  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).col_alias_t)!=NULL)((*yyvaluep).col_alias_t)->deep_delete(); }
#line 2788 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 301: /* opt_on_duplicate  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_on_duplicate_t)!=NULL)((*yyvaluep).opt_on_duplicate_t)->deep_delete(); }
#line 2794 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 302: /* key_part_list  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).key_part_list_t)!=NULL)((*yyvaluep).key_part_list_t)->deep_delete(); }
#line 2800 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 303: /* key_part  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).key_part_t)!=NULL)((*yyvaluep).key_part_t)->deep_delete(); }
#line 2806 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 304: /* update_stmt  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).update_stmt_t)!=NULL)((*yyvaluep).update_stmt_t)->deep_delete(); }
#line 2812 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 305: /* opt_ignore  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_ignore_t)!=NULL)((*yyvaluep).opt_ignore_t)->deep_delete(); }
#line 2818 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 306: /* alter_action  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).alter_action_t)!=NULL)((*yyvaluep).alter_action_t)->deep_delete(); }
#line 2824 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 307: /* alter_constant_action  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).alter_constant_action_t)!=NULL)((*yyvaluep).alter_constant_action_t)->deep_delete(); }
#line 2830 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 308: /* opt_create_definition_list_p  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_create_definition_list_p_t)!=NULL)((*yyvaluep).opt_create_definition_list_p_t)->deep_delete(); }
#line 2836 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 309: /* create_definition_list  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).create_definition_list_t)!=NULL)((*yyvaluep).create_definition_list_t)->deep_delete(); }
#line 2842 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 310: /* create_definition  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).create_definition_t)!=NULL)((*yyvaluep).create_definition_t)->deep_delete(); }
#line 2848 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 311: /* column_definition  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).column_definition_t)!=NULL)((*yyvaluep).column_definition_t)->deep_delete(); }
#line 2854 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 312: /* fulltext_or_spatial  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).fulltext_or_spatial_t)!=NULL)((*yyvaluep).fulltext_or_spatial_t)->deep_delete(); }
#line 2860 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 313: /* opt_index_or_key  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_index_or_key_t)!=NULL)((*yyvaluep).opt_index_or_key_t)->deep_delete(); }
#line 2866 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 314: /* index_or_key  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).index_or_key_t)!=NULL)((*yyvaluep).index_or_key_t)->deep_delete(); }
#line 2872 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 315: /* opt_index_name  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_index_name_t)!=NULL)((*yyvaluep).opt_index_name_t)->deep_delete(); }
#line 2878 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 316: /* opt_null_not_null  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_null_not_null_t)!=NULL)((*yyvaluep).opt_null_not_null_t)->deep_delete(); }
#line 2884 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 317: /* opt_visible_invisible  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_visible_invisible_t)!=NULL)((*yyvaluep).opt_visible_invisible_t)->deep_delete(); }
#line 2890 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 318: /* visible_invisible  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).visible_invisible_t)!=NULL)((*yyvaluep).visible_invisible_t)->deep_delete(); }
#line 2896 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 319: /* opt_auto_increment  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_auto_increment_t)!=NULL)((*yyvaluep).opt_auto_increment_t)->deep_delete(); }
#line 2902 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 320: /* opt_unique_primary  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_unique_primary_t)!=NULL)((*yyvaluep).opt_unique_primary_t)->deep_delete(); }
#line 2908 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 321: /* opt_column_format  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_column_format_t)!=NULL)((*yyvaluep).opt_column_format_t)->deep_delete(); }
#line 2914 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 322: /* column_format  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).column_format_t)!=NULL)((*yyvaluep).column_format_t)->deep_delete(); }
#line 2920 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 323: /* opt_storage  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_storage_t)!=NULL)((*yyvaluep).opt_storage_t)->deep_delete(); }
#line 2926 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 324: /* storage  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).storage_t)!=NULL)((*yyvaluep).storage_t)->deep_delete(); }
#line 2932 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 325: /* opt_reference_definition  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_reference_definition_t)!=NULL)((*yyvaluep).opt_reference_definition_t)->deep_delete(); }
#line 2938 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 326: /* reference_definition  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).reference_definition_t)!=NULL)((*yyvaluep).reference_definition_t)->deep_delete(); }
#line 2944 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 327: /* opt_match  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_match_t)!=NULL)((*yyvaluep).opt_match_t)->deep_delete(); }
#line 2950 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 328: /* opt_on_delete  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_on_delete_t)!=NULL)((*yyvaluep).opt_on_delete_t)->deep_delete(); }
#line 2956 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 329: /* opt_on_update  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_on_update_t)!=NULL)((*yyvaluep).opt_on_update_t)->deep_delete(); }
#line 2962 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 330: /* reference_option  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).reference_option_t)!=NULL)((*yyvaluep).reference_option_t)->deep_delete(); }
#line 2968 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 331: /* opt_check_constraint_definition  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_check_constraint_definition_t)!=NULL)((*yyvaluep).opt_check_constraint_definition_t)->deep_delete(); }
#line 2974 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 332: /* check_constraint_definition  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).check_constraint_definition_t)!=NULL)((*yyvaluep).check_constraint_definition_t)->deep_delete(); }
#line 2980 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 333: /* opt_constraint_symbol  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_constraint_symbol_t)!=NULL)((*yyvaluep).opt_constraint_symbol_t)->deep_delete(); }
#line 2986 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 334: /* opt_enforced  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_enforced_t)!=NULL)((*yyvaluep).opt_enforced_t)->deep_delete(); }
#line 2992 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 335: /* column_def_list  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).column_def_list_t)!=NULL)((*yyvaluep).column_def_list_t)->deep_delete(); }
#line 2998 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 336: /* column_def  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).column_def_t)!=NULL)((*yyvaluep).column_def_t)->deep_delete(); }
#line 3004 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 337: /* opt_temp  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_temp_t)!=NULL)((*yyvaluep).opt_temp_t)->deep_delete(); }
#line 3010 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 338: /* opt_check_option  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_check_option_t)!=NULL)((*yyvaluep).opt_check_option_t)->deep_delete(); }
#line 3016 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 339: /* opt_column_name_list_p  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_column_name_list_p_t)!=NULL)((*yyvaluep).opt_column_name_list_p_t)->deep_delete(); }
#line 3022 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 340: /* assignment_list  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).assignment_list_t)!=NULL)((*yyvaluep).assignment_list_t)->deep_delete(); }
#line 3028 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 341: /* assignment  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).assignment_t)!=NULL)((*yyvaluep).assignment_t)->deep_delete(); }
#line 3034 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 342: /* opt_as_alias  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_as_alias_t)!=NULL)((*yyvaluep).opt_as_alias_t)->deep_delete(); }
#line 3040 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 343: /* expr  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).expr_t)!=NULL)((*yyvaluep).expr_t)->deep_delete(); }
#line 3046 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 344: /* operand  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).operand_t)!=NULL)((*yyvaluep).operand_t)->deep_delete(); }
#line 3052 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 345: /* cast_expr  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).cast_expr_t)!=NULL)((*yyvaluep).cast_expr_t)->deep_delete(); }
#line 3058 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 346: /* scalar_expr  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).scalar_expr_t)!=NULL)((*yyvaluep).scalar_expr_t)->deep_delete(); }
#line 3064 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 347: /* unary_expr  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).unary_expr_t)!=NULL)((*yyvaluep).unary_expr_t)->deep_delete(); }
#line 3070 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 348: /* binary_expr  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).binary_expr_t)!=NULL)((*yyvaluep).binary_expr_t)->deep_delete(); }
#line 3076 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 349: /* logic_expr  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).logic_expr_t)!=NULL)((*yyvaluep).logic_expr_t)->deep_delete(); }
#line 3082 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 350: /* in_expr  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).in_expr_t)!=NULL)((*yyvaluep).in_expr_t)->deep_delete(); }
#line 3088 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 351: /* case_expr  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).case_expr_t)!=NULL)((*yyvaluep).case_expr_t)->deep_delete(); }
#line 3094 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 352: /* between_expr  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).between_expr_t)!=NULL)((*yyvaluep).between_expr_t)->deep_delete(); }
#line 3100 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 353: /* exists_expr  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).exists_expr_t)!=NULL)((*yyvaluep).exists_expr_t)->deep_delete(); }
#line 3106 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 354: /* function_expr  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).function_expr_t)!=NULL)((*yyvaluep).function_expr_t)->deep_delete(); }
#line 3112 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 355: /* opt_distinct  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_distinct_t)!=NULL)((*yyvaluep).opt_distinct_t)->deep_delete(); }
#line 3118 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 356: /* opt_over_clause  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_over_clause_t)!=NULL)((*yyvaluep).opt_over_clause_t)->deep_delete(); }
#line 3124 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 357: /* case_list  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).case_list_t)!=NULL)((*yyvaluep).case_list_t)->deep_delete(); }
#line 3130 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 358: /* case_clause  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).case_clause_t)!=NULL)((*yyvaluep).case_clause_t)->deep_delete(); }
#line 3136 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 359: /* comp_expr  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).comp_expr_t)!=NULL)((*yyvaluep).comp_expr_t)->deep_delete(); }
#line 3142 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 360: /* extract_expr  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).extract_expr_t)!=NULL)((*yyvaluep).extract_expr_t)->deep_delete(); }
#line 3148 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 361: /* datetime_field  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).datetime_field_t)!=NULL)((*yyvaluep).datetime_field_t)->deep_delete(); }
#line 3154 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 362: /* array_expr  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).array_expr_t)!=NULL)((*yyvaluep).array_expr_t)->deep_delete(); }
#line 3160 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 363: /* array_index  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).array_index_t)!=NULL)((*yyvaluep).array_index_t)->deep_delete(); }
#line 3166 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 364: /* literal  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).literal_t)!=NULL)((*yyvaluep).literal_t)->deep_delete(); }
#line 3172 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 365: /* string_literal  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).string_literal_t)!=NULL)((*yyvaluep).string_literal_t)->deep_delete(); }
#line 3178 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 366: /* bool_literal  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).bool_literal_t)!=NULL)((*yyvaluep).bool_literal_t)->deep_delete(); }
#line 3184 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 367: /* num_literal  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).num_literal_t)!=NULL)((*yyvaluep).num_literal_t)->deep_delete(); }
#line 3190 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 368: /* int_literal  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).int_literal_t)!=NULL)((*yyvaluep).int_literal_t)->deep_delete(); }
#line 3196 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 369: /* float_literal  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).float_literal_t)!=NULL)((*yyvaluep).float_literal_t)->deep_delete(); }
#line 3202 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 370: /* opt_column  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_column_t)!=NULL)((*yyvaluep).opt_column_t)->deep_delete(); }
#line 3208 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 371: /* trigger_body  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).trigger_body_t)!=NULL)((*yyvaluep).trigger_body_t)->deep_delete(); }
#line 3214 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 372: /* opt_if_not_exist  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_if_not_exist_t)!=NULL)((*yyvaluep).opt_if_not_exist_t)->deep_delete(); }
#line 3220 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 373: /* opt_if_exist  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_if_exist_t)!=NULL)((*yyvaluep).opt_if_exist_t)->deep_delete(); }
#line 3226 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 374: /* identifier  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).identifier_t)!=NULL)((*yyvaluep).identifier_t)->deep_delete(); }
#line 3232 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 375: /* as_alias  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).as_alias_t)!=NULL)((*yyvaluep).as_alias_t)->deep_delete(); }
#line 3238 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 376: /* table_name  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).table_name_t)!=NULL)((*yyvaluep).table_name_t)->deep_delete(); }
#line 3244 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 377: /* index_name  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).index_name_t)!=NULL)((*yyvaluep).index_name_t)->deep_delete(); }
#line 3250 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 378: /* column_name  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).column_name_t)!=NULL)((*yyvaluep).column_name_t)->deep_delete(); }
#line 3256 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 379: /* expr_column_name  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).expr_column_name_t)!=NULL)((*yyvaluep).expr_column_name_t)->deep_delete(); }
#line 3262 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 380: /* opt_index_keyword  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_index_keyword_t)!=NULL)((*yyvaluep).opt_index_keyword_t)->deep_delete(); }
#line 3268 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 381: /* view_name  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).view_name_t)!=NULL)((*yyvaluep).view_name_t)->deep_delete(); }
#line 3274 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 382: /* function_name  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).function_name_t)!=NULL)((*yyvaluep).function_name_t)->deep_delete(); }
#line 3280 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 383: /* binary_op  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).binary_op_t)!=NULL)((*yyvaluep).binary_op_t)->deep_delete(); }
#line 3286 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 384: /* opt_not  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_not_t)!=NULL)((*yyvaluep).opt_not_t)->deep_delete(); }
#line 3292 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 385: /* symbol  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).symbol_t)!=NULL)((*yyvaluep).symbol_t)->deep_delete(); }
#line 3298 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 386: /* data_type  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).data_type_t)!=NULL)((*yyvaluep).data_type_t)->deep_delete(); }
#line 3304 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 387: /* character_type  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).character_type_t)!=NULL)((*yyvaluep).character_type_t)->deep_delete(); }
#line 3310 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 388: /* opt_length  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_length_t)!=NULL)((*yyvaluep).opt_length_t)->deep_delete(); }
#line 3316 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 389: /* character_conflicta  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).character_conflicta_t)!=NULL)((*yyvaluep).character_conflicta_t)->deep_delete(); }
#line 3322 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 390: /* numeric_type  */
#line 470 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).numeric_type_t)!=NULL)((*yyvaluep).numeric_type_t)->deep_delete(); }
#line 3328 "bison_parser.cpp" /* yacc.c:1257  */
        break;


      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (Program* result, yyscan_t scanner)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined FF_LTYPE_IS_TRIVIAL && FF_LTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (&yylval, &yylloc, scanner);
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 475 "bison.y" /* yacc.c:1646  */
    {
		(yyval.program_t) = result;
		(yyval.program_t)->case_idx_ = CASE0;
		(yyval.program_t)->stmtlist_ = (yyvsp[0].stmtlist_t);
		(yyval.program_t) = NULL;
	}
#line 3627 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 484 "bison.y" /* yacc.c:1646  */
    {
		(yyval.stmtlist_t) = new Stmtlist();
		(yyval.stmtlist_t)->case_idx_ = CASE0;
		(yyval.stmtlist_t)->stmt_ = (yyvsp[-2].stmt_t);
		(yyval.stmtlist_t)->stmtlist_ = (yyvsp[0].stmtlist_t);
	}
#line 3638 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 490 "bison.y" /* yacc.c:1646  */
    {
		(yyval.stmtlist_t) = new Stmtlist();
		(yyval.stmtlist_t)->case_idx_ = CASE1;
		(yyval.stmtlist_t)->stmt_ = (yyvsp[-1].stmt_t);
	}
#line 3648 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 498 "bison.y" /* yacc.c:1646  */
    {
		(yyval.stmt_t) = new Stmt();
		(yyval.stmt_t)->case_idx_ = CASE0;
		(yyval.stmt_t)->create_stmt_ = (yyvsp[0].create_stmt_t);
	}
#line 3658 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 503 "bison.y" /* yacc.c:1646  */
    {
		(yyval.stmt_t) = new Stmt();
		(yyval.stmt_t)->case_idx_ = CASE1;
		(yyval.stmt_t)->drop_stmt_ = (yyvsp[0].drop_stmt_t);
	}
#line 3668 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 508 "bison.y" /* yacc.c:1646  */
    {
		(yyval.stmt_t) = new Stmt();
		(yyval.stmt_t)->case_idx_ = CASE2;
		(yyval.stmt_t)->select_stmt_ = (yyvsp[0].select_stmt_t);
	}
#line 3678 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 513 "bison.y" /* yacc.c:1646  */
    {
		(yyval.stmt_t) = new Stmt();
		(yyval.stmt_t)->case_idx_ = CASE3;
		(yyval.stmt_t)->update_stmt_ = (yyvsp[0].update_stmt_t);
	}
#line 3688 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 518 "bison.y" /* yacc.c:1646  */
    {
		(yyval.stmt_t) = new Stmt();
		(yyval.stmt_t)->case_idx_ = CASE4;
		(yyval.stmt_t)->insert_stmt_ = (yyvsp[0].insert_stmt_t);
	}
#line 3698 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 523 "bison.y" /* yacc.c:1646  */
    {
		(yyval.stmt_t) = new Stmt();
		(yyval.stmt_t)->case_idx_ = CASE5;
		(yyval.stmt_t)->alter_stmt_ = (yyvsp[0].alter_stmt_t);
	}
#line 3708 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 531 "bison.y" /* yacc.c:1646  */
    {
		(yyval.create_stmt_t) = new CreateStmt();
		(yyval.create_stmt_t)->case_idx_ = CASE0;
		(yyval.create_stmt_t)->create_table_stmt_ = (yyvsp[0].create_table_stmt_t);
	}
#line 3718 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 536 "bison.y" /* yacc.c:1646  */
    {
		(yyval.create_stmt_t) = new CreateStmt();
		(yyval.create_stmt_t)->case_idx_ = CASE1;
		(yyval.create_stmt_t)->create_index_stmt_ = (yyvsp[0].create_index_stmt_t);
	}
#line 3728 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 541 "bison.y" /* yacc.c:1646  */
    {
		(yyval.create_stmt_t) = new CreateStmt();
		(yyval.create_stmt_t)->case_idx_ = CASE2;
		(yyval.create_stmt_t)->create_trigger_stmt_ = (yyvsp[0].create_trigger_stmt_t);
	}
#line 3738 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 546 "bison.y" /* yacc.c:1646  */
    {
		(yyval.create_stmt_t) = new CreateStmt();
		(yyval.create_stmt_t)->case_idx_ = CASE3;
		(yyval.create_stmt_t)->create_view_stmt_ = (yyvsp[0].create_view_stmt_t);
	}
#line 3748 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 554 "bison.y" /* yacc.c:1646  */
    {
		(yyval.drop_stmt_t) = new DropStmt();
		(yyval.drop_stmt_t)->case_idx_ = CASE0;
		(yyval.drop_stmt_t)->drop_index_stmt_ = (yyvsp[0].drop_index_stmt_t);
	}
#line 3758 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 559 "bison.y" /* yacc.c:1646  */
    {
		(yyval.drop_stmt_t) = new DropStmt();
		(yyval.drop_stmt_t)->case_idx_ = CASE1;
		(yyval.drop_stmt_t)->drop_table_stmt_ = (yyvsp[0].drop_table_stmt_t);
	}
#line 3768 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 564 "bison.y" /* yacc.c:1646  */
    {
		(yyval.drop_stmt_t) = new DropStmt();
		(yyval.drop_stmt_t)->case_idx_ = CASE2;
		(yyval.drop_stmt_t)->drop_trigger_stmt_ = (yyvsp[0].drop_trigger_stmt_t);
	}
#line 3778 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 569 "bison.y" /* yacc.c:1646  */
    {
		(yyval.drop_stmt_t) = new DropStmt();
		(yyval.drop_stmt_t)->case_idx_ = CASE3;
		(yyval.drop_stmt_t)->drop_view_stmt_ = (yyvsp[0].drop_view_stmt_t);
	}
#line 3788 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 577 "bison.y" /* yacc.c:1646  */
    {
		(yyval.alter_stmt_t) = new AlterStmt();
		(yyval.alter_stmt_t)->case_idx_ = CASE0;
		(yyval.alter_stmt_t)->table_name_ = (yyvsp[-1].table_name_t);
		(yyval.alter_stmt_t)->alter_action_ = (yyvsp[0].alter_action_t);
	}
#line 3799 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 586 "bison.y" /* yacc.c:1646  */
    {
		(yyval.select_stmt_t) = new SelectStmt();
		(yyval.select_stmt_t)->case_idx_ = CASE0;
		(yyval.select_stmt_t)->select_no_parens_ = (yyvsp[0].select_no_parens_t);
	}
#line 3809 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 591 "bison.y" /* yacc.c:1646  */
    {
		(yyval.select_stmt_t) = new SelectStmt();
		(yyval.select_stmt_t)->case_idx_ = CASE1;
		(yyval.select_stmt_t)->select_with_parens_ = (yyvsp[0].select_with_parens_t);
	}
#line 3819 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 599 "bison.y" /* yacc.c:1646  */
    {
		(yyval.select_with_parens_t) = new SelectWithParens();
		(yyval.select_with_parens_t)->case_idx_ = CASE0;
		(yyval.select_with_parens_t)->select_no_parens_ = (yyvsp[-1].select_no_parens_t);
	}
#line 3829 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 604 "bison.y" /* yacc.c:1646  */
    {
		(yyval.select_with_parens_t) = new SelectWithParens();
		(yyval.select_with_parens_t)->case_idx_ = CASE1;
		(yyval.select_with_parens_t)->select_with_parens_ = (yyvsp[-1].select_with_parens_t);
	}
#line 3839 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 612 "bison.y" /* yacc.c:1646  */
    {
		(yyval.select_no_parens_t) = new SelectNoParens();
		(yyval.select_no_parens_t)->case_idx_ = CASE0;
		(yyval.select_no_parens_t)->opt_with_clause_ = (yyvsp[-3].opt_with_clause_t);
		(yyval.select_no_parens_t)->select_clause_list_ = (yyvsp[-2].select_clause_list_t);
		(yyval.select_no_parens_t)->opt_order_clause_ = (yyvsp[-1].opt_order_clause_t);
		(yyval.select_no_parens_t)->opt_limit_clause_ = (yyvsp[0].opt_limit_clause_t);
	}
#line 3852 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 623 "bison.y" /* yacc.c:1646  */
    {
		(yyval.select_clause_list_t) = new SelectClauseList();
		(yyval.select_clause_list_t)->case_idx_ = CASE0;
		(yyval.select_clause_list_t)->select_clause_ = (yyvsp[0].select_clause_t);
	}
#line 3862 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 628 "bison.y" /* yacc.c:1646  */
    {
		(yyval.select_clause_list_t) = new SelectClauseList();
		(yyval.select_clause_list_t)->case_idx_ = CASE1;
		(yyval.select_clause_list_t)->select_clause_ = (yyvsp[-2].select_clause_t);
		(yyval.select_clause_list_t)->combine_clause_ = (yyvsp[-1].combine_clause_t);
		(yyval.select_clause_list_t)->select_clause_list_ = (yyvsp[0].select_clause_list_t);
	}
#line 3874 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 638 "bison.y" /* yacc.c:1646  */
    {
		(yyval.select_clause_t) = new SelectClause();
		(yyval.select_clause_t)->case_idx_ = CASE0;
		(yyval.select_clause_t)->opt_all_or_distinct_ = (yyvsp[-5].opt_all_or_distinct_t);
		(yyval.select_clause_t)->select_target_ = (yyvsp[-4].select_target_t);
		(yyval.select_clause_t)->opt_from_clause_ = (yyvsp[-3].opt_from_clause_t);
		(yyval.select_clause_t)->opt_where_clause_ = (yyvsp[-2].opt_where_clause_t);
		(yyval.select_clause_t)->opt_group_clause_ = (yyvsp[-1].opt_group_clause_t);
		(yyval.select_clause_t)->opt_window_clause_ = (yyvsp[0].opt_window_clause_t);
	}
#line 3889 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 651 "bison.y" /* yacc.c:1646  */
    {
		(yyval.combine_clause_t) = new CombineClause();
		(yyval.combine_clause_t)->case_idx_ = CASE0;
	}
#line 3898 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 658 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_from_clause_t) = new OptFromClause();
		(yyval.opt_from_clause_t)->case_idx_ = CASE0;
		(yyval.opt_from_clause_t)->from_clause_ = (yyvsp[0].from_clause_t);
	}
#line 3908 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 663 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_from_clause_t) = new OptFromClause();
		(yyval.opt_from_clause_t)->case_idx_ = CASE1;
	}
#line 3917 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 670 "bison.y" /* yacc.c:1646  */
    {
		(yyval.select_target_t) = new SelectTarget();
		(yyval.select_target_t)->case_idx_ = CASE0;
		(yyval.select_target_t)->expr_list_ = (yyvsp[0].expr_list_t);
	}
#line 3927 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 678 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_window_clause_t) = new OptWindowClause();
		(yyval.opt_window_clause_t)->case_idx_ = CASE0;
		(yyval.opt_window_clause_t)->window_clause_ = (yyvsp[0].window_clause_t);
	}
#line 3937 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 683 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_window_clause_t) = new OptWindowClause();
		(yyval.opt_window_clause_t)->case_idx_ = CASE1;
	}
#line 3946 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 690 "bison.y" /* yacc.c:1646  */
    {
		(yyval.window_clause_t) = new WindowClause();
		(yyval.window_clause_t)->case_idx_ = CASE0;
		(yyval.window_clause_t)->window_def_list_ = (yyvsp[0].window_def_list_t);
	}
#line 3956 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 698 "bison.y" /* yacc.c:1646  */
    {
		(yyval.window_def_list_t) = new WindowDefList();
		(yyval.window_def_list_t)->case_idx_ = CASE0;
		(yyval.window_def_list_t)->window_def_ = (yyvsp[0].window_def_t);
	}
#line 3966 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 703 "bison.y" /* yacc.c:1646  */
    {
		(yyval.window_def_list_t) = new WindowDefList();
		(yyval.window_def_list_t)->case_idx_ = CASE1;
		(yyval.window_def_list_t)->window_def_ = (yyvsp[-2].window_def_t);
		(yyval.window_def_list_t)->window_def_list_ = (yyvsp[0].window_def_list_t);
	}
#line 3977 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 712 "bison.y" /* yacc.c:1646  */
    {
		(yyval.window_def_t) = new WindowDef();
		(yyval.window_def_t)->case_idx_ = CASE0;
		(yyval.window_def_t)->window_name_ = (yyvsp[-4].window_name_t);
		(yyval.window_def_t)->window_ = (yyvsp[-1].window_t);
	}
#line 3988 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 721 "bison.y" /* yacc.c:1646  */
    {
		(yyval.window_name_t) = new WindowName();
		(yyval.window_name_t)->case_idx_ = CASE0;
		(yyval.window_name_t)->identifier_ = (yyvsp[0].identifier_t);
	}
#line 3998 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 729 "bison.y" /* yacc.c:1646  */
    {
		(yyval.window_t) = new Window();
		(yyval.window_t)->case_idx_ = CASE0;
		(yyval.window_t)->opt_exist_window_name_ = (yyvsp[-3].opt_exist_window_name_t);
		(yyval.window_t)->opt_partition_ = (yyvsp[-2].opt_partition_t);
		(yyval.window_t)->opt_order_clause_ = (yyvsp[-1].opt_order_clause_t);
		(yyval.window_t)->opt_frame_clause_ = (yyvsp[0].opt_frame_clause_t);
	}
#line 4011 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 740 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_partition_t) = new OptPartition();
		(yyval.opt_partition_t)->case_idx_ = CASE0;
		(yyval.opt_partition_t)->expr_list_ = (yyvsp[0].expr_list_t);
	}
#line 4021 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 745 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_partition_t) = new OptPartition();
		(yyval.opt_partition_t)->case_idx_ = CASE1;
	}
#line 4030 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 752 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_frame_clause_t) = new OptFrameClause();
		(yyval.opt_frame_clause_t)->case_idx_ = CASE0;
		(yyval.opt_frame_clause_t)->range_or_rows_ = (yyvsp[-1].range_or_rows_t);
		(yyval.opt_frame_clause_t)->frame_bound_start_ = (yyvsp[0].frame_bound_start_t);
	}
#line 4041 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 758 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_frame_clause_t) = new OptFrameClause();
		(yyval.opt_frame_clause_t)->case_idx_ = CASE1;
		(yyval.opt_frame_clause_t)->range_or_rows_ = (yyvsp[-4].range_or_rows_t);
		(yyval.opt_frame_clause_t)->frame_bound_start_ = (yyvsp[-2].frame_bound_start_t);
		(yyval.opt_frame_clause_t)->frame_bound_end_ = (yyvsp[0].frame_bound_end_t);
	}
#line 4053 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 765 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_frame_clause_t) = new OptFrameClause();
		(yyval.opt_frame_clause_t)->case_idx_ = CASE2;
	}
#line 4062 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 772 "bison.y" /* yacc.c:1646  */
    {
		(yyval.range_or_rows_t) = new RangeOrRows();
		(yyval.range_or_rows_t)->case_idx_ = CASE0;
	}
#line 4071 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 776 "bison.y" /* yacc.c:1646  */
    {
		(yyval.range_or_rows_t) = new RangeOrRows();
		(yyval.range_or_rows_t)->case_idx_ = CASE1;
	}
#line 4080 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 780 "bison.y" /* yacc.c:1646  */
    {
		(yyval.range_or_rows_t) = new RangeOrRows();
		(yyval.range_or_rows_t)->case_idx_ = CASE2;
	}
#line 4089 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 787 "bison.y" /* yacc.c:1646  */
    {
		(yyval.frame_bound_start_t) = new FrameBoundStart();
		(yyval.frame_bound_start_t)->case_idx_ = CASE0;
		(yyval.frame_bound_start_t)->frame_bound_ = (yyvsp[0].frame_bound_t);
	}
#line 4099 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 792 "bison.y" /* yacc.c:1646  */
    {
		(yyval.frame_bound_start_t) = new FrameBoundStart();
		(yyval.frame_bound_start_t)->case_idx_ = CASE1;
	}
#line 4108 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 799 "bison.y" /* yacc.c:1646  */
    {
		(yyval.frame_bound_end_t) = new FrameBoundEnd();
		(yyval.frame_bound_end_t)->case_idx_ = CASE0;
		(yyval.frame_bound_end_t)->frame_bound_ = (yyvsp[0].frame_bound_t);
	}
#line 4118 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 804 "bison.y" /* yacc.c:1646  */
    {
		(yyval.frame_bound_end_t) = new FrameBoundEnd();
		(yyval.frame_bound_end_t)->case_idx_ = CASE1;
	}
#line 4127 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 811 "bison.y" /* yacc.c:1646  */
    {
		(yyval.frame_bound_t) = new FrameBound();
		(yyval.frame_bound_t)->case_idx_ = CASE0;
		(yyval.frame_bound_t)->expr_ = (yyvsp[-1].expr_t);
	}
#line 4137 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 816 "bison.y" /* yacc.c:1646  */
    {
		(yyval.frame_bound_t) = new FrameBound();
		(yyval.frame_bound_t)->case_idx_ = CASE1;
		(yyval.frame_bound_t)->expr_ = (yyvsp[-1].expr_t);
	}
#line 4147 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 821 "bison.y" /* yacc.c:1646  */
    {
		(yyval.frame_bound_t) = new FrameBound();
		(yyval.frame_bound_t)->case_idx_ = CASE2;
	}
#line 4156 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 828 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_exist_window_name_t) = new OptExistWindowName();
		(yyval.opt_exist_window_name_t)->case_idx_ = CASE0;
		(yyval.opt_exist_window_name_t)->identifier_ = (yyvsp[0].identifier_t);
	}
#line 4166 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 833 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_exist_window_name_t) = new OptExistWindowName();
		(yyval.opt_exist_window_name_t)->case_idx_ = CASE1;
	}
#line 4175 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 840 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_group_clause_t) = new OptGroupClause();
		(yyval.opt_group_clause_t)->case_idx_ = CASE0;
		(yyval.opt_group_clause_t)->expr_list_ = (yyvsp[-1].expr_list_t);
		(yyval.opt_group_clause_t)->opt_having_clause_ = (yyvsp[0].opt_having_clause_t);
	}
#line 4186 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 846 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_group_clause_t) = new OptGroupClause();
		(yyval.opt_group_clause_t)->case_idx_ = CASE1;
	}
#line 4195 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 853 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_having_clause_t) = new OptHavingClause();
		(yyval.opt_having_clause_t)->case_idx_ = CASE0;
		(yyval.opt_having_clause_t)->expr_ = (yyvsp[0].expr_t);
	}
#line 4205 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 858 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_having_clause_t) = new OptHavingClause();
		(yyval.opt_having_clause_t)->case_idx_ = CASE1;
	}
#line 4214 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 865 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_where_clause_t) = new OptWhereClause();
		(yyval.opt_where_clause_t)->case_idx_ = CASE0;
		(yyval.opt_where_clause_t)->where_clause_ = (yyvsp[0].where_clause_t);
	}
#line 4224 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 870 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_where_clause_t) = new OptWhereClause();
		(yyval.opt_where_clause_t)->case_idx_ = CASE1;
	}
#line 4233 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 877 "bison.y" /* yacc.c:1646  */
    {
		(yyval.where_clause_t) = new WhereClause();
		(yyval.where_clause_t)->case_idx_ = CASE0;
		(yyval.where_clause_t)->expr_ = (yyvsp[0].expr_t);
	}
#line 4243 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 885 "bison.y" /* yacc.c:1646  */
    {
		(yyval.from_clause_t) = new FromClause();
		(yyval.from_clause_t)->case_idx_ = CASE0;
		(yyval.from_clause_t)->table_ref_ = (yyvsp[0].table_ref_t);
	}
#line 4253 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 893 "bison.y" /* yacc.c:1646  */
    {
		(yyval.table_ref_t) = new TableRef();
		(yyval.table_ref_t)->case_idx_ = CASE0;
		(yyval.table_ref_t)->opt_table_prefix_ = (yyvsp[-5].opt_table_prefix_t);
		(yyval.table_ref_t)->table_name_ = (yyvsp[-4].table_name_t);
		(yyval.table_ref_t)->opt_as_alias_ = (yyvsp[-3].opt_as_alias_t);
		(yyval.table_ref_t)->opt_index_ = (yyvsp[-2].opt_index_t);
		(yyval.table_ref_t)->opt_on_ = (yyvsp[-1].opt_on_t);
		(yyval.table_ref_t)->opt_using_ = (yyvsp[0].opt_using_t);
	}
#line 4268 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 903 "bison.y" /* yacc.c:1646  */
    {
		(yyval.table_ref_t) = new TableRef();
		(yyval.table_ref_t)->case_idx_ = CASE1;
		(yyval.table_ref_t)->opt_table_prefix_ = (yyvsp[-6].opt_table_prefix_t);
		(yyval.table_ref_t)->select_no_parens_ = (yyvsp[-4].select_no_parens_t);
		(yyval.table_ref_t)->opt_as_alias_ = (yyvsp[-2].opt_as_alias_t);
		(yyval.table_ref_t)->opt_on_ = (yyvsp[-1].opt_on_t);
		(yyval.table_ref_t)->opt_using_ = (yyvsp[0].opt_using_t);
	}
#line 4282 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 912 "bison.y" /* yacc.c:1646  */
    {
		(yyval.table_ref_t) = new TableRef();
		(yyval.table_ref_t)->case_idx_ = CASE2;
		(yyval.table_ref_t)->opt_table_prefix_ = (yyvsp[-6].opt_table_prefix_t);
		(yyval.table_ref_t)->table_ref_ = (yyvsp[-4].table_ref_t);
		(yyval.table_ref_t)->opt_as_alias_ = (yyvsp[-2].opt_as_alias_t);
		(yyval.table_ref_t)->opt_on_ = (yyvsp[-1].opt_on_t);
		(yyval.table_ref_t)->opt_using_ = (yyvsp[0].opt_using_t);
	}
#line 4296 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 924 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_index_t) = new OptIndex();
		(yyval.opt_index_t)->case_idx_ = CASE0;
		(yyval.opt_index_t)->column_name_ = (yyvsp[0].column_name_t);
	}
#line 4306 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 929 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_index_t) = new OptIndex();
		(yyval.opt_index_t)->case_idx_ = CASE1;
	}
#line 4315 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 933 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_index_t) = new OptIndex();
		(yyval.opt_index_t)->case_idx_ = CASE2;
	}
#line 4324 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 940 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_on_t) = new OptOn();
		(yyval.opt_on_t)->case_idx_ = CASE0;
		(yyval.opt_on_t)->expr_ = (yyvsp[0].expr_t);
	}
#line 4334 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 945 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_on_t) = new OptOn();
		(yyval.opt_on_t)->case_idx_ = CASE1;
	}
#line 4343 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 952 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_using_t) = new OptUsing();
		(yyval.opt_using_t)->case_idx_ = CASE0;
		(yyval.opt_using_t)->column_name_list_ = (yyvsp[-1].column_name_list_t);
	}
#line 4353 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 957 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_using_t) = new OptUsing();
		(yyval.opt_using_t)->case_idx_ = CASE1;
	}
#line 4362 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 964 "bison.y" /* yacc.c:1646  */
    {
		(yyval.column_name_list_t) = new ColumnNameList();
		(yyval.column_name_list_t)->case_idx_ = CASE0;
		(yyval.column_name_list_t)->column_name_ = (yyvsp[0].column_name_t);
	}
#line 4372 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 969 "bison.y" /* yacc.c:1646  */
    {
		(yyval.column_name_list_t) = new ColumnNameList();
		(yyval.column_name_list_t)->case_idx_ = CASE1;
		(yyval.column_name_list_t)->column_name_ = (yyvsp[-2].column_name_t);
		(yyval.column_name_list_t)->column_name_list_ = (yyvsp[0].column_name_list_t);
	}
#line 4383 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 978 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_table_prefix_t) = new OptTablePrefix();
		(yyval.opt_table_prefix_t)->case_idx_ = CASE0;
		(yyval.opt_table_prefix_t)->table_ref_ = (yyvsp[-1].table_ref_t);
		(yyval.opt_table_prefix_t)->join_op_ = (yyvsp[0].join_op_t);
	}
#line 4394 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 984 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_table_prefix_t) = new OptTablePrefix();
		(yyval.opt_table_prefix_t)->case_idx_ = CASE1;
	}
#line 4403 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 991 "bison.y" /* yacc.c:1646  */
    {
		(yyval.join_op_t) = new JoinOp();
		(yyval.join_op_t)->case_idx_ = CASE0;
	}
#line 4412 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 995 "bison.y" /* yacc.c:1646  */
    {
		(yyval.join_op_t) = new JoinOp();
		(yyval.join_op_t)->case_idx_ = CASE1;
	}
#line 4421 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 999 "bison.y" /* yacc.c:1646  */
    {
		(yyval.join_op_t) = new JoinOp();
		(yyval.join_op_t)->case_idx_ = CASE2;
		(yyval.join_op_t)->opt_join_type_ = (yyvsp[-1].opt_join_type_t);
	}
#line 4431 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 1007 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_join_type_t) = new OptJoinType();
		(yyval.opt_join_type_t)->case_idx_ = CASE0;
	}
#line 4440 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 1011 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_join_type_t) = new OptJoinType();
		(yyval.opt_join_type_t)->case_idx_ = CASE1;
	}
#line 4449 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 1015 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_join_type_t) = new OptJoinType();
		(yyval.opt_join_type_t)->case_idx_ = CASE2;
	}
#line 4458 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 1019 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_join_type_t) = new OptJoinType();
		(yyval.opt_join_type_t)->case_idx_ = CASE3;
	}
#line 4467 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 1023 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_join_type_t) = new OptJoinType();
		(yyval.opt_join_type_t)->case_idx_ = CASE4;
	}
#line 4476 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 1030 "bison.y" /* yacc.c:1646  */
    {
		(yyval.expr_list_t) = new ExprList();
		(yyval.expr_list_t)->case_idx_ = CASE0;
		(yyval.expr_list_t)->expr_ = (yyvsp[-3].expr_t);
		(yyval.expr_list_t)->opt_as_alias_ = (yyvsp[-2].opt_as_alias_t);
		(yyval.expr_list_t)->expr_list_ = (yyvsp[0].expr_list_t);
	}
#line 4488 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 1037 "bison.y" /* yacc.c:1646  */
    {
		(yyval.expr_list_t) = new ExprList();
		(yyval.expr_list_t)->case_idx_ = CASE1;
		(yyval.expr_list_t)->expr_ = (yyvsp[-1].expr_t);
		(yyval.expr_list_t)->opt_as_alias_ = (yyvsp[0].opt_as_alias_t);
	}
#line 4499 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 1046 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_limit_clause_t) = new OptLimitClause();
		(yyval.opt_limit_clause_t)->case_idx_ = CASE0;
		(yyval.opt_limit_clause_t)->limit_clause_ = (yyvsp[0].limit_clause_t);
	}
#line 4509 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 1051 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_limit_clause_t) = new OptLimitClause();
		(yyval.opt_limit_clause_t)->case_idx_ = CASE1;
	}
#line 4518 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 1058 "bison.y" /* yacc.c:1646  */
    {
		(yyval.limit_clause_t) = new LimitClause();
		(yyval.limit_clause_t)->case_idx_ = CASE0;
		(yyval.limit_clause_t)->expr_1_ = (yyvsp[0].expr_t);
	}
#line 4528 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 1063 "bison.y" /* yacc.c:1646  */
    {
		(yyval.limit_clause_t) = new LimitClause();
		(yyval.limit_clause_t)->case_idx_ = CASE1;
		(yyval.limit_clause_t)->expr_1_ = (yyvsp[-2].expr_t);
		(yyval.limit_clause_t)->expr_2_ = (yyvsp[0].expr_t);
	}
#line 4539 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 1069 "bison.y" /* yacc.c:1646  */
    {
		(yyval.limit_clause_t) = new LimitClause();
		(yyval.limit_clause_t)->case_idx_ = CASE2;
		(yyval.limit_clause_t)->expr_1_ = (yyvsp[-2].expr_t);
		(yyval.limit_clause_t)->expr_2_ = (yyvsp[0].expr_t);
	}
#line 4550 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 1078 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_limit_row_count_t) = new OptLimitRowCount();
		(yyval.opt_limit_row_count_t)->case_idx_ = CASE0;
		(yyval.opt_limit_row_count_t)->expr_ = (yyvsp[0].expr_t);
	}
#line 4560 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 1083 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_limit_row_count_t) = new OptLimitRowCount();
		(yyval.opt_limit_row_count_t)->case_idx_ = CASE1;
	}
#line 4569 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 1090 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_order_clause_t) = new OptOrderClause();
		(yyval.opt_order_clause_t)->case_idx_ = CASE0;
		(yyval.opt_order_clause_t)->order_item_list_ = (yyvsp[0].order_item_list_t);
	}
#line 4579 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 1095 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_order_clause_t) = new OptOrderClause();
		(yyval.opt_order_clause_t)->case_idx_ = CASE1;
	}
#line 4588 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 1102 "bison.y" /* yacc.c:1646  */
    {
		(yyval.order_item_list_t) = new OrderItemList();
		(yyval.order_item_list_t)->case_idx_ = CASE0;
		(yyval.order_item_list_t)->order_item_ = (yyvsp[0].order_item_t);
	}
#line 4598 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 1107 "bison.y" /* yacc.c:1646  */
    {
		(yyval.order_item_list_t) = new OrderItemList();
		(yyval.order_item_list_t)->case_idx_ = CASE1;
		(yyval.order_item_list_t)->order_item_ = (yyvsp[-2].order_item_t);
		(yyval.order_item_list_t)->order_item_list_ = (yyvsp[0].order_item_list_t);
	}
#line 4609 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 1116 "bison.y" /* yacc.c:1646  */
    {
		(yyval.order_item_t) = new OrderItem();
		(yyval.order_item_t)->case_idx_ = CASE0;
		(yyval.order_item_t)->expr_ = (yyvsp[-1].expr_t);
		(yyval.order_item_t)->opt_order_behavior_ = (yyvsp[0].opt_order_behavior_t);
	}
#line 4620 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 1125 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_order_behavior_t) = new OptOrderBehavior();
		(yyval.opt_order_behavior_t)->case_idx_ = CASE0;
	}
#line 4629 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 1129 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_order_behavior_t) = new OptOrderBehavior();
		(yyval.opt_order_behavior_t)->case_idx_ = CASE1;
	}
#line 4638 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 1133 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_order_behavior_t) = new OptOrderBehavior();
		(yyval.opt_order_behavior_t)->case_idx_ = CASE2;
	}
#line 4647 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 1140 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_with_clause_t) = new OptWithClause();
		(yyval.opt_with_clause_t)->case_idx_ = CASE0;
		(yyval.opt_with_clause_t)->cte_table_list_ = (yyvsp[0].cte_table_list_t);
	}
#line 4657 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 1145 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_with_clause_t) = new OptWithClause();
		(yyval.opt_with_clause_t)->case_idx_ = CASE1;
		(yyval.opt_with_clause_t)->cte_table_list_ = (yyvsp[0].cte_table_list_t);
	}
#line 4667 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 1150 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_with_clause_t) = new OptWithClause();
		(yyval.opt_with_clause_t)->case_idx_ = CASE2;
	}
#line 4676 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 1157 "bison.y" /* yacc.c:1646  */
    {
		(yyval.cte_table_list_t) = new CteTableList();
		(yyval.cte_table_list_t)->case_idx_ = CASE0;
		(yyval.cte_table_list_t)->cte_table_ = (yyvsp[0].cte_table_t);
	}
#line 4686 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 1162 "bison.y" /* yacc.c:1646  */
    {
		(yyval.cte_table_list_t) = new CteTableList();
		(yyval.cte_table_list_t)->case_idx_ = CASE1;
		(yyval.cte_table_list_t)->cte_table_ = (yyvsp[-2].cte_table_t);
		(yyval.cte_table_list_t)->cte_table_list_ = (yyvsp[0].cte_table_list_t);
	}
#line 4697 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 1171 "bison.y" /* yacc.c:1646  */
    {
		(yyval.cte_table_t) = new CteTable();
		(yyval.cte_table_t)->case_idx_ = CASE0;
		(yyval.cte_table_t)->cte_table_name_ = (yyvsp[-4].cte_table_name_t);
		(yyval.cte_table_t)->select_stmt_ = (yyvsp[-1].select_stmt_t);
	}
#line 4708 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 1180 "bison.y" /* yacc.c:1646  */
    {
		(yyval.cte_table_name_t) = new CteTableName();
		(yyval.cte_table_name_t)->case_idx_ = CASE0;
		(yyval.cte_table_name_t)->table_name_ = (yyvsp[-1].table_name_t);
		(yyval.cte_table_name_t)->opt_column_name_list_p_ = (yyvsp[0].opt_column_name_list_p_t);
	}
#line 4719 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 1189 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_all_or_distinct_t) = new OptAllOrDistinct();
		(yyval.opt_all_or_distinct_t)->case_idx_ = CASE0;
	}
#line 4728 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 1193 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_all_or_distinct_t) = new OptAllOrDistinct();
		(yyval.opt_all_or_distinct_t)->case_idx_ = CASE1;
	}
#line 4737 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 1197 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_all_or_distinct_t) = new OptAllOrDistinct();
		(yyval.opt_all_or_distinct_t)->case_idx_ = CASE2;
	}
#line 4746 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 1204 "bison.y" /* yacc.c:1646  */
    {
		(yyval.create_table_stmt_t) = new CreateTableStmt();
		(yyval.create_table_stmt_t)->case_idx_ = CASE0;
		(yyval.create_table_stmt_t)->opt_temp_ = (yyvsp[-7].opt_temp_t);
		(yyval.create_table_stmt_t)->opt_if_not_exist_ = (yyvsp[-5].opt_if_not_exist_t);
		(yyval.create_table_stmt_t)->table_name_ = (yyvsp[-4].table_name_t);
		(yyval.create_table_stmt_t)->create_definition_list_ = (yyvsp[-2].create_definition_list_t);
		(yyval.create_table_stmt_t)->opt_table_option_list_ = (yyvsp[0].opt_table_option_list_t);
	}
#line 4760 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 1213 "bison.y" /* yacc.c:1646  */
    {
		(yyval.create_table_stmt_t) = new CreateTableStmt();
		(yyval.create_table_stmt_t)->case_idx_ = CASE1;
		(yyval.create_table_stmt_t)->opt_temp_ = (yyvsp[-8].opt_temp_t);
		(yyval.create_table_stmt_t)->opt_if_not_exist_ = (yyvsp[-6].opt_if_not_exist_t);
		(yyval.create_table_stmt_t)->table_name_ = (yyvsp[-5].table_name_t);
		(yyval.create_table_stmt_t)->opt_create_definition_list_p_ = (yyvsp[-4].opt_create_definition_list_p_t);
		(yyval.create_table_stmt_t)->opt_table_option_list_ = (yyvsp[-3].opt_table_option_list_t);
		(yyval.create_table_stmt_t)->opt_ignore_or_replace_ = (yyvsp[-2].opt_ignore_or_replace_t);
		(yyval.create_table_stmt_t)->opt_as_ = (yyvsp[-1].opt_as_t);
		(yyval.create_table_stmt_t)->select_stmt_ = (yyvsp[0].select_stmt_t);
	}
#line 4777 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 1225 "bison.y" /* yacc.c:1646  */
    {
		(yyval.create_table_stmt_t) = new CreateTableStmt();
		(yyval.create_table_stmt_t)->case_idx_ = CASE2;
		(yyval.create_table_stmt_t)->opt_temp_ = (yyvsp[-4].opt_temp_t);
		(yyval.create_table_stmt_t)->opt_if_not_exist_ = (yyvsp[-2].opt_if_not_exist_t);
		(yyval.create_table_stmt_t)->table_name_ = (yyvsp[-1].table_name_t);
		(yyval.create_table_stmt_t)->like_field_ = (yyvsp[0].like_field_t);
	}
#line 4790 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 1236 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_as_t) = new OptAs();
		(yyval.opt_as_t)->case_idx_ = CASE0;
	}
#line 4799 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 1240 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_as_t) = new OptAs();
		(yyval.opt_as_t)->case_idx_ = CASE1;
	}
#line 4808 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 1247 "bison.y" /* yacc.c:1646  */
    {
		(yyval.like_field_t) = new LikeField();
		(yyval.like_field_t)->case_idx_ = CASE0;
		(yyval.like_field_t)->table_name_ = (yyvsp[0].table_name_t);
	}
#line 4818 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 1252 "bison.y" /* yacc.c:1646  */
    {
		(yyval.like_field_t) = new LikeField();
		(yyval.like_field_t)->case_idx_ = CASE1;
		(yyval.like_field_t)->table_name_ = (yyvsp[-1].table_name_t);
	}
#line 4828 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 1260 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_index_type_t) = new OptIndexType();
		(yyval.opt_index_type_t)->case_idx_ = CASE0;
		(yyval.opt_index_type_t)->index_type_ = (yyvsp[0].index_type_t);
	}
#line 4838 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 1265 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_index_type_t) = new OptIndexType();
		(yyval.opt_index_type_t)->case_idx_ = CASE1;
	}
#line 4847 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 1272 "bison.y" /* yacc.c:1646  */
    {
		(yyval.index_type_t) = new IndexType();
		(yyval.index_type_t)->case_idx_ = CASE0;
	}
#line 4856 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 1276 "bison.y" /* yacc.c:1646  */
    {
		(yyval.index_type_t) = new IndexType();
		(yyval.index_type_t)->case_idx_ = CASE1;
	}
#line 4865 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 1283 "bison.y" /* yacc.c:1646  */
    {
		(yyval.create_index_stmt_t) = new CreateIndexStmt();
		(yyval.create_index_stmt_t)->case_idx_ = CASE0;
		(yyval.create_index_stmt_t)->opt_index_keyword_ = (yyvsp[-10].opt_index_keyword_t);
		(yyval.create_index_stmt_t)->index_name_ = (yyvsp[-8].index_name_t);
		(yyval.create_index_stmt_t)->opt_index_type_ = (yyvsp[-7].opt_index_type_t);
		(yyval.create_index_stmt_t)->table_name_ = (yyvsp[-5].table_name_t);
		(yyval.create_index_stmt_t)->key_part_list_ = (yyvsp[-3].key_part_list_t);
		(yyval.create_index_stmt_t)->opt_index_option_ = (yyvsp[-1].opt_index_option_t);
		(yyval.create_index_stmt_t)->opt_extra_option_ = (yyvsp[0].opt_extra_option_t);
	}
#line 4881 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 1297 "bison.y" /* yacc.c:1646  */
    {
		(yyval.create_trigger_stmt_t) = new CreateTriggerStmt();
		(yyval.create_trigger_stmt_t)->case_idx_ = CASE0;
		(yyval.create_trigger_stmt_t)->trigger_name_ = (yyvsp[-8].trigger_name_t);
		(yyval.create_trigger_stmt_t)->trigger_action_time_ = (yyvsp[-7].trigger_action_time_t);
		(yyval.create_trigger_stmt_t)->trigger_events_ = (yyvsp[-6].trigger_events_t);
		(yyval.create_trigger_stmt_t)->table_name_ = (yyvsp[-4].table_name_t);
		(yyval.create_trigger_stmt_t)->trigger_body_ = (yyvsp[0].trigger_body_t);
	}
#line 4895 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 1309 "bison.y" /* yacc.c:1646  */
    {
		(yyval.create_view_stmt_t) = new CreateViewStmt();
		(yyval.create_view_stmt_t)->case_idx_ = CASE0;
		(yyval.create_view_stmt_t)->opt_view_algorithm_ = (yyvsp[-7].opt_view_algorithm_t);
		(yyval.create_view_stmt_t)->opt_sql_security_ = (yyvsp[-6].opt_sql_security_t);
		(yyval.create_view_stmt_t)->view_name_ = (yyvsp[-4].view_name_t);
		(yyval.create_view_stmt_t)->opt_column_name_list_p_ = (yyvsp[-3].opt_column_name_list_p_t);
		(yyval.create_view_stmt_t)->select_stmt_ = (yyvsp[-1].select_stmt_t);
		(yyval.create_view_stmt_t)->opt_check_option_ = (yyvsp[0].opt_check_option_t);
	}
#line 4910 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 1319 "bison.y" /* yacc.c:1646  */
    {
		(yyval.create_view_stmt_t) = new CreateViewStmt();
		(yyval.create_view_stmt_t)->case_idx_ = CASE1;
		(yyval.create_view_stmt_t)->opt_view_algorithm_ = (yyvsp[-7].opt_view_algorithm_t);
		(yyval.create_view_stmt_t)->opt_sql_security_ = (yyvsp[-6].opt_sql_security_t);
		(yyval.create_view_stmt_t)->view_name_ = (yyvsp[-4].view_name_t);
		(yyval.create_view_stmt_t)->opt_column_name_list_p_ = (yyvsp[-3].opt_column_name_list_p_t);
		(yyval.create_view_stmt_t)->select_stmt_ = (yyvsp[-1].select_stmt_t);
		(yyval.create_view_stmt_t)->opt_check_option_ = (yyvsp[0].opt_check_option_t);
	}
#line 4925 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 1332 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_table_option_list_t) = new OptTableOptionList();
		(yyval.opt_table_option_list_t)->case_idx_ = CASE0;
		(yyval.opt_table_option_list_t)->table_option_list_ = (yyvsp[0].table_option_list_t);
	}
#line 4935 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 1337 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_table_option_list_t) = new OptTableOptionList();
		(yyval.opt_table_option_list_t)->case_idx_ = CASE1;
	}
#line 4944 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 1344 "bison.y" /* yacc.c:1646  */
    {
		(yyval.table_option_list_t) = new TableOptionList();
		(yyval.table_option_list_t)->case_idx_ = CASE0;
		(yyval.table_option_list_t)->table_option_ = (yyvsp[0].table_option_t);
	}
#line 4954 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 1349 "bison.y" /* yacc.c:1646  */
    {
		(yyval.table_option_list_t) = new TableOptionList();
		(yyval.table_option_list_t)->case_idx_ = CASE1;
		(yyval.table_option_list_t)->table_option_ = (yyvsp[-2].table_option_t);
		(yyval.table_option_list_t)->opt_op_comma_ = (yyvsp[-1].opt_op_comma_t);
		(yyval.table_option_list_t)->table_option_list_ = (yyvsp[0].table_option_list_t);
	}
#line 4966 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 1359 "bison.y" /* yacc.c:1646  */
    {
		(yyval.table_option_t) = new TableOption();
		(yyval.table_option_t)->case_idx_ = CASE0;
		(yyval.table_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		(yyval.table_option_t)->insert_method_ = (yyvsp[0].insert_method_t);
	}
#line 4977 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 1365 "bison.y" /* yacc.c:1646  */
    {
		(yyval.table_option_t) = new TableOption();
		(yyval.table_option_t)->case_idx_ = CASE1;
		(yyval.table_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		(yyval.table_option_t)->row_format_ = (yyvsp[0].row_format_t);
	}
#line 4988 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 1374 "bison.y" /* yacc.c:1646  */
    {
		(yyval.insert_method_t) = new InsertMethod();
		(yyval.insert_method_t)->case_idx_ = CASE0;
	}
#line 4997 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 1378 "bison.y" /* yacc.c:1646  */
    {
		(yyval.insert_method_t) = new InsertMethod();
		(yyval.insert_method_t)->case_idx_ = CASE1;
	}
#line 5006 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 1382 "bison.y" /* yacc.c:1646  */
    {
		(yyval.insert_method_t) = new InsertMethod();
		(yyval.insert_method_t)->case_idx_ = CASE2;
	}
#line 5015 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 1389 "bison.y" /* yacc.c:1646  */
    {
		(yyval.row_format_t) = new RowFormat();
		(yyval.row_format_t)->case_idx_ = CASE0;
	}
#line 5024 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 1393 "bison.y" /* yacc.c:1646  */
    {
		(yyval.row_format_t) = new RowFormat();
		(yyval.row_format_t)->case_idx_ = CASE1;
	}
#line 5033 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 1397 "bison.y" /* yacc.c:1646  */
    {
		(yyval.row_format_t) = new RowFormat();
		(yyval.row_format_t)->case_idx_ = CASE2;
	}
#line 5042 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 1401 "bison.y" /* yacc.c:1646  */
    {
		(yyval.row_format_t) = new RowFormat();
		(yyval.row_format_t)->case_idx_ = CASE3;
	}
#line 5051 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 1405 "bison.y" /* yacc.c:1646  */
    {
		(yyval.row_format_t) = new RowFormat();
		(yyval.row_format_t)->case_idx_ = CASE4;
	}
#line 5060 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 1409 "bison.y" /* yacc.c:1646  */
    {
		(yyval.row_format_t) = new RowFormat();
		(yyval.row_format_t)->case_idx_ = CASE5;
	}
#line 5069 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 1416 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_op_comma_t) = new OptOpComma();
		(yyval.opt_op_comma_t)->case_idx_ = CASE0;
	}
#line 5078 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 1420 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_op_comma_t) = new OptOpComma();
		(yyval.opt_op_comma_t)->case_idx_ = CASE1;
	}
#line 5087 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 1427 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_ignore_or_replace_t) = new OptIgnoreOrReplace();
		(yyval.opt_ignore_or_replace_t)->case_idx_ = CASE0;
	}
#line 5096 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 1431 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_ignore_or_replace_t) = new OptIgnoreOrReplace();
		(yyval.opt_ignore_or_replace_t)->case_idx_ = CASE1;
	}
#line 5105 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 1435 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_ignore_or_replace_t) = new OptIgnoreOrReplace();
		(yyval.opt_ignore_or_replace_t)->case_idx_ = CASE2;
	}
#line 5114 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 1442 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_view_algorithm_t) = new OptViewAlgorithm();
		(yyval.opt_view_algorithm_t)->case_idx_ = CASE0;
	}
#line 5123 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 1446 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_view_algorithm_t) = new OptViewAlgorithm();
		(yyval.opt_view_algorithm_t)->case_idx_ = CASE1;
	}
#line 5132 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 1450 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_view_algorithm_t) = new OptViewAlgorithm();
		(yyval.opt_view_algorithm_t)->case_idx_ = CASE2;
	}
#line 5141 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 1454 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_view_algorithm_t) = new OptViewAlgorithm();
		(yyval.opt_view_algorithm_t)->case_idx_ = CASE3;
	}
#line 5150 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 1461 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_sql_security_t) = new OptSqlSecurity();
		(yyval.opt_sql_security_t)->case_idx_ = CASE0;
	}
#line 5159 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 1465 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_sql_security_t) = new OptSqlSecurity();
		(yyval.opt_sql_security_t)->case_idx_ = CASE1;
	}
#line 5168 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 1469 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_sql_security_t) = new OptSqlSecurity();
		(yyval.opt_sql_security_t)->case_idx_ = CASE2;
	}
#line 5177 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 1476 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_index_option_t) = new OptIndexOption();
		(yyval.opt_index_option_t)->case_idx_ = CASE0;
		(yyval.opt_index_option_t)->index_type_ = (yyvsp[0].index_type_t);
	}
#line 5187 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 1481 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_index_option_t) = new OptIndexOption();
		(yyval.opt_index_option_t)->case_idx_ = CASE1;
		(yyval.opt_index_option_t)->visible_invisible_ = (yyvsp[0].visible_invisible_t);
	}
#line 5197 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 1486 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_index_option_t) = new OptIndexOption();
		(yyval.opt_index_option_t)->case_idx_ = CASE2;
	}
#line 5206 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 1493 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_extra_option_t) = new OptExtraOption();
		(yyval.opt_extra_option_t)->case_idx_ = CASE0;
		(yyval.opt_extra_option_t)->index_algorithm_option_ = (yyvsp[0].index_algorithm_option_t);
	}
#line 5216 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 1498 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_extra_option_t) = new OptExtraOption();
		(yyval.opt_extra_option_t)->case_idx_ = CASE1;
		(yyval.opt_extra_option_t)->lock_option_ = (yyvsp[0].lock_option_t);
	}
#line 5226 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 1503 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_extra_option_t) = new OptExtraOption();
		(yyval.opt_extra_option_t)->case_idx_ = CASE2;
	}
#line 5235 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 1510 "bison.y" /* yacc.c:1646  */
    {
		(yyval.index_algorithm_option_t) = new IndexAlgorithmOption();
		(yyval.index_algorithm_option_t)->case_idx_ = CASE0;
		(yyval.index_algorithm_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
	}
#line 5245 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 1515 "bison.y" /* yacc.c:1646  */
    {
		(yyval.index_algorithm_option_t) = new IndexAlgorithmOption();
		(yyval.index_algorithm_option_t)->case_idx_ = CASE1;
		(yyval.index_algorithm_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
	}
#line 5255 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 1520 "bison.y" /* yacc.c:1646  */
    {
		(yyval.index_algorithm_option_t) = new IndexAlgorithmOption();
		(yyval.index_algorithm_option_t)->case_idx_ = CASE2;
		(yyval.index_algorithm_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
	}
#line 5265 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 1528 "bison.y" /* yacc.c:1646  */
    {
		(yyval.lock_option_t) = new LockOption();
		(yyval.lock_option_t)->case_idx_ = CASE0;
		(yyval.lock_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
	}
#line 5275 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 1533 "bison.y" /* yacc.c:1646  */
    {
		(yyval.lock_option_t) = new LockOption();
		(yyval.lock_option_t)->case_idx_ = CASE1;
		(yyval.lock_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
	}
#line 5285 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 1538 "bison.y" /* yacc.c:1646  */
    {
		(yyval.lock_option_t) = new LockOption();
		(yyval.lock_option_t)->case_idx_ = CASE2;
		(yyval.lock_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
	}
#line 5295 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 1543 "bison.y" /* yacc.c:1646  */
    {
		(yyval.lock_option_t) = new LockOption();
		(yyval.lock_option_t)->case_idx_ = CASE3;
		(yyval.lock_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
	}
#line 5305 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 1551 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_op_equal_t) = new OptOpEqual();
		(yyval.opt_op_equal_t)->case_idx_ = CASE0;
	}
#line 5314 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 1555 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_op_equal_t) = new OptOpEqual();
		(yyval.opt_op_equal_t)->case_idx_ = CASE1;
	}
#line 5323 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 1562 "bison.y" /* yacc.c:1646  */
    {
		(yyval.trigger_events_t) = new TriggerEvents();
		(yyval.trigger_events_t)->case_idx_ = CASE0;
	}
#line 5332 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 1566 "bison.y" /* yacc.c:1646  */
    {
		(yyval.trigger_events_t) = new TriggerEvents();
		(yyval.trigger_events_t)->case_idx_ = CASE1;
	}
#line 5341 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 1570 "bison.y" /* yacc.c:1646  */
    {
		(yyval.trigger_events_t) = new TriggerEvents();
		(yyval.trigger_events_t)->case_idx_ = CASE2;
	}
#line 5350 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 1577 "bison.y" /* yacc.c:1646  */
    {
		(yyval.trigger_name_t) = new TriggerName();
		(yyval.trigger_name_t)->case_idx_ = CASE0;
		(yyval.trigger_name_t)->identifier_ = (yyvsp[0].identifier_t);
	}
#line 5360 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 1585 "bison.y" /* yacc.c:1646  */
    {
		(yyval.trigger_action_time_t) = new TriggerActionTime();
		(yyval.trigger_action_time_t)->case_idx_ = CASE0;
	}
#line 5369 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 1589 "bison.y" /* yacc.c:1646  */
    {
		(yyval.trigger_action_time_t) = new TriggerActionTime();
		(yyval.trigger_action_time_t)->case_idx_ = CASE1;
	}
#line 5378 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 1596 "bison.y" /* yacc.c:1646  */
    {
		(yyval.drop_index_stmt_t) = new DropIndexStmt();
		(yyval.drop_index_stmt_t)->case_idx_ = CASE0;
		(yyval.drop_index_stmt_t)->index_name_ = (yyvsp[-3].index_name_t);
		(yyval.drop_index_stmt_t)->table_name_ = (yyvsp[-1].table_name_t);
		(yyval.drop_index_stmt_t)->opt_extra_option_ = (yyvsp[0].opt_extra_option_t);
	}
#line 5390 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 1606 "bison.y" /* yacc.c:1646  */
    {
		(yyval.drop_table_stmt_t) = new DropTableStmt();
		(yyval.drop_table_stmt_t)->case_idx_ = CASE0;
		(yyval.drop_table_stmt_t)->opt_temp_ = (yyvsp[-4].opt_temp_t);
		(yyval.drop_table_stmt_t)->opt_if_exist_ = (yyvsp[-2].opt_if_exist_t);
		(yyval.drop_table_stmt_t)->table_name_list_ = (yyvsp[-1].table_name_list_t);
		(yyval.drop_table_stmt_t)->opt_restrict_or_cascade_ = (yyvsp[0].opt_restrict_or_cascade_t);
	}
#line 5403 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 1617 "bison.y" /* yacc.c:1646  */
    {
		(yyval.table_name_list_t) = new TableNameList();
		(yyval.table_name_list_t)->case_idx_ = CASE0;
		(yyval.table_name_list_t)->table_name_ = (yyvsp[-2].table_name_t);
		(yyval.table_name_list_t)->table_name_list_ = (yyvsp[0].table_name_list_t);
	}
#line 5414 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 1623 "bison.y" /* yacc.c:1646  */
    {
		(yyval.table_name_list_t) = new TableNameList();
		(yyval.table_name_list_t)->case_idx_ = CASE1;
		(yyval.table_name_list_t)->table_name_ = (yyvsp[0].table_name_t);
	}
#line 5424 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 1631 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_restrict_or_cascade_t) = new OptRestrictOrCascade();
		(yyval.opt_restrict_or_cascade_t)->case_idx_ = CASE0;
	}
#line 5433 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 1635 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_restrict_or_cascade_t) = new OptRestrictOrCascade();
		(yyval.opt_restrict_or_cascade_t)->case_idx_ = CASE1;
	}
#line 5442 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 1639 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_restrict_or_cascade_t) = new OptRestrictOrCascade();
		(yyval.opt_restrict_or_cascade_t)->case_idx_ = CASE2;
	}
#line 5451 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 1646 "bison.y" /* yacc.c:1646  */
    {
		(yyval.drop_trigger_stmt_t) = new DropTriggerStmt();
		(yyval.drop_trigger_stmt_t)->case_idx_ = CASE0;
		(yyval.drop_trigger_stmt_t)->opt_if_exist_ = (yyvsp[-1].opt_if_exist_t);
		(yyval.drop_trigger_stmt_t)->trigger_name_ = (yyvsp[0].trigger_name_t);
	}
#line 5462 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 1655 "bison.y" /* yacc.c:1646  */
    {
		(yyval.drop_view_stmt_t) = new DropViewStmt();
		(yyval.drop_view_stmt_t)->case_idx_ = CASE0;
		(yyval.drop_view_stmt_t)->opt_if_exist_ = (yyvsp[-2].opt_if_exist_t);
		(yyval.drop_view_stmt_t)->view_name_ = (yyvsp[-1].view_name_t);
		(yyval.drop_view_stmt_t)->opt_restrict_or_cascade_ = (yyvsp[0].opt_restrict_or_cascade_t);
	}
#line 5474 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 1665 "bison.y" /* yacc.c:1646  */
    {
		(yyval.insert_stmt_t) = new InsertStmt();
		(yyval.insert_stmt_t)->case_idx_ = CASE0;
		(yyval.insert_stmt_t)->opt_priority_ = (yyvsp[-8].opt_priority_t);
		(yyval.insert_stmt_t)->opt_ignore_ = (yyvsp[-7].opt_ignore_t);
		(yyval.insert_stmt_t)->opt_into_ = (yyvsp[-6].opt_into_t);
		(yyval.insert_stmt_t)->table_name_1_ = (yyvsp[-5].table_name_t);
		(yyval.insert_stmt_t)->opt_column_name_list_p_ = (yyvsp[-4].opt_column_name_list_p_t);
		(yyval.insert_stmt_t)->value_or_values_ = (yyvsp[-3].value_or_values_t);
		(yyval.insert_stmt_t)->super_value_list_ = (yyvsp[-2].super_value_list_t);
		(yyval.insert_stmt_t)->opt_as_row_alias_ = (yyvsp[-1].opt_as_row_alias_t);
		(yyval.insert_stmt_t)->opt_on_duplicate_ = (yyvsp[0].opt_on_duplicate_t);
	}
#line 5492 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 1678 "bison.y" /* yacc.c:1646  */
    {
		(yyval.insert_stmt_t) = new InsertStmt();
		(yyval.insert_stmt_t)->case_idx_ = CASE1;
		(yyval.insert_stmt_t)->opt_priority_ = (yyvsp[-7].opt_priority_t);
		(yyval.insert_stmt_t)->opt_ignore_ = (yyvsp[-6].opt_ignore_t);
		(yyval.insert_stmt_t)->opt_into_ = (yyvsp[-5].opt_into_t);
		(yyval.insert_stmt_t)->table_name_1_ = (yyvsp[-4].table_name_t);
		(yyval.insert_stmt_t)->opt_as_row_alias_ = (yyvsp[-3].opt_as_row_alias_t);
		(yyval.insert_stmt_t)->assignment_list_ = (yyvsp[-1].assignment_list_t);
		(yyval.insert_stmt_t)->opt_on_duplicate_ = (yyvsp[0].opt_on_duplicate_t);
	}
#line 5508 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 1689 "bison.y" /* yacc.c:1646  */
    {
		(yyval.insert_stmt_t) = new InsertStmt();
		(yyval.insert_stmt_t)->case_idx_ = CASE2;
		(yyval.insert_stmt_t)->opt_priority_ = (yyvsp[-7].opt_priority_t);
		(yyval.insert_stmt_t)->opt_ignore_ = (yyvsp[-6].opt_ignore_t);
		(yyval.insert_stmt_t)->opt_into_ = (yyvsp[-5].opt_into_t);
		(yyval.insert_stmt_t)->table_name_1_ = (yyvsp[-4].table_name_t);
		(yyval.insert_stmt_t)->opt_column_name_list_p_ = (yyvsp[-3].opt_column_name_list_p_t);
		(yyval.insert_stmt_t)->opt_as_row_alias_ = (yyvsp[-2].opt_as_row_alias_t);
		(yyval.insert_stmt_t)->select_no_parens_ = (yyvsp[-1].select_no_parens_t);
		(yyval.insert_stmt_t)->opt_on_duplicate_ = (yyvsp[0].opt_on_duplicate_t);
	}
#line 5525 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 1701 "bison.y" /* yacc.c:1646  */
    {
		(yyval.insert_stmt_t) = new InsertStmt();
		(yyval.insert_stmt_t)->case_idx_ = CASE3;
		(yyval.insert_stmt_t)->opt_priority_ = (yyvsp[-8].opt_priority_t);
		(yyval.insert_stmt_t)->opt_ignore_ = (yyvsp[-7].opt_ignore_t);
		(yyval.insert_stmt_t)->opt_into_ = (yyvsp[-6].opt_into_t);
		(yyval.insert_stmt_t)->table_name_1_ = (yyvsp[-5].table_name_t);
		(yyval.insert_stmt_t)->opt_column_name_list_p_ = (yyvsp[-4].opt_column_name_list_p_t);
		(yyval.insert_stmt_t)->opt_as_row_alias_ = (yyvsp[-3].opt_as_row_alias_t);
		(yyval.insert_stmt_t)->table_name_2_ = (yyvsp[-1].table_name_t);
		(yyval.insert_stmt_t)->opt_on_duplicate_ = (yyvsp[0].opt_on_duplicate_t);
	}
#line 5542 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 1716 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_priority_t) = new OptPriority();
		(yyval.opt_priority_t)->case_idx_ = CASE0;
	}
#line 5551 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 1720 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_priority_t) = new OptPriority();
		(yyval.opt_priority_t)->case_idx_ = CASE1;
	}
#line 5560 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 1724 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_priority_t) = new OptPriority();
		(yyval.opt_priority_t)->case_idx_ = CASE2;
	}
#line 5569 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 1728 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_priority_t) = new OptPriority();
		(yyval.opt_priority_t)->case_idx_ = CASE3;
	}
#line 5578 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 1735 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_low_priority_t) = new OptLowPriority();
		(yyval.opt_low_priority_t)->case_idx_ = CASE0;
	}
#line 5587 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 1739 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_low_priority_t) = new OptLowPriority();
		(yyval.opt_low_priority_t)->case_idx_ = CASE1;
	}
#line 5596 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 1746 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_into_t) = new OptInto();
		(yyval.opt_into_t)->case_idx_ = CASE0;
	}
#line 5605 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 1750 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_into_t) = new OptInto();
		(yyval.opt_into_t)->case_idx_ = CASE1;
	}
#line 5614 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 1757 "bison.y" /* yacc.c:1646  */
    {
		(yyval.value_or_values_t) = new ValueOrValues();
		(yyval.value_or_values_t)->case_idx_ = CASE0;
	}
#line 5623 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 1761 "bison.y" /* yacc.c:1646  */
    {
		(yyval.value_or_values_t) = new ValueOrValues();
		(yyval.value_or_values_t)->case_idx_ = CASE1;
	}
#line 5632 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 1768 "bison.y" /* yacc.c:1646  */
    {
		(yyval.super_value_list_t) = new SuperValueList();
		(yyval.super_value_list_t)->case_idx_ = CASE0;
		(yyval.super_value_list_t)->value_list_ = (yyvsp[-1].value_list_t);
	}
#line 5642 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 1773 "bison.y" /* yacc.c:1646  */
    {
		(yyval.super_value_list_t) = new SuperValueList();
		(yyval.super_value_list_t)->case_idx_ = CASE1;
		(yyval.super_value_list_t)->value_list_ = (yyvsp[-3].value_list_t);
		(yyval.super_value_list_t)->super_value_list_ = (yyvsp[0].super_value_list_t);
	}
#line 5653 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 1782 "bison.y" /* yacc.c:1646  */
    {
		(yyval.value_list_t) = new ValueList();
		(yyval.value_list_t)->case_idx_ = CASE0;
		(yyval.value_list_t)->value_ = (yyvsp[0].value_t);
	}
#line 5663 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 1787 "bison.y" /* yacc.c:1646  */
    {
		(yyval.value_list_t) = new ValueList();
		(yyval.value_list_t)->case_idx_ = CASE1;
		(yyval.value_list_t)->value_ = (yyvsp[-2].value_t);
		(yyval.value_list_t)->value_list_ = (yyvsp[0].value_list_t);
	}
#line 5674 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 1796 "bison.y" /* yacc.c:1646  */
    {
		(yyval.value_t) = new Value();
		(yyval.value_t)->case_idx_ = CASE0;
		(yyval.value_t)->expr_ = (yyvsp[0].expr_t);
	}
#line 5684 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 1801 "bison.y" /* yacc.c:1646  */
    {
		(yyval.value_t) = new Value();
		(yyval.value_t)->case_idx_ = CASE1;
	}
#line 5693 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 1808 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_as_row_alias_t) = new OptAsRowAlias();
		(yyval.opt_as_row_alias_t)->case_idx_ = CASE0;
		(yyval.opt_as_row_alias_t)->row_alias_ = (yyvsp[-1].row_alias_t);
		(yyval.opt_as_row_alias_t)->opt_col_alias_ = (yyvsp[0].opt_col_alias_t);
	}
#line 5704 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 1814 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_as_row_alias_t) = new OptAsRowAlias();
		(yyval.opt_as_row_alias_t)->case_idx_ = CASE1;
	}
#line 5713 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 1821 "bison.y" /* yacc.c:1646  */
    {
		(yyval.row_alias_t) = new RowAlias();
		(yyval.row_alias_t)->case_idx_ = CASE0;
		(yyval.row_alias_t)->identifier_ = (yyvsp[0].identifier_t);
	}
#line 5723 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 1829 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_col_alias_t) = new OptColAlias();
		(yyval.opt_col_alias_t)->case_idx_ = CASE0;
		(yyval.opt_col_alias_t)->col_alias_list_ = (yyvsp[-1].col_alias_list_t);
	}
#line 5733 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 1834 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_col_alias_t) = new OptColAlias();
		(yyval.opt_col_alias_t)->case_idx_ = CASE1;
	}
#line 5742 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 1841 "bison.y" /* yacc.c:1646  */
    {
		(yyval.col_alias_list_t) = new ColAliasList();
		(yyval.col_alias_list_t)->case_idx_ = CASE0;
		(yyval.col_alias_list_t)->col_alias_ = (yyvsp[0].col_alias_t);
	}
#line 5752 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 1846 "bison.y" /* yacc.c:1646  */
    {
		(yyval.col_alias_list_t) = new ColAliasList();
		(yyval.col_alias_list_t)->case_idx_ = CASE1;
		(yyval.col_alias_list_t)->col_alias_ = (yyvsp[-2].col_alias_t);
		(yyval.col_alias_list_t)->col_alias_list_ = (yyvsp[0].col_alias_list_t);
	}
#line 5763 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 1855 "bison.y" /* yacc.c:1646  */
    {
		(yyval.col_alias_t) = new ColAlias();
		(yyval.col_alias_t)->case_idx_ = CASE0;
		(yyval.col_alias_t)->identifier_ = (yyvsp[0].identifier_t);
	}
#line 5773 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 1863 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_on_duplicate_t) = new OptOnDuplicate();
		(yyval.opt_on_duplicate_t)->case_idx_ = CASE0;
		(yyval.opt_on_duplicate_t)->assignment_list_ = (yyvsp[0].assignment_list_t);
	}
#line 5783 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 1868 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_on_duplicate_t) = new OptOnDuplicate();
		(yyval.opt_on_duplicate_t)->case_idx_ = CASE1;
	}
#line 5792 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 1875 "bison.y" /* yacc.c:1646  */
    {
		(yyval.key_part_list_t) = new KeyPartList();
		(yyval.key_part_list_t)->case_idx_ = CASE0;
		(yyval.key_part_list_t)->key_part_ = (yyvsp[0].key_part_t);
	}
#line 5802 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 1880 "bison.y" /* yacc.c:1646  */
    {
		(yyval.key_part_list_t) = new KeyPartList();
		(yyval.key_part_list_t)->case_idx_ = CASE1;
		(yyval.key_part_list_t)->key_part_ = (yyvsp[-2].key_part_t);
		(yyval.key_part_list_t)->key_part_list_ = (yyvsp[0].key_part_list_t);
	}
#line 5813 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 1889 "bison.y" /* yacc.c:1646  */
    {
		(yyval.key_part_t) = new KeyPart();
		(yyval.key_part_t)->case_idx_ = CASE0;
		(yyval.key_part_t)->expr_ = (yyvsp[-1].expr_t);
		(yyval.key_part_t)->opt_order_behavior_ = (yyvsp[0].opt_order_behavior_t);
	}
#line 5824 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 1898 "bison.y" /* yacc.c:1646  */
    {
		(yyval.update_stmt_t) = new UpdateStmt();
		(yyval.update_stmt_t)->case_idx_ = CASE0;
		(yyval.update_stmt_t)->opt_with_clause_ = (yyvsp[-9].opt_with_clause_t);
		(yyval.update_stmt_t)->opt_low_priority_ = (yyvsp[-7].opt_low_priority_t);
		(yyval.update_stmt_t)->opt_ignore_ = (yyvsp[-6].opt_ignore_t);
		(yyval.update_stmt_t)->table_ref_ = (yyvsp[-5].table_ref_t);
		(yyval.update_stmt_t)->assignment_list_ = (yyvsp[-3].assignment_list_t);
		(yyval.update_stmt_t)->opt_where_clause_ = (yyvsp[-2].opt_where_clause_t);
		(yyval.update_stmt_t)->opt_order_clause_ = (yyvsp[-1].opt_order_clause_t);
		(yyval.update_stmt_t)->opt_limit_row_count_ = (yyvsp[0].opt_limit_row_count_t);
	}
#line 5841 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 1913 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_ignore_t) = new OptIgnore();
		(yyval.opt_ignore_t)->case_idx_ = CASE0;
	}
#line 5850 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 1917 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_ignore_t) = new OptIgnore();
		(yyval.opt_ignore_t)->case_idx_ = CASE1;
	}
#line 5859 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 1924 "bison.y" /* yacc.c:1646  */
    {
		(yyval.alter_action_t) = new AlterAction();
		(yyval.alter_action_t)->case_idx_ = CASE0;
		(yyval.alter_action_t)->table_name_ = (yyvsp[0].table_name_t);
	}
#line 5869 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 1929 "bison.y" /* yacc.c:1646  */
    {
		(yyval.alter_action_t) = new AlterAction();
		(yyval.alter_action_t)->case_idx_ = CASE1;
		(yyval.alter_action_t)->column_name_1_ = (yyvsp[-2].column_name_t);
		(yyval.alter_action_t)->column_name_2_ = (yyvsp[0].column_name_t);
	}
#line 5880 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 1935 "bison.y" /* yacc.c:1646  */
    {
		(yyval.alter_action_t) = new AlterAction();
		(yyval.alter_action_t)->case_idx_ = CASE2;
		(yyval.alter_action_t)->opt_column_ = (yyvsp[-1].opt_column_t);
		(yyval.alter_action_t)->column_def_ = (yyvsp[0].column_def_t);
	}
#line 5891 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 1941 "bison.y" /* yacc.c:1646  */
    {
		(yyval.alter_action_t) = new AlterAction();
		(yyval.alter_action_t)->case_idx_ = CASE3;
		(yyval.alter_action_t)->opt_column_ = (yyvsp[-1].opt_column_t);
		(yyval.alter_action_t)->column_name_1_ = (yyvsp[0].column_name_t);
	}
#line 5902 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 1947 "bison.y" /* yacc.c:1646  */
    {
		(yyval.alter_action_t) = new AlterAction();
		(yyval.alter_action_t)->case_idx_ = CASE4;
		(yyval.alter_action_t)->alter_constant_action_ = (yyvsp[0].alter_constant_action_t);
	}
#line 5912 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 1952 "bison.y" /* yacc.c:1646  */
    {
		(yyval.alter_action_t) = new AlterAction();
		(yyval.alter_action_t)->case_idx_ = CASE5;
		(yyval.alter_action_t)->opt_column_ = (yyvsp[-3].opt_column_t);
		(yyval.alter_action_t)->column_def_list_ = (yyvsp[-1].column_def_list_t);
	}
#line 5923 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 1961 "bison.y" /* yacc.c:1646  */
    {
		(yyval.alter_constant_action_t) = new AlterConstantAction();
		(yyval.alter_constant_action_t)->case_idx_ = CASE0;
	}
#line 5932 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 1965 "bison.y" /* yacc.c:1646  */
    {
		(yyval.alter_constant_action_t) = new AlterConstantAction();
		(yyval.alter_constant_action_t)->case_idx_ = CASE1;
	}
#line 5941 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 1969 "bison.y" /* yacc.c:1646  */
    {
		(yyval.alter_constant_action_t) = new AlterConstantAction();
		(yyval.alter_constant_action_t)->case_idx_ = CASE2;
	}
#line 5950 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 1973 "bison.y" /* yacc.c:1646  */
    {
		(yyval.alter_constant_action_t) = new AlterConstantAction();
		(yyval.alter_constant_action_t)->case_idx_ = CASE3;
	}
#line 5959 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 1977 "bison.y" /* yacc.c:1646  */
    {
		(yyval.alter_constant_action_t) = new AlterConstantAction();
		(yyval.alter_constant_action_t)->case_idx_ = CASE4;
		(yyval.alter_constant_action_t)->lock_option_ = (yyvsp[0].lock_option_t);
	}
#line 5969 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 1982 "bison.y" /* yacc.c:1646  */
    {
		(yyval.alter_constant_action_t) = new AlterConstantAction();
		(yyval.alter_constant_action_t)->case_idx_ = CASE5;
	}
#line 5978 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 1986 "bison.y" /* yacc.c:1646  */
    {
		(yyval.alter_constant_action_t) = new AlterConstantAction();
		(yyval.alter_constant_action_t)->case_idx_ = CASE6;
	}
#line 5987 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 1993 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_create_definition_list_p_t) = new OptCreateDefinitionListP();
		(yyval.opt_create_definition_list_p_t)->case_idx_ = CASE0;
		(yyval.opt_create_definition_list_p_t)->create_definition_list_ = (yyvsp[-1].create_definition_list_t);
	}
#line 5997 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 1998 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_create_definition_list_p_t) = new OptCreateDefinitionListP();
		(yyval.opt_create_definition_list_p_t)->case_idx_ = CASE1;
	}
#line 6006 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 2005 "bison.y" /* yacc.c:1646  */
    {
		(yyval.create_definition_list_t) = new CreateDefinitionList();
		(yyval.create_definition_list_t)->case_idx_ = CASE0;
		(yyval.create_definition_list_t)->create_definition_ = (yyvsp[0].create_definition_t);
	}
#line 6016 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 2010 "bison.y" /* yacc.c:1646  */
    {
		(yyval.create_definition_list_t) = new CreateDefinitionList();
		(yyval.create_definition_list_t)->case_idx_ = CASE1;
		(yyval.create_definition_list_t)->create_definition_ = (yyvsp[-2].create_definition_t);
		(yyval.create_definition_list_t)->create_definition_list_ = (yyvsp[0].create_definition_list_t);
	}
#line 6027 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 2019 "bison.y" /* yacc.c:1646  */
    {
		(yyval.create_definition_t) = new CreateDefinition();
		(yyval.create_definition_t)->case_idx_ = CASE0;
		(yyval.create_definition_t)->column_name_ = (yyvsp[-1].column_name_t);
		(yyval.create_definition_t)->column_definition_ = (yyvsp[0].column_definition_t);
	}
#line 6038 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 2025 "bison.y" /* yacc.c:1646  */
    {
		(yyval.create_definition_t) = new CreateDefinition();
		(yyval.create_definition_t)->case_idx_ = CASE1;
		(yyval.create_definition_t)->index_or_key_ = (yyvsp[-6].index_or_key_t);
		(yyval.create_definition_t)->opt_index_name_ = (yyvsp[-5].opt_index_name_t);
		(yyval.create_definition_t)->opt_index_type_ = (yyvsp[-4].opt_index_type_t);
		(yyval.create_definition_t)->key_part_list_ = (yyvsp[-2].key_part_list_t);
		(yyval.create_definition_t)->opt_index_option_ = (yyvsp[0].opt_index_option_t);
	}
#line 6052 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 2034 "bison.y" /* yacc.c:1646  */
    {
		(yyval.create_definition_t) = new CreateDefinition();
		(yyval.create_definition_t)->case_idx_ = CASE2;
		(yyval.create_definition_t)->fulltext_or_spatial_ = (yyvsp[-6].fulltext_or_spatial_t);
		(yyval.create_definition_t)->opt_index_or_key_ = (yyvsp[-5].opt_index_or_key_t);
		(yyval.create_definition_t)->opt_index_name_ = (yyvsp[-4].opt_index_name_t);
		(yyval.create_definition_t)->key_part_list_ = (yyvsp[-2].key_part_list_t);
		(yyval.create_definition_t)->opt_index_option_ = (yyvsp[0].opt_index_option_t);
	}
#line 6066 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 2043 "bison.y" /* yacc.c:1646  */
    {
		(yyval.create_definition_t) = new CreateDefinition();
		(yyval.create_definition_t)->case_idx_ = CASE3;
		(yyval.create_definition_t)->opt_constraint_symbol_ = (yyvsp[-7].opt_constraint_symbol_t);
		(yyval.create_definition_t)->opt_index_type_ = (yyvsp[-4].opt_index_type_t);
		(yyval.create_definition_t)->key_part_list_ = (yyvsp[-2].key_part_list_t);
		(yyval.create_definition_t)->opt_index_option_ = (yyvsp[0].opt_index_option_t);
	}
#line 6079 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 2051 "bison.y" /* yacc.c:1646  */
    {
		(yyval.create_definition_t) = new CreateDefinition();
		(yyval.create_definition_t)->case_idx_ = CASE4;
		(yyval.create_definition_t)->opt_constraint_symbol_ = (yyvsp[-8].opt_constraint_symbol_t);
		(yyval.create_definition_t)->opt_index_or_key_ = (yyvsp[-6].opt_index_or_key_t);
		(yyval.create_definition_t)->opt_index_name_ = (yyvsp[-5].opt_index_name_t);
		(yyval.create_definition_t)->opt_index_type_ = (yyvsp[-4].opt_index_type_t);
		(yyval.create_definition_t)->key_part_list_ = (yyvsp[-2].key_part_list_t);
		(yyval.create_definition_t)->opt_index_option_ = (yyvsp[0].opt_index_option_t);
	}
#line 6094 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 2061 "bison.y" /* yacc.c:1646  */
    {
		(yyval.create_definition_t) = new CreateDefinition();
		(yyval.create_definition_t)->case_idx_ = CASE5;
		(yyval.create_definition_t)->opt_constraint_symbol_ = (yyvsp[-7].opt_constraint_symbol_t);
		(yyval.create_definition_t)->opt_index_name_ = (yyvsp[-4].opt_index_name_t);
		(yyval.create_definition_t)->column_name_list_ = (yyvsp[-2].column_name_list_t);
		(yyval.create_definition_t)->reference_definition_ = (yyvsp[0].reference_definition_t);
	}
#line 6107 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 2069 "bison.y" /* yacc.c:1646  */
    {
		(yyval.create_definition_t) = new CreateDefinition();
		(yyval.create_definition_t)->case_idx_ = CASE6;
		(yyval.create_definition_t)->check_constraint_definition_ = (yyvsp[0].check_constraint_definition_t);
	}
#line 6117 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 2077 "bison.y" /* yacc.c:1646  */
    {
		(yyval.column_definition_t) = new ColumnDefinition();
		(yyval.column_definition_t)->case_idx_ = CASE0;
		(yyval.column_definition_t)->data_type_ = (yyvsp[-8].data_type_t);
		(yyval.column_definition_t)->opt_null_not_null_ = (yyvsp[-7].opt_null_not_null_t);
		(yyval.column_definition_t)->opt_visible_invisible_ = (yyvsp[-6].opt_visible_invisible_t);
		(yyval.column_definition_t)->opt_auto_increment_ = (yyvsp[-5].opt_auto_increment_t);
		(yyval.column_definition_t)->opt_unique_primary_ = (yyvsp[-4].opt_unique_primary_t);
		(yyval.column_definition_t)->opt_column_format_ = (yyvsp[-3].opt_column_format_t);
		(yyval.column_definition_t)->opt_storage_ = (yyvsp[-2].opt_storage_t);
		(yyval.column_definition_t)->opt_reference_definition_ = (yyvsp[-1].opt_reference_definition_t);
		(yyval.column_definition_t)->opt_check_constraint_definition_ = (yyvsp[0].opt_check_constraint_definition_t);
	}
#line 6135 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 2093 "bison.y" /* yacc.c:1646  */
    {
		(yyval.fulltext_or_spatial_t) = new FulltextOrSpatial();
		(yyval.fulltext_or_spatial_t)->case_idx_ = CASE0;
	}
#line 6144 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 2097 "bison.y" /* yacc.c:1646  */
    {
		(yyval.fulltext_or_spatial_t) = new FulltextOrSpatial();
		(yyval.fulltext_or_spatial_t)->case_idx_ = CASE1;
	}
#line 6153 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 2104 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_index_or_key_t) = new OptIndexOrKey();
		(yyval.opt_index_or_key_t)->case_idx_ = CASE0;
		(yyval.opt_index_or_key_t)->index_or_key_ = (yyvsp[0].index_or_key_t);
	}
#line 6163 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 2109 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_index_or_key_t) = new OptIndexOrKey();
		(yyval.opt_index_or_key_t)->case_idx_ = CASE1;
	}
#line 6172 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 2116 "bison.y" /* yacc.c:1646  */
    {
		(yyval.index_or_key_t) = new IndexOrKey();
		(yyval.index_or_key_t)->case_idx_ = CASE0;
	}
#line 6181 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 2120 "bison.y" /* yacc.c:1646  */
    {
		(yyval.index_or_key_t) = new IndexOrKey();
		(yyval.index_or_key_t)->case_idx_ = CASE1;
	}
#line 6190 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 2127 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_index_name_t) = new OptIndexName();
		(yyval.opt_index_name_t)->case_idx_ = CASE0;
		(yyval.opt_index_name_t)->index_name_ = (yyvsp[0].index_name_t);
	}
#line 6200 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 2132 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_index_name_t) = new OptIndexName();
		(yyval.opt_index_name_t)->case_idx_ = CASE1;
	}
#line 6209 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 2139 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_null_not_null_t) = new OptNullNotNull();
		(yyval.opt_null_not_null_t)->case_idx_ = CASE0;
	}
#line 6218 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 2143 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_null_not_null_t) = new OptNullNotNull();
		(yyval.opt_null_not_null_t)->case_idx_ = CASE1;
	}
#line 6227 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 2147 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_null_not_null_t) = new OptNullNotNull();
		(yyval.opt_null_not_null_t)->case_idx_ = CASE2;
	}
#line 6236 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 2154 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_visible_invisible_t) = new OptVisibleInvisible();
		(yyval.opt_visible_invisible_t)->case_idx_ = CASE0;
		(yyval.opt_visible_invisible_t)->visible_invisible_ = (yyvsp[0].visible_invisible_t);
	}
#line 6246 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 2159 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_visible_invisible_t) = new OptVisibleInvisible();
		(yyval.opt_visible_invisible_t)->case_idx_ = CASE1;
	}
#line 6255 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 2166 "bison.y" /* yacc.c:1646  */
    {
		(yyval.visible_invisible_t) = new VisibleInvisible();
		(yyval.visible_invisible_t)->case_idx_ = CASE0;
	}
#line 6264 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 2170 "bison.y" /* yacc.c:1646  */
    {
		(yyval.visible_invisible_t) = new VisibleInvisible();
		(yyval.visible_invisible_t)->case_idx_ = CASE1;
	}
#line 6273 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 2177 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_auto_increment_t) = new OptAutoIncrement();
		(yyval.opt_auto_increment_t)->case_idx_ = CASE0;
	}
#line 6282 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 2181 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_auto_increment_t) = new OptAutoIncrement();
		(yyval.opt_auto_increment_t)->case_idx_ = CASE1;
	}
#line 6291 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 2188 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_unique_primary_t) = new OptUniquePrimary();
		(yyval.opt_unique_primary_t)->case_idx_ = CASE0;
	}
#line 6300 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 2192 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_unique_primary_t) = new OptUniquePrimary();
		(yyval.opt_unique_primary_t)->case_idx_ = CASE1;
	}
#line 6309 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 2196 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_unique_primary_t) = new OptUniquePrimary();
		(yyval.opt_unique_primary_t)->case_idx_ = CASE2;
	}
#line 6318 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 2200 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_unique_primary_t) = new OptUniquePrimary();
		(yyval.opt_unique_primary_t)->case_idx_ = CASE3;
	}
#line 6327 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 2204 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_unique_primary_t) = new OptUniquePrimary();
		(yyval.opt_unique_primary_t)->case_idx_ = CASE4;
	}
#line 6336 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 2211 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_column_format_t) = new OptColumnFormat();
		(yyval.opt_column_format_t)->case_idx_ = CASE0;
		(yyval.opt_column_format_t)->column_format_ = (yyvsp[0].column_format_t);
	}
#line 6346 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 2216 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_column_format_t) = new OptColumnFormat();
		(yyval.opt_column_format_t)->case_idx_ = CASE1;
	}
#line 6355 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 2223 "bison.y" /* yacc.c:1646  */
    {
		(yyval.column_format_t) = new ColumnFormat();
		(yyval.column_format_t)->case_idx_ = CASE0;
	}
#line 6364 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 2227 "bison.y" /* yacc.c:1646  */
    {
		(yyval.column_format_t) = new ColumnFormat();
		(yyval.column_format_t)->case_idx_ = CASE1;
	}
#line 6373 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 2231 "bison.y" /* yacc.c:1646  */
    {
		(yyval.column_format_t) = new ColumnFormat();
		(yyval.column_format_t)->case_idx_ = CASE2;
	}
#line 6382 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 2238 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_storage_t) = new OptStorage();
		(yyval.opt_storage_t)->case_idx_ = CASE0;
		(yyval.opt_storage_t)->storage_ = (yyvsp[0].storage_t);
	}
#line 6392 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 2243 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_storage_t) = new OptStorage();
		(yyval.opt_storage_t)->case_idx_ = CASE1;
	}
#line 6401 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 2250 "bison.y" /* yacc.c:1646  */
    {
		(yyval.storage_t) = new Storage();
		(yyval.storage_t)->case_idx_ = CASE0;
	}
#line 6410 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 2254 "bison.y" /* yacc.c:1646  */
    {
		(yyval.storage_t) = new Storage();
		(yyval.storage_t)->case_idx_ = CASE1;
	}
#line 6419 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 2261 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_reference_definition_t) = new OptReferenceDefinition();
		(yyval.opt_reference_definition_t)->case_idx_ = CASE0;
		(yyval.opt_reference_definition_t)->reference_definition_ = (yyvsp[0].reference_definition_t);
	}
#line 6429 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 2266 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_reference_definition_t) = new OptReferenceDefinition();
		(yyval.opt_reference_definition_t)->case_idx_ = CASE1;
	}
#line 6438 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 2273 "bison.y" /* yacc.c:1646  */
    {
		(yyval.reference_definition_t) = new ReferenceDefinition();
		(yyval.reference_definition_t)->case_idx_ = CASE0;
		(yyval.reference_definition_t)->table_name_ = (yyvsp[-6].table_name_t);
		(yyval.reference_definition_t)->key_part_list_ = (yyvsp[-4].key_part_list_t);
		(yyval.reference_definition_t)->opt_match_ = (yyvsp[-2].opt_match_t);
		(yyval.reference_definition_t)->opt_on_delete_ = (yyvsp[-1].opt_on_delete_t);
		(yyval.reference_definition_t)->opt_on_update_ = (yyvsp[0].opt_on_update_t);
	}
#line 6452 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 2285 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_match_t) = new OptMatch();
		(yyval.opt_match_t)->case_idx_ = CASE0;
	}
#line 6461 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 2289 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_match_t) = new OptMatch();
		(yyval.opt_match_t)->case_idx_ = CASE1;
	}
#line 6470 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 2293 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_match_t) = new OptMatch();
		(yyval.opt_match_t)->case_idx_ = CASE2;
	}
#line 6479 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 2297 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_match_t) = new OptMatch();
		(yyval.opt_match_t)->case_idx_ = CASE3;
	}
#line 6488 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 2304 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_on_delete_t) = new OptOnDelete();
		(yyval.opt_on_delete_t)->case_idx_ = CASE0;
		(yyval.opt_on_delete_t)->reference_option_ = (yyvsp[0].reference_option_t);
	}
#line 6498 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 2309 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_on_delete_t) = new OptOnDelete();
		(yyval.opt_on_delete_t)->case_idx_ = CASE1;
	}
#line 6507 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 2316 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_on_update_t) = new OptOnUpdate();
		(yyval.opt_on_update_t)->case_idx_ = CASE0;
		(yyval.opt_on_update_t)->reference_option_ = (yyvsp[0].reference_option_t);
	}
#line 6517 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 2321 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_on_update_t) = new OptOnUpdate();
		(yyval.opt_on_update_t)->case_idx_ = CASE1;
	}
#line 6526 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 2328 "bison.y" /* yacc.c:1646  */
    {
		(yyval.reference_option_t) = new ReferenceOption();
		(yyval.reference_option_t)->case_idx_ = CASE0;
	}
#line 6535 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 290:
#line 2332 "bison.y" /* yacc.c:1646  */
    {
		(yyval.reference_option_t) = new ReferenceOption();
		(yyval.reference_option_t)->case_idx_ = CASE1;
	}
#line 6544 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 291:
#line 2336 "bison.y" /* yacc.c:1646  */
    {
		(yyval.reference_option_t) = new ReferenceOption();
		(yyval.reference_option_t)->case_idx_ = CASE2;
	}
#line 6553 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 292:
#line 2340 "bison.y" /* yacc.c:1646  */
    {
		(yyval.reference_option_t) = new ReferenceOption();
		(yyval.reference_option_t)->case_idx_ = CASE3;
	}
#line 6562 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 293:
#line 2344 "bison.y" /* yacc.c:1646  */
    {
		(yyval.reference_option_t) = new ReferenceOption();
		(yyval.reference_option_t)->case_idx_ = CASE4;
	}
#line 6571 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 294:
#line 2351 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_check_constraint_definition_t) = new OptCheckConstraintDefinition();
		(yyval.opt_check_constraint_definition_t)->case_idx_ = CASE0;
		(yyval.opt_check_constraint_definition_t)->check_constraint_definition_ = (yyvsp[0].check_constraint_definition_t);
	}
#line 6581 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 295:
#line 2356 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_check_constraint_definition_t) = new OptCheckConstraintDefinition();
		(yyval.opt_check_constraint_definition_t)->case_idx_ = CASE1;
	}
#line 6590 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 296:
#line 2363 "bison.y" /* yacc.c:1646  */
    {
		(yyval.check_constraint_definition_t) = new CheckConstraintDefinition();
		(yyval.check_constraint_definition_t)->case_idx_ = CASE0;
		(yyval.check_constraint_definition_t)->opt_constraint_symbol_ = (yyvsp[-5].opt_constraint_symbol_t);
		(yyval.check_constraint_definition_t)->expr_ = (yyvsp[-2].expr_t);
		(yyval.check_constraint_definition_t)->opt_enforced_ = (yyvsp[0].opt_enforced_t);
	}
#line 6602 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 2373 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_constraint_symbol_t) = new OptConstraintSymbol();
		(yyval.opt_constraint_symbol_t)->case_idx_ = CASE0;
		(yyval.opt_constraint_symbol_t)->symbol_ = (yyvsp[0].symbol_t);
	}
#line 6612 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 298:
#line 2378 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_constraint_symbol_t) = new OptConstraintSymbol();
		(yyval.opt_constraint_symbol_t)->case_idx_ = CASE1;
	}
#line 6621 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 299:
#line 2382 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_constraint_symbol_t) = new OptConstraintSymbol();
		(yyval.opt_constraint_symbol_t)->case_idx_ = CASE2;
	}
#line 6630 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 300:
#line 2389 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_enforced_t) = new OptEnforced();
		(yyval.opt_enforced_t)->case_idx_ = CASE0;
	}
#line 6639 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 301:
#line 2393 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_enforced_t) = new OptEnforced();
		(yyval.opt_enforced_t)->case_idx_ = CASE1;
	}
#line 6648 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 302:
#line 2397 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_enforced_t) = new OptEnforced();
		(yyval.opt_enforced_t)->case_idx_ = CASE2;
	}
#line 6657 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 303:
#line 2404 "bison.y" /* yacc.c:1646  */
    {
		(yyval.column_def_list_t) = new ColumnDefList();
		(yyval.column_def_list_t)->case_idx_ = CASE0;
		(yyval.column_def_list_t)->column_def_ = (yyvsp[0].column_def_t);
	}
#line 6667 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 304:
#line 2409 "bison.y" /* yacc.c:1646  */
    {
		(yyval.column_def_list_t) = new ColumnDefList();
		(yyval.column_def_list_t)->case_idx_ = CASE1;
		(yyval.column_def_list_t)->column_def_list_ = (yyvsp[-2].column_def_list_t);
		(yyval.column_def_list_t)->column_def_ = (yyvsp[0].column_def_t);
	}
#line 6678 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 305:
#line 2418 "bison.y" /* yacc.c:1646  */
    {
		(yyval.column_def_t) = new ColumnDef();
		(yyval.column_def_t)->case_idx_ = CASE0;
		(yyval.column_def_t)->column_name_ = (yyvsp[-1].column_name_t);
		(yyval.column_def_t)->column_definition_ = (yyvsp[0].column_definition_t);
	}
#line 6689 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 306:
#line 2427 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_temp_t) = new OptTemp();
		(yyval.opt_temp_t)->case_idx_ = CASE0;
	}
#line 6698 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 307:
#line 2431 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_temp_t) = new OptTemp();
		(yyval.opt_temp_t)->case_idx_ = CASE1;
	}
#line 6707 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 2438 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_check_option_t) = new OptCheckOption();
		(yyval.opt_check_option_t)->case_idx_ = CASE0;
	}
#line 6716 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 309:
#line 2442 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_check_option_t) = new OptCheckOption();
		(yyval.opt_check_option_t)->case_idx_ = CASE1;
	}
#line 6725 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 310:
#line 2446 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_check_option_t) = new OptCheckOption();
		(yyval.opt_check_option_t)->case_idx_ = CASE2;
	}
#line 6734 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 311:
#line 2450 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_check_option_t) = new OptCheckOption();
		(yyval.opt_check_option_t)->case_idx_ = CASE3;
	}
#line 6743 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 312:
#line 2457 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_column_name_list_p_t) = new OptColumnNameListP();
		(yyval.opt_column_name_list_p_t)->case_idx_ = CASE0;
		(yyval.opt_column_name_list_p_t)->column_name_list_ = (yyvsp[-1].column_name_list_t);
	}
#line 6753 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 313:
#line 2462 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_column_name_list_p_t) = new OptColumnNameListP();
		(yyval.opt_column_name_list_p_t)->case_idx_ = CASE1;
	}
#line 6762 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 314:
#line 2469 "bison.y" /* yacc.c:1646  */
    {
		(yyval.assignment_list_t) = new AssignmentList();
		(yyval.assignment_list_t)->case_idx_ = CASE0;
		(yyval.assignment_list_t)->assignment_ = (yyvsp[0].assignment_t);
	}
#line 6772 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 315:
#line 2474 "bison.y" /* yacc.c:1646  */
    {
		(yyval.assignment_list_t) = new AssignmentList();
		(yyval.assignment_list_t)->case_idx_ = CASE1;
		(yyval.assignment_list_t)->assignment_ = (yyvsp[-2].assignment_t);
		(yyval.assignment_list_t)->assignment_list_ = (yyvsp[0].assignment_list_t);
	}
#line 6783 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 316:
#line 2483 "bison.y" /* yacc.c:1646  */
    {
		(yyval.assignment_t) = new Assignment();
		(yyval.assignment_t)->case_idx_ = CASE0;
		(yyval.assignment_t)->column_name_ = (yyvsp[-2].column_name_t);
		(yyval.assignment_t)->value_ = (yyvsp[0].value_t);
	}
#line 6794 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 317:
#line 2492 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_as_alias_t) = new OptAsAlias();
		(yyval.opt_as_alias_t)->case_idx_ = CASE0;
		(yyval.opt_as_alias_t)->as_alias_ = (yyvsp[0].as_alias_t);
	}
#line 6804 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 318:
#line 2497 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_as_alias_t) = new OptAsAlias();
		(yyval.opt_as_alias_t)->case_idx_ = CASE1;
	}
#line 6813 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 319:
#line 2504 "bison.y" /* yacc.c:1646  */
    {
		(yyval.expr_t) = new Expr();
		(yyval.expr_t)->case_idx_ = CASE0;
		(yyval.expr_t)->operand_ = (yyvsp[0].operand_t);
	}
#line 6823 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 320:
#line 2509 "bison.y" /* yacc.c:1646  */
    {
		(yyval.expr_t) = new Expr();
		(yyval.expr_t)->case_idx_ = CASE1;
		(yyval.expr_t)->between_expr_ = (yyvsp[0].between_expr_t);
	}
#line 6833 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 321:
#line 2514 "bison.y" /* yacc.c:1646  */
    {
		(yyval.expr_t) = new Expr();
		(yyval.expr_t)->case_idx_ = CASE2;
		(yyval.expr_t)->exists_expr_ = (yyvsp[0].exists_expr_t);
	}
#line 6843 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 322:
#line 2519 "bison.y" /* yacc.c:1646  */
    {
		(yyval.expr_t) = new Expr();
		(yyval.expr_t)->case_idx_ = CASE3;
		(yyval.expr_t)->in_expr_ = (yyvsp[0].in_expr_t);
	}
#line 6853 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 323:
#line 2524 "bison.y" /* yacc.c:1646  */
    {
		(yyval.expr_t) = new Expr();
		(yyval.expr_t)->case_idx_ = CASE4;
		(yyval.expr_t)->cast_expr_ = (yyvsp[0].cast_expr_t);
	}
#line 6863 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 324:
#line 2529 "bison.y" /* yacc.c:1646  */
    {
		(yyval.expr_t) = new Expr();
		(yyval.expr_t)->case_idx_ = CASE5;
		(yyval.expr_t)->logic_expr_ = (yyvsp[0].logic_expr_t);
	}
#line 6873 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 325:
#line 2537 "bison.y" /* yacc.c:1646  */
    {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE0;
		(yyval.operand_t)->expr_list_ = (yyvsp[-1].expr_list_t);
	}
#line 6883 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 326:
#line 2542 "bison.y" /* yacc.c:1646  */
    {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE1;
		(yyval.operand_t)->array_index_ = (yyvsp[0].array_index_t);
	}
#line 6893 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 327:
#line 2547 "bison.y" /* yacc.c:1646  */
    {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE2;
		(yyval.operand_t)->scalar_expr_ = (yyvsp[0].scalar_expr_t);
	}
#line 6903 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 328:
#line 2552 "bison.y" /* yacc.c:1646  */
    {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE3;
		(yyval.operand_t)->unary_expr_ = (yyvsp[0].unary_expr_t);
	}
#line 6913 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 329:
#line 2557 "bison.y" /* yacc.c:1646  */
    {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE4;
		(yyval.operand_t)->binary_expr_ = (yyvsp[0].binary_expr_t);
	}
#line 6923 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 330:
#line 2562 "bison.y" /* yacc.c:1646  */
    {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE5;
		(yyval.operand_t)->case_expr_ = (yyvsp[0].case_expr_t);
	}
#line 6933 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 331:
#line 2567 "bison.y" /* yacc.c:1646  */
    {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE6;
		(yyval.operand_t)->extract_expr_ = (yyvsp[0].extract_expr_t);
	}
#line 6943 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 332:
#line 2572 "bison.y" /* yacc.c:1646  */
    {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE7;
		(yyval.operand_t)->array_expr_ = (yyvsp[0].array_expr_t);
	}
#line 6953 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 333:
#line 2577 "bison.y" /* yacc.c:1646  */
    {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE8;
		(yyval.operand_t)->function_expr_ = (yyvsp[0].function_expr_t);
	}
#line 6963 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 334:
#line 2582 "bison.y" /* yacc.c:1646  */
    {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE9;
		(yyval.operand_t)->select_no_parens_ = (yyvsp[-1].select_no_parens_t);
	}
#line 6973 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 335:
#line 2590 "bison.y" /* yacc.c:1646  */
    {
		(yyval.cast_expr_t) = new CastExpr();
		(yyval.cast_expr_t)->case_idx_ = CASE0;
		(yyval.cast_expr_t)->expr_ = (yyvsp[-3].expr_t);
		(yyval.cast_expr_t)->data_type_ = (yyvsp[-1].data_type_t);
	}
#line 6984 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 336:
#line 2599 "bison.y" /* yacc.c:1646  */
    {
		(yyval.scalar_expr_t) = new ScalarExpr();
		(yyval.scalar_expr_t)->case_idx_ = CASE0;
		(yyval.scalar_expr_t)->expr_column_name_ = (yyvsp[0].expr_column_name_t);
	}
#line 6994 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 337:
#line 2604 "bison.y" /* yacc.c:1646  */
    {
		(yyval.scalar_expr_t) = new ScalarExpr();
		(yyval.scalar_expr_t)->case_idx_ = CASE1;
		(yyval.scalar_expr_t)->literal_ = (yyvsp[0].literal_t);
	}
#line 7004 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 338:
#line 2612 "bison.y" /* yacc.c:1646  */
    {
		(yyval.unary_expr_t) = new UnaryExpr();
		(yyval.unary_expr_t)->case_idx_ = CASE0;
		(yyval.unary_expr_t)->operand_ = (yyvsp[0].operand_t);
	}
#line 7014 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 339:
#line 2617 "bison.y" /* yacc.c:1646  */
    {
		(yyval.unary_expr_t) = new UnaryExpr();
		(yyval.unary_expr_t)->case_idx_ = CASE1;
		(yyval.unary_expr_t)->operand_ = (yyvsp[0].operand_t);
	}
#line 7024 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 340:
#line 2622 "bison.y" /* yacc.c:1646  */
    {
		(yyval.unary_expr_t) = new UnaryExpr();
		(yyval.unary_expr_t)->case_idx_ = CASE2;
		(yyval.unary_expr_t)->operand_ = (yyvsp[-1].operand_t);
	}
#line 7034 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 341:
#line 2627 "bison.y" /* yacc.c:1646  */
    {
		(yyval.unary_expr_t) = new UnaryExpr();
		(yyval.unary_expr_t)->case_idx_ = CASE3;
		(yyval.unary_expr_t)->operand_ = (yyvsp[-2].operand_t);
	}
#line 7044 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 342:
#line 2632 "bison.y" /* yacc.c:1646  */
    {
		(yyval.unary_expr_t) = new UnaryExpr();
		(yyval.unary_expr_t)->case_idx_ = CASE4;
		(yyval.unary_expr_t)->operand_ = (yyvsp[-3].operand_t);
	}
#line 7054 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 343:
#line 2637 "bison.y" /* yacc.c:1646  */
    {
		(yyval.unary_expr_t) = new UnaryExpr();
		(yyval.unary_expr_t)->case_idx_ = CASE5;
	}
#line 7063 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 344:
#line 2644 "bison.y" /* yacc.c:1646  */
    {
		(yyval.binary_expr_t) = new BinaryExpr();
		(yyval.binary_expr_t)->case_idx_ = CASE0;
		(yyval.binary_expr_t)->comp_expr_ = (yyvsp[0].comp_expr_t);
	}
#line 7073 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 345:
#line 2649 "bison.y" /* yacc.c:1646  */
    {
		(yyval.binary_expr_t) = new BinaryExpr();
		(yyval.binary_expr_t)->case_idx_ = CASE1;
		(yyval.binary_expr_t)->operand_1_ = (yyvsp[-2].operand_t);
		(yyval.binary_expr_t)->binary_op_ = (yyvsp[-1].binary_op_t);
		(yyval.binary_expr_t)->operand_2_ = (yyvsp[0].operand_t);
	}
#line 7085 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 346:
#line 2656 "bison.y" /* yacc.c:1646  */
    {
		(yyval.binary_expr_t) = new BinaryExpr();
		(yyval.binary_expr_t)->case_idx_ = CASE2;
		(yyval.binary_expr_t)->operand_1_ = (yyvsp[-2].operand_t);
		(yyval.binary_expr_t)->operand_2_ = (yyvsp[0].operand_t);
	}
#line 7096 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 347:
#line 2662 "bison.y" /* yacc.c:1646  */
    {
		(yyval.binary_expr_t) = new BinaryExpr();
		(yyval.binary_expr_t)->case_idx_ = CASE3;
		(yyval.binary_expr_t)->operand_1_ = (yyvsp[-3].operand_t);
		(yyval.binary_expr_t)->operand_2_ = (yyvsp[0].operand_t);
	}
#line 7107 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 348:
#line 2671 "bison.y" /* yacc.c:1646  */
    {
		(yyval.logic_expr_t) = new LogicExpr();
		(yyval.logic_expr_t)->case_idx_ = CASE0;
		(yyval.logic_expr_t)->expr_1_ = (yyvsp[-2].expr_t);
		(yyval.logic_expr_t)->expr_2_ = (yyvsp[0].expr_t);
	}
#line 7118 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 349:
#line 2677 "bison.y" /* yacc.c:1646  */
    {
		(yyval.logic_expr_t) = new LogicExpr();
		(yyval.logic_expr_t)->case_idx_ = CASE1;
		(yyval.logic_expr_t)->expr_1_ = (yyvsp[-2].expr_t);
		(yyval.logic_expr_t)->expr_2_ = (yyvsp[0].expr_t);
	}
#line 7129 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 350:
#line 2686 "bison.y" /* yacc.c:1646  */
    {
		(yyval.in_expr_t) = new InExpr();
		(yyval.in_expr_t)->case_idx_ = CASE0;
		(yyval.in_expr_t)->operand_ = (yyvsp[-5].operand_t);
		(yyval.in_expr_t)->opt_not_ = (yyvsp[-4].opt_not_t);
		(yyval.in_expr_t)->select_no_parens_ = (yyvsp[-1].select_no_parens_t);
	}
#line 7141 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 351:
#line 2693 "bison.y" /* yacc.c:1646  */
    {
		(yyval.in_expr_t) = new InExpr();
		(yyval.in_expr_t)->case_idx_ = CASE1;
		(yyval.in_expr_t)->operand_ = (yyvsp[-5].operand_t);
		(yyval.in_expr_t)->opt_not_ = (yyvsp[-4].opt_not_t);
		(yyval.in_expr_t)->expr_list_ = (yyvsp[-1].expr_list_t);
	}
#line 7153 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 352:
#line 2700 "bison.y" /* yacc.c:1646  */
    {
		(yyval.in_expr_t) = new InExpr();
		(yyval.in_expr_t)->case_idx_ = CASE2;
		(yyval.in_expr_t)->operand_ = (yyvsp[-3].operand_t);
		(yyval.in_expr_t)->opt_not_ = (yyvsp[-2].opt_not_t);
		(yyval.in_expr_t)->table_name_ = (yyvsp[0].table_name_t);
	}
#line 7165 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 353:
#line 2710 "bison.y" /* yacc.c:1646  */
    {
		(yyval.case_expr_t) = new CaseExpr();
		(yyval.case_expr_t)->case_idx_ = CASE0;
		(yyval.case_expr_t)->expr_1_ = (yyvsp[-2].expr_t);
		(yyval.case_expr_t)->case_list_ = (yyvsp[-1].case_list_t);
	}
#line 7176 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 354:
#line 2716 "bison.y" /* yacc.c:1646  */
    {
		(yyval.case_expr_t) = new CaseExpr();
		(yyval.case_expr_t)->case_idx_ = CASE1;
		(yyval.case_expr_t)->case_list_ = (yyvsp[-1].case_list_t);
	}
#line 7186 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 355:
#line 2721 "bison.y" /* yacc.c:1646  */
    {
		(yyval.case_expr_t) = new CaseExpr();
		(yyval.case_expr_t)->case_idx_ = CASE2;
		(yyval.case_expr_t)->expr_1_ = (yyvsp[-4].expr_t);
		(yyval.case_expr_t)->case_list_ = (yyvsp[-3].case_list_t);
		(yyval.case_expr_t)->expr_2_ = (yyvsp[-1].expr_t);
	}
#line 7198 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 356:
#line 2728 "bison.y" /* yacc.c:1646  */
    {
		(yyval.case_expr_t) = new CaseExpr();
		(yyval.case_expr_t)->case_idx_ = CASE3;
		(yyval.case_expr_t)->case_list_ = (yyvsp[-3].case_list_t);
		(yyval.case_expr_t)->expr_1_ = (yyvsp[-1].expr_t);
	}
#line 7209 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 357:
#line 2737 "bison.y" /* yacc.c:1646  */
    {
		(yyval.between_expr_t) = new BetweenExpr();
		(yyval.between_expr_t)->case_idx_ = CASE0;
		(yyval.between_expr_t)->operand_1_ = (yyvsp[-4].operand_t);
		(yyval.between_expr_t)->operand_2_ = (yyvsp[-2].operand_t);
		(yyval.between_expr_t)->operand_3_ = (yyvsp[0].operand_t);
	}
#line 7221 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 358:
#line 2744 "bison.y" /* yacc.c:1646  */
    {
		(yyval.between_expr_t) = new BetweenExpr();
		(yyval.between_expr_t)->case_idx_ = CASE1;
		(yyval.between_expr_t)->operand_1_ = (yyvsp[-5].operand_t);
		(yyval.between_expr_t)->operand_2_ = (yyvsp[-2].operand_t);
		(yyval.between_expr_t)->operand_3_ = (yyvsp[0].operand_t);
	}
#line 7233 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 359:
#line 2754 "bison.y" /* yacc.c:1646  */
    {
		(yyval.exists_expr_t) = new ExistsExpr();
		(yyval.exists_expr_t)->case_idx_ = CASE0;
		(yyval.exists_expr_t)->opt_not_ = (yyvsp[-4].opt_not_t);
		(yyval.exists_expr_t)->select_no_parens_ = (yyvsp[-1].select_no_parens_t);
	}
#line 7244 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 360:
#line 2763 "bison.y" /* yacc.c:1646  */
    {
		(yyval.function_expr_t) = new FunctionExpr();
		(yyval.function_expr_t)->case_idx_ = CASE0;
		(yyval.function_expr_t)->function_name_ = (yyvsp[-3].function_name_t);
		(yyval.function_expr_t)->opt_over_clause_ = (yyvsp[0].opt_over_clause_t);
	}
#line 7255 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 361:
#line 2769 "bison.y" /* yacc.c:1646  */
    {
		(yyval.function_expr_t) = new FunctionExpr();
		(yyval.function_expr_t)->case_idx_ = CASE1;
		(yyval.function_expr_t)->function_name_ = (yyvsp[-5].function_name_t);
		(yyval.function_expr_t)->opt_distinct_ = (yyvsp[-3].opt_distinct_t);
		(yyval.function_expr_t)->expr_list_ = (yyvsp[-2].expr_list_t);
		(yyval.function_expr_t)->opt_over_clause_ = (yyvsp[0].opt_over_clause_t);
	}
#line 7268 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 362:
#line 2780 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_distinct_t) = new OptDistinct();
		(yyval.opt_distinct_t)->case_idx_ = CASE0;
	}
#line 7277 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 363:
#line 2784 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_distinct_t) = new OptDistinct();
		(yyval.opt_distinct_t)->case_idx_ = CASE1;
	}
#line 7286 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 364:
#line 2791 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_over_clause_t) = new OptOverClause();
		(yyval.opt_over_clause_t)->case_idx_ = CASE0;
		(yyval.opt_over_clause_t)->window_ = (yyvsp[-1].window_t);
	}
#line 7296 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 365:
#line 2796 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_over_clause_t) = new OptOverClause();
		(yyval.opt_over_clause_t)->case_idx_ = CASE1;
		(yyval.opt_over_clause_t)->window_name_ = (yyvsp[0].window_name_t);
	}
#line 7306 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 366:
#line 2801 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_over_clause_t) = new OptOverClause();
		(yyval.opt_over_clause_t)->case_idx_ = CASE2;
	}
#line 7315 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 367:
#line 2808 "bison.y" /* yacc.c:1646  */
    {
		(yyval.case_list_t) = new CaseList();
		(yyval.case_list_t)->case_idx_ = CASE0;
		(yyval.case_list_t)->case_clause_ = (yyvsp[0].case_clause_t);
	}
#line 7325 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 368:
#line 2813 "bison.y" /* yacc.c:1646  */
    {
		(yyval.case_list_t) = new CaseList();
		(yyval.case_list_t)->case_idx_ = CASE1;
		(yyval.case_list_t)->case_clause_ = (yyvsp[-1].case_clause_t);
		(yyval.case_list_t)->case_list_ = (yyvsp[0].case_list_t);
	}
#line 7336 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 369:
#line 2822 "bison.y" /* yacc.c:1646  */
    {
		(yyval.case_clause_t) = new CaseClause();
		(yyval.case_clause_t)->case_idx_ = CASE0;
		(yyval.case_clause_t)->expr_1_ = (yyvsp[-2].expr_t);
		(yyval.case_clause_t)->expr_2_ = (yyvsp[0].expr_t);
	}
#line 7347 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 370:
#line 2831 "bison.y" /* yacc.c:1646  */
    {
		(yyval.comp_expr_t) = new CompExpr();
		(yyval.comp_expr_t)->case_idx_ = CASE0;
		(yyval.comp_expr_t)->operand_1_ = (yyvsp[-2].operand_t);
		(yyval.comp_expr_t)->operand_2_ = (yyvsp[0].operand_t);
	}
#line 7358 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 371:
#line 2837 "bison.y" /* yacc.c:1646  */
    {
		(yyval.comp_expr_t) = new CompExpr();
		(yyval.comp_expr_t)->case_idx_ = CASE1;
		(yyval.comp_expr_t)->operand_1_ = (yyvsp[-2].operand_t);
		(yyval.comp_expr_t)->operand_2_ = (yyvsp[0].operand_t);
	}
#line 7369 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 372:
#line 2843 "bison.y" /* yacc.c:1646  */
    {
		(yyval.comp_expr_t) = new CompExpr();
		(yyval.comp_expr_t)->case_idx_ = CASE2;
		(yyval.comp_expr_t)->operand_1_ = (yyvsp[-2].operand_t);
		(yyval.comp_expr_t)->operand_2_ = (yyvsp[0].operand_t);
	}
#line 7380 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 373:
#line 2849 "bison.y" /* yacc.c:1646  */
    {
		(yyval.comp_expr_t) = new CompExpr();
		(yyval.comp_expr_t)->case_idx_ = CASE3;
		(yyval.comp_expr_t)->operand_1_ = (yyvsp[-2].operand_t);
		(yyval.comp_expr_t)->operand_2_ = (yyvsp[0].operand_t);
	}
#line 7391 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 374:
#line 2855 "bison.y" /* yacc.c:1646  */
    {
		(yyval.comp_expr_t) = new CompExpr();
		(yyval.comp_expr_t)->case_idx_ = CASE4;
		(yyval.comp_expr_t)->operand_1_ = (yyvsp[-2].operand_t);
		(yyval.comp_expr_t)->operand_2_ = (yyvsp[0].operand_t);
	}
#line 7402 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 375:
#line 2861 "bison.y" /* yacc.c:1646  */
    {
		(yyval.comp_expr_t) = new CompExpr();
		(yyval.comp_expr_t)->case_idx_ = CASE5;
		(yyval.comp_expr_t)->operand_1_ = (yyvsp[-2].operand_t);
		(yyval.comp_expr_t)->operand_2_ = (yyvsp[0].operand_t);
	}
#line 7413 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 376:
#line 2870 "bison.y" /* yacc.c:1646  */
    {
		(yyval.extract_expr_t) = new ExtractExpr();
		(yyval.extract_expr_t)->case_idx_ = CASE0;
		(yyval.extract_expr_t)->datetime_field_ = (yyvsp[-3].datetime_field_t);
		(yyval.extract_expr_t)->expr_ = (yyvsp[-1].expr_t);
	}
#line 7424 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 377:
#line 2879 "bison.y" /* yacc.c:1646  */
    {
		(yyval.datetime_field_t) = new DatetimeField();
		(yyval.datetime_field_t)->case_idx_ = CASE0;
	}
#line 7433 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 378:
#line 2883 "bison.y" /* yacc.c:1646  */
    {
		(yyval.datetime_field_t) = new DatetimeField();
		(yyval.datetime_field_t)->case_idx_ = CASE1;
	}
#line 7442 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 379:
#line 2887 "bison.y" /* yacc.c:1646  */
    {
		(yyval.datetime_field_t) = new DatetimeField();
		(yyval.datetime_field_t)->case_idx_ = CASE2;
	}
#line 7451 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 380:
#line 2891 "bison.y" /* yacc.c:1646  */
    {
		(yyval.datetime_field_t) = new DatetimeField();
		(yyval.datetime_field_t)->case_idx_ = CASE3;
	}
#line 7460 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 381:
#line 2895 "bison.y" /* yacc.c:1646  */
    {
		(yyval.datetime_field_t) = new DatetimeField();
		(yyval.datetime_field_t)->case_idx_ = CASE4;
	}
#line 7469 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 382:
#line 2899 "bison.y" /* yacc.c:1646  */
    {
		(yyval.datetime_field_t) = new DatetimeField();
		(yyval.datetime_field_t)->case_idx_ = CASE5;
	}
#line 7478 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 383:
#line 2906 "bison.y" /* yacc.c:1646  */
    {
		(yyval.array_expr_t) = new ArrayExpr();
		(yyval.array_expr_t)->case_idx_ = CASE0;
		(yyval.array_expr_t)->expr_list_ = (yyvsp[-1].expr_list_t);
	}
#line 7488 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 384:
#line 2914 "bison.y" /* yacc.c:1646  */
    {
		(yyval.array_index_t) = new ArrayIndex();
		(yyval.array_index_t)->case_idx_ = CASE0;
		(yyval.array_index_t)->operand_ = (yyvsp[-3].operand_t);
		(yyval.array_index_t)->int_literal_ = (yyvsp[-1].int_literal_t);
	}
#line 7499 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 385:
#line 2923 "bison.y" /* yacc.c:1646  */
    {
		(yyval.literal_t) = new Literal();
		(yyval.literal_t)->case_idx_ = CASE0;
		(yyval.literal_t)->string_literal_ = (yyvsp[0].string_literal_t);
	}
#line 7509 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 386:
#line 2928 "bison.y" /* yacc.c:1646  */
    {
		(yyval.literal_t) = new Literal();
		(yyval.literal_t)->case_idx_ = CASE1;
		(yyval.literal_t)->bool_literal_ = (yyvsp[0].bool_literal_t);
	}
#line 7519 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 387:
#line 2933 "bison.y" /* yacc.c:1646  */
    {
		(yyval.literal_t) = new Literal();
		(yyval.literal_t)->case_idx_ = CASE2;
		(yyval.literal_t)->num_literal_ = (yyvsp[0].num_literal_t);
	}
#line 7529 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 388:
#line 2941 "bison.y" /* yacc.c:1646  */
    {
		(yyval.string_literal_t) = new StringLiteral();
		(yyval.string_literal_t)->case_idx_ = CASE0;
		(yyval.string_literal_t)->string_val_ = (yyvsp[0].sval);
		free((yyvsp[0].sval));
	}
#line 7540 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 389:
#line 2950 "bison.y" /* yacc.c:1646  */
    {
		(yyval.bool_literal_t) = new BoolLiteral();
		(yyval.bool_literal_t)->case_idx_ = CASE0;
	}
#line 7549 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 390:
#line 2954 "bison.y" /* yacc.c:1646  */
    {
		(yyval.bool_literal_t) = new BoolLiteral();
		(yyval.bool_literal_t)->case_idx_ = CASE1;
	}
#line 7558 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 391:
#line 2961 "bison.y" /* yacc.c:1646  */
    {
		(yyval.num_literal_t) = new NumLiteral();
		(yyval.num_literal_t)->case_idx_ = CASE0;
		(yyval.num_literal_t)->int_literal_ = (yyvsp[0].int_literal_t);
	}
#line 7568 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 392:
#line 2966 "bison.y" /* yacc.c:1646  */
    {
		(yyval.num_literal_t) = new NumLiteral();
		(yyval.num_literal_t)->case_idx_ = CASE1;
		(yyval.num_literal_t)->float_literal_ = (yyvsp[0].float_literal_t);
	}
#line 7578 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 393:
#line 2974 "bison.y" /* yacc.c:1646  */
    {
		(yyval.int_literal_t) = new IntLiteral();
		(yyval.int_literal_t)->case_idx_ = CASE0;
		(yyval.int_literal_t)->int_val_ = (yyvsp[0].ival);
	}
#line 7588 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 394:
#line 2982 "bison.y" /* yacc.c:1646  */
    {
		(yyval.float_literal_t) = new FloatLiteral();
		(yyval.float_literal_t)->case_idx_ = CASE0;
		(yyval.float_literal_t)->float_val_ = (yyvsp[0].fval);
	}
#line 7598 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 395:
#line 2990 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_column_t) = new OptColumn();
		(yyval.opt_column_t)->case_idx_ = CASE0;
	}
#line 7607 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 396:
#line 2994 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_column_t) = new OptColumn();
		(yyval.opt_column_t)->case_idx_ = CASE1;
	}
#line 7616 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 397:
#line 3001 "bison.y" /* yacc.c:1646  */
    {
		(yyval.trigger_body_t) = new TriggerBody();
		(yyval.trigger_body_t)->case_idx_ = CASE0;
		(yyval.trigger_body_t)->drop_stmt_ = (yyvsp[0].drop_stmt_t);
	}
#line 7626 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 398:
#line 3006 "bison.y" /* yacc.c:1646  */
    {
		(yyval.trigger_body_t) = new TriggerBody();
		(yyval.trigger_body_t)->case_idx_ = CASE1;
		(yyval.trigger_body_t)->update_stmt_ = (yyvsp[0].update_stmt_t);
	}
#line 7636 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 399:
#line 3011 "bison.y" /* yacc.c:1646  */
    {
		(yyval.trigger_body_t) = new TriggerBody();
		(yyval.trigger_body_t)->case_idx_ = CASE2;
		(yyval.trigger_body_t)->insert_stmt_ = (yyvsp[0].insert_stmt_t);
	}
#line 7646 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 400:
#line 3016 "bison.y" /* yacc.c:1646  */
    {
		(yyval.trigger_body_t) = new TriggerBody();
		(yyval.trigger_body_t)->case_idx_ = CASE3;
		(yyval.trigger_body_t)->alter_stmt_ = (yyvsp[0].alter_stmt_t);
	}
#line 7656 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 401:
#line 3024 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_if_not_exist_t) = new OptIfNotExist();
		(yyval.opt_if_not_exist_t)->case_idx_ = CASE0;
	}
#line 7665 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 402:
#line 3028 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_if_not_exist_t) = new OptIfNotExist();
		(yyval.opt_if_not_exist_t)->case_idx_ = CASE1;
	}
#line 7674 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 403:
#line 3035 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_if_exist_t) = new OptIfExist();
		(yyval.opt_if_exist_t)->case_idx_ = CASE0;
	}
#line 7683 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 404:
#line 3039 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_if_exist_t) = new OptIfExist();
		(yyval.opt_if_exist_t)->case_idx_ = CASE1;
	}
#line 7692 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 405:
#line 3046 "bison.y" /* yacc.c:1646  */
    {
		(yyval.identifier_t) = new Identifier();
		(yyval.identifier_t)->case_idx_ = CASE0;
		(yyval.identifier_t)->string_val_ = (yyvsp[0].sval);
		free((yyvsp[0].sval));
	}
#line 7703 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 406:
#line 3055 "bison.y" /* yacc.c:1646  */
    {
		(yyval.as_alias_t) = new AsAlias();
		(yyval.as_alias_t)->case_idx_ = CASE0;
		(yyval.as_alias_t)->identifier_ = (yyvsp[0].identifier_t);
	}
#line 7713 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 407:
#line 3063 "bison.y" /* yacc.c:1646  */
    {
		(yyval.table_name_t) = new TableName();
		(yyval.table_name_t)->case_idx_ = CASE0;
		(yyval.table_name_t)->identifier_ = (yyvsp[0].identifier_t);
	}
#line 7723 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 408:
#line 3071 "bison.y" /* yacc.c:1646  */
    {
		(yyval.index_name_t) = new IndexName();
		(yyval.index_name_t)->case_idx_ = CASE0;
		(yyval.index_name_t)->identifier_ = (yyvsp[0].identifier_t);
	}
#line 7733 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 409:
#line 3079 "bison.y" /* yacc.c:1646  */
    {
		(yyval.column_name_t) = new ColumnName();
		(yyval.column_name_t)->case_idx_ = CASE0;
		(yyval.column_name_t)->identifier_ = (yyvsp[0].identifier_t);
	}
#line 7743 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 410:
#line 3087 "bison.y" /* yacc.c:1646  */
    {
		(yyval.expr_column_name_t) = new ExprColumnName();
		(yyval.expr_column_name_t)->case_idx_ = CASE0;
		(yyval.expr_column_name_t)->column_name_ = (yyvsp[0].column_name_t);
	}
#line 7753 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 411:
#line 3092 "bison.y" /* yacc.c:1646  */
    {
		(yyval.expr_column_name_t) = new ExprColumnName();
		(yyval.expr_column_name_t)->case_idx_ = CASE1;
		(yyval.expr_column_name_t)->table_name_ = (yyvsp[-2].table_name_t);
		(yyval.expr_column_name_t)->column_name_ = (yyvsp[0].column_name_t);
	}
#line 7764 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 412:
#line 3098 "bison.y" /* yacc.c:1646  */
    {
		(yyval.expr_column_name_t) = new ExprColumnName();
		(yyval.expr_column_name_t)->case_idx_ = CASE2;
	}
#line 7773 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 413:
#line 3102 "bison.y" /* yacc.c:1646  */
    {
		(yyval.expr_column_name_t) = new ExprColumnName();
		(yyval.expr_column_name_t)->case_idx_ = CASE3;
		(yyval.expr_column_name_t)->table_name_ = (yyvsp[-2].table_name_t);
	}
#line 7783 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 414:
#line 3110 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_index_keyword_t) = new OptIndexKeyword();
		(yyval.opt_index_keyword_t)->case_idx_ = CASE0;
	}
#line 7792 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 415:
#line 3114 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_index_keyword_t) = new OptIndexKeyword();
		(yyval.opt_index_keyword_t)->case_idx_ = CASE1;
	}
#line 7801 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 416:
#line 3118 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_index_keyword_t) = new OptIndexKeyword();
		(yyval.opt_index_keyword_t)->case_idx_ = CASE2;
	}
#line 7810 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 417:
#line 3122 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_index_keyword_t) = new OptIndexKeyword();
		(yyval.opt_index_keyword_t)->case_idx_ = CASE3;
	}
#line 7819 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 418:
#line 3129 "bison.y" /* yacc.c:1646  */
    {
		(yyval.view_name_t) = new ViewName();
		(yyval.view_name_t)->case_idx_ = CASE0;
		(yyval.view_name_t)->identifier_ = (yyvsp[0].identifier_t);
	}
#line 7829 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 419:
#line 3137 "bison.y" /* yacc.c:1646  */
    {
		(yyval.function_name_t) = new FunctionName();
		(yyval.function_name_t)->case_idx_ = CASE0;
		(yyval.function_name_t)->identifier_ = (yyvsp[0].identifier_t);
	}
#line 7839 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 420:
#line 3145 "bison.y" /* yacc.c:1646  */
    {
		(yyval.binary_op_t) = new BinaryOp();
		(yyval.binary_op_t)->case_idx_ = CASE0;
	}
#line 7848 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 421:
#line 3149 "bison.y" /* yacc.c:1646  */
    {
		(yyval.binary_op_t) = new BinaryOp();
		(yyval.binary_op_t)->case_idx_ = CASE1;
	}
#line 7857 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 422:
#line 3153 "bison.y" /* yacc.c:1646  */
    {
		(yyval.binary_op_t) = new BinaryOp();
		(yyval.binary_op_t)->case_idx_ = CASE2;
	}
#line 7866 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 423:
#line 3157 "bison.y" /* yacc.c:1646  */
    {
		(yyval.binary_op_t) = new BinaryOp();
		(yyval.binary_op_t)->case_idx_ = CASE3;
	}
#line 7875 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 424:
#line 3161 "bison.y" /* yacc.c:1646  */
    {
		(yyval.binary_op_t) = new BinaryOp();
		(yyval.binary_op_t)->case_idx_ = CASE4;
	}
#line 7884 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 425:
#line 3165 "bison.y" /* yacc.c:1646  */
    {
		(yyval.binary_op_t) = new BinaryOp();
		(yyval.binary_op_t)->case_idx_ = CASE5;
	}
#line 7893 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 426:
#line 3172 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_not_t) = new OptNot();
		(yyval.opt_not_t)->case_idx_ = CASE0;
	}
#line 7902 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 427:
#line 3176 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_not_t) = new OptNot();
		(yyval.opt_not_t)->case_idx_ = CASE1;
	}
#line 7911 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 428:
#line 3183 "bison.y" /* yacc.c:1646  */
    {
		(yyval.symbol_t) = new Symbol();
		(yyval.symbol_t)->case_idx_ = CASE0;
		(yyval.symbol_t)->identifier_ = (yyvsp[0].identifier_t);
	}
#line 7921 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 429:
#line 3191 "bison.y" /* yacc.c:1646  */
    {
		(yyval.data_type_t) = new DataType();
		(yyval.data_type_t)->case_idx_ = CASE0;
		(yyval.data_type_t)->numeric_type_ = (yyvsp[0].numeric_type_t);
	}
#line 7931 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 430:
#line 3196 "bison.y" /* yacc.c:1646  */
    {
		(yyval.data_type_t) = new DataType();
		(yyval.data_type_t)->case_idx_ = CASE1;
		(yyval.data_type_t)->character_type_ = (yyvsp[0].character_type_t);
	}
#line 7941 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 431:
#line 3204 "bison.y" /* yacc.c:1646  */
    {
		(yyval.character_type_t) = new CharacterType();
		(yyval.character_type_t)->case_idx_ = CASE0;
		(yyval.character_type_t)->character_conflicta_ = (yyvsp[-1].character_conflicta_t);
		(yyval.character_type_t)->opt_length_ = (yyvsp[0].opt_length_t);
	}
#line 7952 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 432:
#line 3210 "bison.y" /* yacc.c:1646  */
    {
		(yyval.character_type_t) = new CharacterType();
		(yyval.character_type_t)->case_idx_ = CASE1;
	}
#line 7961 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 433:
#line 3214 "bison.y" /* yacc.c:1646  */
    {
		(yyval.character_type_t) = new CharacterType();
		(yyval.character_type_t)->case_idx_ = CASE2;
	}
#line 7970 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 434:
#line 3218 "bison.y" /* yacc.c:1646  */
    {
		(yyval.character_type_t) = new CharacterType();
		(yyval.character_type_t)->case_idx_ = CASE3;
	}
#line 7979 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 435:
#line 3225 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_length_t) = new OptLength();
		(yyval.opt_length_t)->case_idx_ = CASE0;
		(yyval.opt_length_t)->int_literal_ = (yyvsp[-1].int_literal_t);
	}
#line 7989 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 436:
#line 3230 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_length_t) = new OptLength();
		(yyval.opt_length_t)->case_idx_ = CASE1;
	}
#line 7998 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 437:
#line 3237 "bison.y" /* yacc.c:1646  */
    {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE0;
	}
#line 8007 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 438:
#line 3241 "bison.y" /* yacc.c:1646  */
    {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE1;
	}
#line 8016 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 439:
#line 3245 "bison.y" /* yacc.c:1646  */
    {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE2;
	}
#line 8025 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 440:
#line 3249 "bison.y" /* yacc.c:1646  */
    {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE3;
	}
#line 8034 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 441:
#line 3253 "bison.y" /* yacc.c:1646  */
    {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE4;
	}
#line 8043 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 442:
#line 3257 "bison.y" /* yacc.c:1646  */
    {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE5;
	}
#line 8052 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 443:
#line 3261 "bison.y" /* yacc.c:1646  */
    {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE6;
	}
#line 8061 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 444:
#line 3265 "bison.y" /* yacc.c:1646  */
    {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE7;
	}
#line 8070 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 445:
#line 3269 "bison.y" /* yacc.c:1646  */
    {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE8;
	}
#line 8079 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 446:
#line 3273 "bison.y" /* yacc.c:1646  */
    {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE9;
	}
#line 8088 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 447:
#line 3280 "bison.y" /* yacc.c:1646  */
    {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE0;
	}
#line 8097 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 448:
#line 3284 "bison.y" /* yacc.c:1646  */
    {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE1;
	}
#line 8106 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 449:
#line 3288 "bison.y" /* yacc.c:1646  */
    {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE2;
	}
#line 8115 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 450:
#line 3292 "bison.y" /* yacc.c:1646  */
    {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE3;
	}
#line 8124 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 451:
#line 3296 "bison.y" /* yacc.c:1646  */
    {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE4;
	}
#line 8133 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 452:
#line 3300 "bison.y" /* yacc.c:1646  */
    {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE5;
	}
#line 8142 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 453:
#line 3304 "bison.y" /* yacc.c:1646  */
    {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE6;
	}
#line 8151 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 454:
#line 3308 "bison.y" /* yacc.c:1646  */
    {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE7;
	}
#line 8160 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 455:
#line 3312 "bison.y" /* yacc.c:1646  */
    {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE8;
	}
#line 8169 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 456:
#line 3316 "bison.y" /* yacc.c:1646  */
    {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE9;
	}
#line 8178 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 457:
#line 3320 "bison.y" /* yacc.c:1646  */
    {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE10;
	}
#line 8187 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 458:
#line 3324 "bison.y" /* yacc.c:1646  */
    {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE11;
	}
#line 8196 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 459:
#line 3328 "bison.y" /* yacc.c:1646  */
    {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE12;
	}
#line 8205 "bison_parser.cpp" /* yacc.c:1646  */
    break;


#line 8209 "bison_parser.cpp" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, result, scanner, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (&yylloc, result, scanner, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, result, scanner);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, result, scanner);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, result, scanner, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, result, scanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, result, scanner);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 3334 "bison.y" /* yacc.c:1906  */

