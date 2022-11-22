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

#line 82 "bison.tab.c" /* yacc.c:339  */

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

#line 122 "bison.tab.c" /* yacc.c:355  */

/* Token type.  */
#ifndef FF_TOKENTYPE
# define FF_TOKENTYPE
  enum ff_tokentype
  {
    SQL_OP_NOTEQUAL = 258,
    SQL_ENABLE = 259,
    SQL_SIMPLE = 260,
    SQL_TEXT = 261,
    SQL_OVER = 262,
    SQL_YEAR = 263,
    SQL_INSERT_METHOD = 264,
    SQL_OP_SEMI = 265,
    SQL_BIGINT = 266,
    SQL_LIMIT = 267,
    SQL_OP_GREATERTHAN = 268,
    SQL_WITH = 269,
    SQL_ORDER = 270,
    SQL_OPTION = 271,
    SQL_LAST = 272,
    SQL_UNBOUNDED = 273,
    SQL_PRECEDING = 274,
    SQL_EXCEPT = 275,
    SQL_NUMERIC = 276,
    SQL_OP_LESSTHAN = 277,
    SQL_ACTION = 278,
    SQL_BEFORE = 279,
    SQL_OP_GREATEREQ = 280,
    SQL_CHECK = 281,
    SQL_COMPACT = 282,
    SQL_FULL = 283,
    SQL_NATURAL = 284,
    SQL_BINARY = 285,
    SQL_NATIONAL = 286,
    SQL_ENUM = 287,
    SQL_REDUNDANT = 288,
    SQL_OP_ADD = 289,
    SQL_CURRENT = 290,
    SQL_MERGE = 291,
    SQL_TRIGGER = 292,
    SQL_COMPRESSED = 293,
    SQL_OP_SUB = 294,
    SQL_FALSE = 295,
    SQL_UNIQUE = 296,
    SQL_WHERE = 297,
    SQL_MINUTE = 298,
    SQL_FIRST = 299,
    SQL_ON = 300,
    SQL_PARTIAL = 301,
    SQL_DOUBLE = 302,
    SQL_AFTER = 303,
    SQL_PRIMARY = 304,
    SQL_MONTH = 305,
    SQL_DEFERRED = 306,
    SQL_VALUES = 307,
    SQL_LONGTEXT = 308,
    SQL_SQL = 309,
    SQL_SHARED = 310,
    SQL_VALIDATION = 311,
    SQL_OR = 312,
    SQL_VIEW = 313,
    SQL_INDEX = 314,
    SQL_GROUP = 315,
    SQL_OP_MUL = 316,
    SQL_INPLACE = 317,
    SQL_FOREIGN = 318,
    SQL_RESTRICT = 319,
    SQL_SPATIAL = 320,
    SQL_FOLLOWING = 321,
    SQL_DEC = 322,
    SQL_SELECT = 323,
    SQL_NONE = 324,
    SQL_DISTINCT = 325,
    SQL_TRUE = 326,
    SQL_DYNAMIC = 327,
    SQL_BY = 328,
    SQL_OP_MOD = 329,
    SQL_INTEGER = 330,
    SQL_SECURITY = 331,
    SQL_IS = 332,
    SQL_DEFINER = 333,
    SQL_ROW = 334,
    SQL_ENFORCED = 335,
    SQL_END = 336,
    SQL_RECURSIVE = 337,
    SQL_FOR = 338,
    SQL_TEMPTABLE = 339,
    SQL_UNION = 340,
    SQL_NULLS = 341,
    SQL_UPDATE = 342,
    SQL_ELSE = 343,
    SQL_RANGE = 344,
    SQL_SET = 345,
    SQL_INVOKER = 346,
    SQL_OFFSET = 347,
    SQL_INDEXED = 348,
    SQL_FORCE = 349,
    SQL_NCHAR = 350,
    SQL_AND = 351,
    SQL_INITIALLY = 352,
    SQL_PRECISION = 353,
    SQL_FILTER = 354,
    SQL_WITHOUT = 355,
    SQL_NOT = 356,
    SQL_DELETE = 357,
    SQL_DEFFERRABLE = 358,
    SQL_REAL = 359,
    SQL_THEN = 360,
    SQL_UNDEFINED = 361,
    SQL_DEFAULT = 362,
    SQL_CROSS = 363,
    SQL_CHAR = 364,
    SQL_REFERENCES = 365,
    SQL_OP_XOR = 366,
    SQL_CASE = 367,
    SQL_FIXED = 368,
    SQL_HOUR = 369,
    SQL_NO = 370,
    SQL_COLUMN = 371,
    SQL_LOCAL = 372,
    SQL_DROP = 373,
    SQL_REPLACE = 374,
    SQL_ASC = 375,
    SQL_OP_COMMA = 376,
    SQL_DISABLE = 377,
    SQL_TABLE = 378,
    SQL_ARRAY = 379,
    SQL_IF = 380,
    SQL_EXTRACT = 381,
    SQL_LEFT = 382,
    SQL_FULLTEXT = 383,
    SQL_HASH = 384,
    SQL_ALGORITHM = 385,
    SQL_LOCK = 386,
    SQL_DECIMAL = 387,
    SQL_PARTITION = 388,
    SQL_CASCADE = 389,
    SQL_ADD = 390,
    SQL_BETWEEN = 391,
    SQL_OP_LESSEQ = 392,
    SQL_MATCH = 393,
    SQL_ALL = 394,
    SQL_ROWS = 395,
    SQL_JOIN = 396,
    SQL_LIKE = 397,
    SQL_OP_RP = 398,
    SQL_IGNORE = 399,
    SQL_INT = 400,
    SQL_MEDIUMTEXT = 401,
    SQL_BOOLEAN = 402,
    SQL_KEY = 403,
    SQL_EACH = 404,
    SQL_USING = 405,
    SQL_RENAME = 406,
    SQL_DO = 407,
    SQL_OP_LP = 408,
    SQL_CHARACTER = 409,
    SQL_UMINUS = 410,
    SQL_CAST = 411,
    SQL_GROUPS = 412,
    SQL_OUTER = 413,
    SQL_NULL = 414,
    SQL_SMALLINT = 415,
    SQL_EXCLUSIVE = 416,
    SQL_TEMPORARY = 417,
    SQL_CONSTRAINT = 418,
    SQL_CREATE = 419,
    SQL_OP_LBRACKET = 420,
    SQL_WHEN = 421,
    SQL_IMMEDIATE = 422,
    SQL_TO = 423,
    SQL_BTREE = 424,
    SQL_DAY = 425,
    SQL_CONFLICT = 426,
    SQL_ROW_FORMAT = 427,
    SQL_OP_RBRACKET = 428,
    SQL_EXISTS = 429,
    SQL_INSERT = 430,
    SQL_KEYS = 431,
    SQL_INTO = 432,
    SQL_OP_DIVIDE = 433,
    SQL_CASCADED = 434,
    SQL_ISNULL = 435,
    SQL_AS = 436,
    SQL_INNER = 437,
    SQL_INTERSECT = 438,
    SQL_IN = 439,
    SQL_OP_EQUAL = 440,
    SQL_VARCHAR = 441,
    SQL_COPY = 442,
    SQL_ALTER = 443,
    SQL_DESC = 444,
    SQL_FROM = 445,
    SQL_TINYTEXT = 446,
    SQL_FLOAT = 447,
    SQL_SECOND = 448,
    SQL_WINDOW = 449,
    SQL_NOTHING = 450,
    SQL_HAVING = 451,
    SQL_POINT = 452,
    SQL_INTLITERAL = 453,
    SQL_FLOATLITERAL = 454,
    SQL_IDENTIFIER = 455,
    SQL_STRINGLITERAL = 456
  };
#endif

/* Value type.  */
#if ! defined FF_STYPE && ! defined FF_STYPE_IS_DECLARED
#line 30 "bison.y" /* yacc.c:355  */
union FF_STYPE
{
#line 30 "bison.y" /* yacc.c:355  */

	long	ival;
	char*	sval;
	double	fval;
	Program *	program_t;
	Stmtlist *	stmtlist_t;
	Stmt *	stmt_t;
	CreateStmt *	create_stmt_t;
	DropStmt *	drop_stmt_t;
	AlterStmt *	alter_stmt_t;
	SelectStmt *	select_stmt_t;
	SelectWithParens *	select_with_parens_t;
	SelectNoParens *	select_no_parens_t;
	SelectClauseList *	select_clause_list_t;
	SelectClause *	select_clause_t;
	CombineClause *	combine_clause_t;
	OptFromClause *	opt_from_clause_t;
	SelectTarget *	select_target_t;
	OptWindowClause *	opt_window_clause_t;
	WindowClause *	window_clause_t;
	WindowDefList *	window_def_list_t;
	WindowDef *	window_def_t;
	WindowName *	window_name_t;
	Window *	window_t;
	OptPartition *	opt_partition_t;
	OptFrameClause *	opt_frame_clause_t;
	RangeOrRows *	range_or_rows_t;
	FrameBoundStart *	frame_bound_start_t;
	FrameBoundEnd *	frame_bound_end_t;
	FrameBound *	frame_bound_t;
	OptExistWindowName *	opt_exist_window_name_t;
	OptGroupClause *	opt_group_clause_t;
	OptHavingClause *	opt_having_clause_t;
	OptWhereClause *	opt_where_clause_t;
	WhereClause *	where_clause_t;
	FromClause *	from_clause_t;
	TableRef *	table_ref_t;
	OptIndex *	opt_index_t;
	OptOn *	opt_on_t;
	OptUsing *	opt_using_t;
	ColumnNameList *	column_name_list_t;
	OptTablePrefix *	opt_table_prefix_t;
	JoinOp *	join_op_t;
	OptJoinType *	opt_join_type_t;
	ExprList *	expr_list_t;
	OptLimitClause *	opt_limit_clause_t;
	LimitClause *	limit_clause_t;
	OptLimitRowCount *	opt_limit_row_count_t;
	OptOrderClause *	opt_order_clause_t;
	OptOrderNulls *	opt_order_nulls_t;
	OrderItemList *	order_item_list_t;
	OrderItem *	order_item_t;
	OptOrderBehavior *	opt_order_behavior_t;
	OptWithClause *	opt_with_clause_t;
	CteTableList *	cte_table_list_t;
	CteTable *	cte_table_t;
	CteTableName *	cte_table_name_t;
	OptAllOrDistinct *	opt_all_or_distinct_t;
	CreateTableStmt *	create_table_stmt_t;
	CreateIndexStmt *	create_index_stmt_t;
	CreateTriggerStmt *	create_trigger_stmt_t;
	CreateViewStmt *	create_view_stmt_t;
	OptTableOptionList *	opt_table_option_list_t;
	TableOptionList *	table_option_list_t;
	TableOption *	table_option_t;
	OptOpComma *	opt_op_comma_t;
	OptIgnoreOrReplace *	opt_ignore_or_replace_t;
	OptViewAlgorithm *	opt_view_algorithm_t;
	OptSqlSecurity *	opt_sql_security_t;
	OptIndexOption *	opt_index_option_t;
	OptExtraOption *	opt_extra_option_t;
	IndexAlgorithmOption *	index_algorithm_option_t;
	LockOption *	lock_option_t;
	OptOpEqual *	opt_op_equal_t;
	TriggerEvents *	trigger_events_t;
	TriggerName *	trigger_name_t;
	TriggerActionTime *	trigger_action_time_t;
	DropIndexStmt *	drop_index_stmt_t;
	DropTableStmt *	drop_table_stmt_t;
	OptRestrictOrCascade *	opt_restrict_or_cascade_t;
	DropTriggerStmt *	drop_trigger_stmt_t;
	DropViewStmt *	drop_view_stmt_t;
	InsertStmt *	insert_stmt_t;
	InsertRest *	insert_rest_t;
	SuperValuesList *	super_values_list_t;
	ValuesList *	values_list_t;
	OptOnConflict *	opt_on_conflict_t;
	OptConflictExpr *	opt_conflict_expr_t;
	IndexedColumnList *	indexed_column_list_t;
	IndexedColumn *	indexed_column_t;
	UpdateStmt *	update_stmt_t;
	AlterAction *	alter_action_t;
	AlterConstantAction *	alter_constant_action_t;
	ColumnDefList *	column_def_list_t;
	ColumnDef *	column_def_t;
	OptColumnConstraintList *	opt_column_constraint_list_t;
	ColumnConstraintList *	column_constraint_list_t;
	ColumnConstraint *	column_constraint_t;
	OptReferenceClause *	opt_reference_clause_t;
	OptCheck *	opt_check_t;
	ConstraintType *	constraint_type_t;
	ReferenceClause *	reference_clause_t;
	OptForeignKey *	opt_foreign_key_t;
	OptForeignKeyActions *	opt_foreign_key_actions_t;
	ForeignKeyActions *	foreign_key_actions_t;
	KeyActions *	key_actions_t;
	OptConstraintAttributeSpec *	opt_constraint_attribute_spec_t;
	OptInitialTime *	opt_initial_time_t;
	OptConstraintName *	opt_constraint_name_t;
	OptTemp *	opt_temp_t;
	OptCheckOption *	opt_check_option_t;
	OptColumnNameListP *	opt_column_name_list_p_t;
	SetClauseList *	set_clause_list_t;
	SetClause *	set_clause_t;
	OptAsAlias *	opt_as_alias_t;
	Expr *	expr_t;
	Operand *	operand_t;
	CastExpr *	cast_expr_t;
	ScalarExpr *	scalar_expr_t;
	UnaryExpr *	unary_expr_t;
	BinaryExpr *	binary_expr_t;
	LogicExpr *	logic_expr_t;
	InExpr *	in_expr_t;
	CaseExpr *	case_expr_t;
	BetweenExpr *	between_expr_t;
	ExistsExpr *	exists_expr_t;
	FunctionExpr *	function_expr_t;
	OptDistinct *	opt_distinct_t;
	OptFilterClause *	opt_filter_clause_t;
	OptOverClause *	opt_over_clause_t;
	CaseList *	case_list_t;
	CaseClause *	case_clause_t;
	CompExpr *	comp_expr_t;
	ExtractExpr *	extract_expr_t;
	DatetimeField *	datetime_field_t;
	ArrayExpr *	array_expr_t;
	ArrayIndex *	array_index_t;
	Literal *	literal_t;
	StringLiteral *	string_literal_t;
	BoolLiteral *	bool_literal_t;
	NumLiteral *	num_literal_t;
	IntLiteral *	int_literal_t;
	FloatLiteral *	float_literal_t;
	OptColumn *	opt_column_t;
	TriggerBody *	trigger_body_t;
	OptIfNotExist *	opt_if_not_exist_t;
	OptIfExist *	opt_if_exist_t;
	Identifier *	identifier_t;
	AsAlias *	as_alias_t;
	TableName *	table_name_t;
	ColumnName *	column_name_t;
	OptIndexKeyword *	opt_index_keyword_t;
	ViewName *	view_name_t;
	FunctionName *	function_name_t;
	BinaryOp *	binary_op_t;
	OptNot *	opt_not_t;
	Name *	name_t;
	TypeName *	type_name_t;
	CharacterType *	character_type_t;
	CharacterWithLength *	character_with_length_t;
	CharacterWithoutLength *	character_without_length_t;
	CharacterConflicta *	character_conflicta_t;
	NumericType *	numeric_type_t;
	OptTableConstraintList *	opt_table_constraint_list_t;
	TableConstraintList *	table_constraint_list_t;
	TableConstraint *	table_constraint_t;
	OptEnforced *	opt_enforced_t;

#line 505 "bison.tab.c" /* yacc.c:355  */
};
#line 30 "bison.y" /* yacc.c:355  */
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



/* Copy the second part of user declarations.  */

#line 535 "bison.tab.c" /* yacc.c:358  */

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
#define YYFINAL  54
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1141

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  202
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  164
/* YYNRULES -- Number of rules.  */
#define YYNRULES  412
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  724

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   456

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
     195,   196,   197,   198,   199,   200,   201
};

#if FF_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   425,   425,   435,   442,   451,   457,   463,   469,   475,
     481,   490,   496,   502,   508,   517,   523,   529,   535,   544,
     554,   560,   569,   575,   584,   596,   602,   613,   627,   632,
     637,   645,   651,   659,   668,   674,   682,   691,   697,   707,
     716,   725,   737,   743,   751,   758,   766,   774,   779,   784,
     792,   798,   806,   812,   820,   826,   832,   840,   845,   853,
     860,   868,   874,   882,   888,   896,   905,   914,   925,   936,
     946,   959,   965,   970,   978,   984,   992,   998,  1006,  1012,
    1022,  1029,  1037,  1042,  1047,  1056,  1061,  1066,  1071,  1076,
    1084,  1092,  1102,  1108,  1116,  1122,  1129,  1139,  1145,  1153,
    1159,  1167,  1172,  1177,  1185,  1191,  1201,  1212,  1217,  1222,
    1230,  1236,  1242,  1250,  1256,  1266,  1276,  1286,  1291,  1296,
    1304,  1315,  1328,  1341,  1353,  1363,  1376,  1382,  1390,  1396,
    1407,  1413,  1419,  1425,  1431,  1437,  1443,  1449,  1455,  1464,
    1469,  1477,  1482,  1487,  1495,  1500,  1505,  1510,  1518,  1523,
    1528,  1536,  1541,  1546,  1554,  1560,  1566,  1574,  1580,  1586,
    1595,  1601,  1607,  1613,  1622,  1627,  1635,  1640,  1645,  1653,
    1662,  1667,  1675,  1684,  1695,  1700,  1705,  1713,  1722,  1732,
    1745,  1752,  1758,  1768,  1774,  1784,  1794,  1800,  1808,  1816,
    1823,  1831,  1837,  1847,  1857,  1868,  1882,  1887,  1895,  1901,
    1908,  1917,  1922,  1927,  1932,  1937,  1943,  1948,  1956,  1962,
    1972,  1982,  1990,  1998,  2004,  2014,  2030,  2037,  2045,  2052,
    2060,  2065,  2070,  2078,  2089,  2094,  2102,  2108,  2116,  2121,
    2126,  2131,  2137,  2146,  2151,  2156,  2161,  2166,  2174,  2180,
    2186,  2194,  2199,  2204,  2214,  2220,  2228,  2233,  2241,  2246,
    2251,  2256,  2264,  2270,  2278,  2284,  2294,  2301,  2311,  2317,
    2325,  2331,  2337,  2343,  2349,  2355,  2364,  2370,  2376,  2382,
    2388,  2394,  2400,  2406,  2412,  2418,  2427,  2437,  2443,  2452,
    2458,  2464,  2470,  2476,  2482,  2494,  2500,  2508,  2515,  2525,
    2532,  2542,  2550,  2558,  2569,  2576,  2582,  2590,  2600,  2608,
    2619,  2629,  2637,  2650,  2655,  2663,  2669,  2677,  2683,  2689,
    2697,  2703,  2713,  2723,  2730,  2737,  2744,  2751,  2758,  2768,
    2778,  2783,  2788,  2793,  2798,  2803,  2811,  2820,  2830,  2836,
    2842,  2851,  2860,  2865,  2873,  2879,  2888,  2896,  2904,  2909,
    2917,  2923,  2929,  2935,  2944,  2949,  2957,  2962,  2970,  2979,
    2987,  2995,  3000,  3009,  3014,  3022,  3027,  3032,  3037,  3045,
    3054,  3062,  3067,  3072,  3077,  3082,  3087,  3095,  3100,  3108,
    3117,  3123,  3132,  3138,  3147,  3157,  3163,  3168,  3173,  3181,
    3186,  3191,  3196,  3201,  3206,  3211,  3216,  3221,  3226,  3234,
    3239,  3244,  3249,  3254,  3259,  3264,  3269,  3274,  3279,  3284,
    3289,  3294,  3302,  3308,  3316,  3322,  3333,  3340,  3347,  3355,
    3366,  3371,  3376
};
#endif

#if FF_DEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "OP_NOTEQUAL", "ENABLE", "SIMPLE",
  "TEXT", "OVER", "YEAR", "INSERT_METHOD", "OP_SEMI", "BIGINT", "LIMIT",
  "OP_GREATERTHAN", "WITH", "ORDER", "OPTION", "LAST", "UNBOUNDED",
  "PRECEDING", "EXCEPT", "NUMERIC", "OP_LESSTHAN", "ACTION", "BEFORE",
  "OP_GREATEREQ", "CHECK", "COMPACT", "FULL", "NATURAL", "BINARY",
  "NATIONAL", "ENUM", "REDUNDANT", "OP_ADD", "CURRENT", "MERGE", "TRIGGER",
  "COMPRESSED", "OP_SUB", "FALSE", "UNIQUE", "WHERE", "MINUTE", "FIRST",
  "ON", "PARTIAL", "DOUBLE", "AFTER", "PRIMARY", "MONTH", "DEFERRED",
  "VALUES", "LONGTEXT", "SQL", "SHARED", "VALIDATION", "OR", "VIEW",
  "INDEX", "GROUP", "OP_MUL", "INPLACE", "FOREIGN", "RESTRICT", "SPATIAL",
  "FOLLOWING", "DEC", "SELECT", "NONE", "DISTINCT", "TRUE", "DYNAMIC",
  "BY", "OP_MOD", "INTEGER", "SECURITY", "IS", "DEFINER", "ROW",
  "ENFORCED", "END", "RECURSIVE", "FOR", "TEMPTABLE", "UNION", "NULLS",
  "UPDATE", "ELSE", "RANGE", "SET", "INVOKER", "OFFSET", "INDEXED",
  "FORCE", "NCHAR", "AND", "INITIALLY", "PRECISION", "FILTER", "WITHOUT",
  "NOT", "DELETE", "DEFFERRABLE", "REAL", "THEN", "UNDEFINED", "DEFAULT",
  "CROSS", "CHAR", "REFERENCES", "OP_XOR", "CASE", "FIXED", "HOUR", "NO",
  "COLUMN", "LOCAL", "DROP", "REPLACE", "ASC", "OP_COMMA", "DISABLE",
  "TABLE", "ARRAY", "IF", "EXTRACT", "LEFT", "FULLTEXT", "HASH",
  "ALGORITHM", "LOCK", "DECIMAL", "PARTITION", "CASCADE", "ADD", "BETWEEN",
  "OP_LESSEQ", "MATCH", "ALL", "ROWS", "JOIN", "LIKE", "OP_RP", "IGNORE",
  "INT", "MEDIUMTEXT", "BOOLEAN", "KEY", "EACH", "USING", "RENAME", "DO",
  "OP_LP", "CHARACTER", "UMINUS", "CAST", "GROUPS", "OUTER", "NULL",
  "SMALLINT", "EXCLUSIVE", "TEMPORARY", "CONSTRAINT", "CREATE",
  "OP_LBRACKET", "WHEN", "IMMEDIATE", "TO", "BTREE", "DAY", "CONFLICT",
  "ROW_FORMAT", "OP_RBRACKET", "EXISTS", "INSERT", "KEYS", "INTO",
  "OP_DIVIDE", "CASCADED", "ISNULL", "AS", "INNER", "INTERSECT", "IN",
  "OP_EQUAL", "VARCHAR", "COPY", "ALTER", "DESC", "FROM", "TINYTEXT",
  "FLOAT", "SECOND", "WINDOW", "NOTHING", "HAVING", "POINT", "INTLITERAL",
  "FLOATLITERAL", "IDENTIFIER", "STRINGLITERAL", "$accept", "program",
  "stmtlist", "stmt", "create_stmt", "drop_stmt", "alter_stmt",
  "select_stmt", "select_with_parens", "select_no_parens",
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
  "opt_order_clause", "opt_order_nulls", "order_item_list", "order_item",
  "opt_order_behavior", "opt_with_clause", "cte_table_list", "cte_table",
  "cte_table_name", "opt_all_or_distinct", "create_table_stmt",
  "create_index_stmt", "create_trigger_stmt", "create_view_stmt",
  "opt_table_option_list", "table_option_list", "table_option",
  "opt_op_comma", "opt_ignore_or_replace", "opt_view_algorithm",
  "opt_sql_security", "opt_index_option", "opt_extra_option",
  "index_algorithm_option", "lock_option", "opt_op_equal",
  "trigger_events", "trigger_name", "trigger_action_time",
  "drop_index_stmt", "drop_table_stmt", "opt_restrict_or_cascade",
  "drop_trigger_stmt", "drop_view_stmt", "insert_stmt", "insert_rest",
  "super_values_list", "values_list", "opt_on_conflict",
  "opt_conflict_expr", "indexed_column_list", "indexed_column",
  "update_stmt", "alter_action", "alter_constant_action",
  "column_def_list", "column_def", "opt_column_constraint_list",
  "column_constraint_list", "column_constraint", "opt_reference_clause",
  "opt_check", "constraint_type", "reference_clause", "opt_foreign_key",
  "opt_foreign_key_actions", "foreign_key_actions", "key_actions",
  "opt_constraint_attribute_spec", "opt_initial_time",
  "opt_constraint_name", "opt_temp", "opt_check_option",
  "opt_column_name_list_p", "set_clause_list", "set_clause",
  "opt_as_alias", "expr", "operand", "cast_expr", "scalar_expr",
  "unary_expr", "binary_expr", "logic_expr", "in_expr", "case_expr",
  "between_expr", "exists_expr", "function_expr", "opt_distinct",
  "opt_filter_clause", "opt_over_clause", "case_list", "case_clause",
  "comp_expr", "extract_expr", "datetime_field", "array_expr",
  "array_index", "literal", "string_literal", "bool_literal",
  "num_literal", "int_literal", "float_literal", "opt_column",
  "trigger_body", "opt_if_not_exist", "opt_if_exist", "identifier",
  "as_alias", "table_name", "column_name", "opt_index_keyword",
  "view_name", "function_name", "binary_op", "opt_not", "name",
  "type_name", "character_type", "character_with_length",
  "character_without_length", "character_conflicta", "numeric_type",
  "opt_table_constraint_list", "table_constraint_list", "table_constraint",
  "opt_enforced", YY_NULLPTR
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
     455,   456
};
# endif

#define YYPACT_NINF -587

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-587)))

#define YYTABLE_NINF -404

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-404)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      27,    -6,   -73,   -12,    16,   544,   -36,   142,  -587,   251,
    -587,  -587,  -587,  -587,  -587,  -587,   -50,  -587,  -587,  -587,
    -587,  -587,  -587,  -587,  -587,  -587,  -587,   106,  -587,  -587,
      80,   129,  -587,   162,   106,   143,   222,   222,   106,  -587,
     234,   223,   238,   316,   106,  -587,   274,  -587,  -587,   212,
     356,   295,   361,   106,  -587,    17,   -47,   245,   409,    -4,
    -587,   106,   283,   -40,  -587,   143,   106,   335,  -587,   265,
     106,   106,   297,   222,  -587,  -587,   290,  -587,   310,   219,
     366,   385,   319,   106,   132,  -587,  -587,  -587,   849,   106,
     372,   434,  -587,  -587,  -587,   316,  -587,    16,  -587,   309,
     258,   333,   367,  -587,   -25,  -587,  -587,  -587,   -22,   275,
     275,  -587,  -587,  -587,   106,  -587,  -587,   127,   356,  -587,
    -587,  -587,   -14,   106,   358,   106,   416,   288,   410,  -587,
     411,     4,   289,   352,   144,  -587,  -587,  -587,   940,  -587,
    -587,   940,   844,   304,   320,   279,   321,  -587,  -587,  -587,
    -587,   280,  -587,    15,   231,  -587,  -587,  -587,  -587,  -587,
    -587,  -587,  -587,  -587,  -587,  -587,  -587,  -587,  -587,  -587,
    -587,  -587,  -587,  -587,  -587,    85,  -587,   322,   302,   143,
     849,   849,  -587,  -587,  -587,   328,  -587,   -27,   -40,   -25,
     -40,   439,   362,   301,  -587,  -587,  -587,  -587,   -13,   172,
     -22,  -587,  -587,  -587,   437,   432,  -587,  -587,   162,   323,
      18,   106,  -587,  -587,  -587,   343,  -587,   -40,  -587,   106,
     106,   -40,   940,    44,   789,   849,   -17,   294,   326,   849,
      30,   350,   353,   849,  -587,   439,  -587,   849,   849,   374,
     940,   940,   940,   940,  -587,  -587,  -587,  -587,   -16,   272,
    -587,   940,   940,   940,   303,  -587,  -587,   940,   940,   324,
     -20,   347,   162,  -587,   382,    41,   264,  -587,  -587,  -587,
    -587,   439,   363,   849,   409,  -587,   -25,   849,  -587,  -587,
    -587,  -587,  -587,  -587,  -587,  -587,   106,   106,   330,  -587,
     275,   106,   275,   165,  -587,    13,   351,  -587,  -587,  -587,
     524,  -587,   337,   370,   211,   325,  -587,   849,  -587,   336,
    -587,  -587,  -587,  -587,  -587,  -587,   327,  -587,  -587,    43,
      87,   -60,   453,   418,  -587,   849,   848,   373,   373,   373,
     359,  -587,   940,   940,   651,   373,   848,   342,   848,    44,
      51,  -587,   421,   849,   507,   477,   184,   849,  -587,  -587,
     438,   849,   849,   409,   338,   232,   514,  -587,   232,   444,
     162,    16,    39,   -85,   407,   204,  -587,  -587,   355,  -587,
      20,   849,  -587,  -587,  -587,  -587,   -65,  -587,   433,  -587,
    -587,  -587,  -587,  -587,  -587,  -587,  -587,  -587,  -587,  -587,
    -587,  -587,  -587,  -587,  -587,  -587,   194,  -587,  -587,  -587,
     379,  -587,   -40,   849,  -587,   849,   306,  -587,   849,   524,
     -41,  -587,  -587,  -587,   139,   380,   143,   384,   466,   346,
    -587,  -587,   756,   848,   940,  -587,   279,  -587,   388,   535,
     403,   404,   377,  -587,   390,   497,  -587,  -587,   252,  -587,
     232,   232,   514,   849,   849,  -587,   401,   371,   547,  -587,
    -587,  -587,   106,   400,   415,  -587,   441,   106,  -587,  -587,
    -587,  -587,  -587,  -587,    16,  -587,   420,   443,    41,  -587,
    -587,  -587,  -587,   417,   408,  -587,   540,   194,  -587,   303,
    -587,   232,   308,  -587,   156,   425,  -587,   412,  -587,   431,
     430,   104,   171,   849,   849,   106,  -587,  -587,   940,   764,
     445,   446,   533,   113,  -587,   421,  -587,   423,   849,  -587,
     459,  -587,  -587,  -587,  -587,   232,   232,   503,    16,    -7,
    -587,  -587,  -587,   440,   451,   436,   442,    20,   429,  -587,
    -587,   447,   849,  -587,  -587,  -587,   452,   217,  -587,   455,
    -587,  -587,  -587,  -587,  -587,   143,   143,   513,   515,   551,
     463,   419,  -587,   486,   435,  -587,   764,  -587,  -587,   849,
     106,  -587,   535,   849,   460,   468,   390,    14,   547,   601,
     594,   595,   849,   849,   469,   470,  -587,  -587,    77,   297,
    -587,   849,   479,  -587,   519,  -587,   551,   551,   -40,  -587,
     849,   475,   143,   849,  -587,   106,   478,   192,   487,   499,
    -587,  -587,   491,   -39,  -587,  -587,  -587,  -587,   461,  -587,
    -587,  -587,  -587,  -587,   626,   627,   202,   501,   849,   -40,
    -587,  -587,  -587,   205,  -587,   106,  -587,   475,   475,  -587,
     232,   492,  -587,   551,   232,  -587,   106,  -587,  -587,   573,
     409,   439,   -25,  -587,  -587,  -587,   299,  -587,   504,   505,
     299,   162,  -587,  -587,   -40,   475,   506,   849,   -38,  -587,
     439,  -587,   570,  -587,  -587,   519,  -587,   -21,   509,  -587,
    -587,  -587,  -587,  -587,  -587,  -587,   539,  -587,  -587,  -587,
     257,   318,   291,  -587,  -587,   638,   579,   620,  -587,  -587,
      42,   240,   240,  -587,  -587,  -587,   558,   565,  -587,  -587,
    -587,   572,  -587,  -587,  -587,   141,   654,  -587,  -587,  -587,
     565,   -19,  -587,   648,  -587,  -587,  -587,  -587,  -587,  -587,
     613,  -587,  -587,  -587
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     112,     0,     0,   247,   112,   147,     0,     0,     2,     0,
       5,     6,    10,     7,    21,    20,     0,    11,    12,    13,
      14,    15,    16,    17,    18,     9,     8,     0,   348,   110,
     113,     0,   350,   253,     0,   259,   347,   347,     0,   246,
       0,     0,     0,     0,     0,   355,     0,   357,   356,     0,
     150,     0,     0,     0,     1,   112,   119,     0,   100,    25,
     111,     0,     0,     0,   116,   259,     0,     0,   258,     0,
       0,     0,   156,   347,    23,    22,     0,   169,   147,     0,
       0,     0,   345,     0,     0,     3,   118,   117,   368,     0,
       0,    93,    30,    28,    29,     0,   114,   112,   353,     0,
     351,    78,     0,   349,     0,   346,   177,   359,   176,   165,
     165,   172,   154,   155,     0,   170,   171,     0,   150,   145,
     146,   144,     0,     0,     0,     0,     0,     0,     0,   202,
       0,   339,     0,   339,   339,   205,    19,   200,     0,   333,
     332,   367,   368,     0,     0,   112,     0,   284,   336,   337,
     331,    32,    33,   259,   260,   264,   268,   269,   270,   265,
     263,   271,   261,   262,   274,   285,   272,   273,   267,   278,
     328,   329,   330,   334,   335,   351,   277,     0,     0,   259,
     368,   368,    24,    92,    26,     0,   252,     0,     0,     0,
       0,    64,   254,     0,   174,   175,   178,   164,     0,     0,
     176,   168,   166,   167,     0,     0,   148,   149,   253,     0,
     127,     0,   204,   206,   207,     0,   338,     0,   203,     0,
       0,     0,     0,   279,   280,   368,     0,     0,   310,   368,
       0,     0,     0,   368,    81,    64,    31,   368,   368,    91,
       0,     0,     0,     0,   361,   362,   365,   364,     0,   367,
     366,     0,     0,     0,     0,   363,   281,     0,     0,     0,
     304,     0,   253,    99,   104,   109,    94,   115,   354,   352,
      79,    64,     0,   368,   100,    63,     0,   368,   158,   157,
     159,   162,   161,   160,   163,   173,     0,     0,     0,   344,
     165,     0,   165,   143,   126,   128,     0,   201,   199,   198,
       0,   196,     0,     0,     0,     0,   295,   368,   311,     0,
     325,   321,   324,   322,   323,   320,     0,   275,   266,     0,
      66,     0,    60,   290,   289,   368,   314,   315,   316,   318,
       0,   282,     0,     0,     0,   317,   287,     0,   313,   286,
       0,   303,   306,   368,   112,   188,   112,   368,   107,   108,
     103,   368,   368,   100,     0,    65,    98,   255,   256,     0,
     253,   112,     0,   245,   208,     0,   142,   141,     0,   139,
       0,   368,   382,   392,   400,   378,     0,   377,   396,   385,
     399,   390,   376,   388,   393,   380,   395,   398,   389,   384,
     401,   379,   391,   381,   383,   394,   212,   371,   372,   373,
     375,   370,     0,   368,   294,   368,     0,   326,   368,     0,
      89,    82,    83,    80,    81,   350,   259,     0,     0,    35,
      90,   283,     0,   288,     0,   327,   112,   293,     0,   309,
       0,     0,     0,   179,     0,     0,   180,   105,     0,   106,
      95,    96,    98,   368,   368,   195,     0,     0,   251,   132,
     131,   130,     0,     0,     0,   402,   404,     0,   138,   137,
     136,   134,   133,   135,   112,   129,     0,   191,   109,   387,
     386,   397,   222,     0,     0,   210,   219,   213,   215,     0,
     197,   312,     0,   297,     0,     0,    88,    85,    87,     0,
       0,     0,    73,   368,   368,     0,    27,    34,     0,   298,
       0,     0,     0,     0,   301,   306,   300,   190,   368,   182,
     183,   181,   102,   101,   194,   257,    97,     0,   112,     0,
     124,   369,   244,     0,     0,     0,     0,   127,   245,   209,
     120,   153,   368,   193,   220,   221,     0,   217,   214,     0,
     296,   319,   276,    86,    84,   259,   259,     0,     0,    75,
       0,    62,    36,    37,     0,    40,   299,   291,   292,   368,
      58,   308,   309,   368,     0,     0,     0,   112,   251,     0,
       0,     0,   368,   368,     0,     0,   121,   405,     0,   156,
     192,   368,     0,   211,     0,   374,    75,    75,     0,    72,
     368,    77,   259,   368,    59,     0,     0,     0,     0,    43,
      57,   302,     0,     0,   185,   184,   340,   343,     0,   342,
     341,   123,   125,   248,     0,     0,     0,     0,   368,     0,
     152,   151,   122,     0,   224,     0,   216,    77,    77,    71,
      74,     0,    67,    75,    61,    38,    58,   305,   307,     0,
     100,     0,     0,   186,   250,   249,   412,   407,     0,     0,
     412,   253,    69,    70,     0,    77,     0,   368,    46,   189,
       0,   410,     0,   408,   406,     0,   218,   227,     0,    68,
      39,    42,    47,    48,    49,    41,   368,   187,   411,   409,
       0,     0,   240,   226,    76,     0,     0,   368,    44,    50,
       0,     0,     0,   230,   228,   229,     0,   243,   223,    51,
      56,     0,    54,    55,   236,     0,     0,   235,   231,   232,
     243,     0,   238,   368,   234,   233,   237,   239,   241,   242,
       0,    45,    52,    53
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -587,  -587,   625,  -587,  -587,   115,   119,   -87,   685,     7,
     598,  -587,  -587,  -587,  -587,  -587,  -587,    99,  -587,   193,
      61,  -587,  -587,  -587,    12,  -587,   -11,  -587,  -587,  -587,
     117,  -586,  -587,   286,  -587,  -250,  -256,  -182,  -587,  -587,
    -587,  -132,  -587,  -587,   259,  -262,  -587,   357,  -587,   235,
       2,    48,  -587,  -587,  -587,  -587,  -587,  -587,  -587,   178,
     341,  -587,  -587,  -587,   629,   590,  -587,   134,  -587,   630,
     -95,  -587,   647,  -587,  -587,  -587,   518,  -587,  -587,   153,
    -587,   157,  -587,  -587,  -587,  -292,  -587,   155,  -587,  -587,
     267,   508,  -587,   249,  -587,  -587,  -587,  -587,    64,  -587,
    -587,  -587,    38,  -587,    21,  -587,   728,   166,  -203,  -180,
    -587,   -58,   -74,   -75,  -587,  -587,  -587,  -587,  -587,  -587,
    -587,  -587,  -587,  -587,  -587,   230,   174,   191,  -587,  -587,
    -587,  -587,  -587,  -587,  -587,  -587,  -587,  -587,  -240,  -587,
     296,  -587,  -587,   317,    -1,  -587,     1,   -59,  -587,  -103,
     422,  -587,   587,  -587,   339,  -587,  -587,  -587,  -587,  -587,
    -587,   214,  -587,    95
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      58,    59,    95,   235,   151,   496,   497,   552,   553,   554,
     598,   640,   675,   676,   688,   721,   689,   599,   419,   594,
     274,   275,   236,   320,   549,   591,   632,    99,   321,   413,
     489,   152,   182,   183,   445,    91,   439,   263,   264,   350,
      43,    29,    30,    31,    88,    17,    18,    19,    20,   293,
     294,   295,   370,   368,    50,    81,   579,   111,   112,   113,
     198,   204,    76,   117,    21,    22,   196,    23,    24,    25,
     345,   509,   510,   433,   564,   466,   467,    26,   136,   137,
     363,   364,   475,   476,   477,   583,   537,   478,   626,   584,
     682,   683,   708,   698,   712,   453,    40,   520,    64,   191,
     192,    67,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   343,   429,   504,   227,   228,   165,
     166,   316,   167,   168,   169,   170,   171,   172,   173,   174,
     217,   611,   125,    70,   175,    68,    33,   176,    52,   108,
     177,   258,   178,   522,   396,   397,   398,   399,   400,   401,
     454,   455,   456,   663
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      32,    32,    16,    35,   101,   288,   270,   102,   272,   271,
     185,    42,   356,   232,   337,   199,    92,    -4,    56,   569,
     208,    98,  -140,    86,   680,    36,    32,   290,     1,   290,
       1,     1,   718,    32,   268,    65,    98,    32,   310,    72,
     237,     1,   194,    77,   469,   193,    37,    38,   642,   278,
     341,   672,    32,   215,    84,   659,   449,    16,  -403,   346,
      32,   702,   100,   223,   206,   103,   224,   486,   226,    77,
     107,    34,   237,   311,   677,    60,    27,   207,   452,   238,
     312,    93,    32,   450,   126,   330,   487,    53,    32,   470,
     179,   442,    87,   414,   279,   239,   357,   309,   237,   237,
     237,     2,   673,   100,     2,   246,   265,   266,   703,    96,
     570,   238,   195,    32,     2,   200,   410,   681,   247,   674,
     216,   262,   107,   342,    32,    57,   210,    28,   190,   101,
     193,   101,     3,   410,   369,     3,   127,   238,   238,   238,
      28,   488,    54,   331,   313,     3,   128,   224,   719,   225,
      39,   304,   231,     1,   451,   250,   643,   447,   298,   319,
      28,   348,   302,   323,   324,   326,   327,   328,   329,     4,
       4,   291,   571,    28,   280,    28,   334,   335,   336,    94,
       4,     5,   338,   339,   360,  -140,   269,   100,   100,   100,
     292,     5,   292,   420,    28,   362,    66,   365,     1,   355,
     314,    61,     6,   358,   426,     6,   620,  -112,   411,   254,
      32,   430,   296,   237,   201,     6,   100,   193,   300,    32,
     100,   301,   255,   315,   409,   411,   129,   281,   412,   202,
     349,   458,   130,   406,   240,   472,   434,   459,  -360,   539,
     580,   282,   460,   473,   241,   412,   621,   546,   714,   237,
     131,    28,   238,   242,   132,   119,   243,   422,   423,   237,
     216,    55,   237,   110,   547,   244,   560,   133,   237,   512,
     245,   602,   548,   265,   448,   100,   461,   440,   441,   283,
     582,   617,   187,   134,   366,    32,   107,   359,   238,   237,
     300,   435,   246,     1,   501,   474,   513,   468,   238,   541,
     715,   238,   203,   120,   704,   247,    28,   238,   248,   367,
      62,   462,   220,    28,   115,    63,   403,   463,   138,   139,
     415,   237,   416,   693,    66,   121,   648,  -225,   238,   481,
     705,   482,   249,   284,   484,   637,   627,   628,   116,    32,
      98,   427,   250,   480,   691,   646,   694,    69,   650,   499,
     140,   431,   322,   436,    71,   706,   351,    73,   492,   692,
     238,   550,   551,   237,   695,   237,    74,   251,   252,   515,
     516,   652,   653,   253,   707,   306,   565,   530,   658,   661,
     141,    75,   307,   655,    56,   352,  -404,   483,   353,   540,
     114,   142,   696,    78,   697,  -404,   254,    79,  -404,   669,
     662,   100,   238,   143,   238,   144,   404,   244,   332,   255,
      80,   256,   245,   405,   333,  -368,   257,   305,    82,   308,
      83,   490,    89,   556,    90,   104,   523,   109,   110,   219,
     221,   568,   145,   500,   246,   146,    97,   649,   147,   105,
      49,   524,   122,   123,   124,   180,   181,   247,   667,   525,
     248,   521,   186,  -368,   188,   187,   300,   189,   468,   209,
     197,   211,   660,   526,   212,   218,   213,   214,   216,   229,
     234,   267,   668,   230,   233,   260,   261,   148,   149,    28,
     150,   273,   286,   276,   250,   597,   277,   586,   587,   468,
     287,   297,   225,   317,   555,   325,   318,   289,   616,   468,
     344,   148,   555,   347,   371,   402,   354,   623,   340,   407,
    -404,   361,   333,   418,   238,   425,   630,   408,   421,   634,
     428,     1,   432,   443,   438,   671,   444,   446,   457,   629,
     372,   471,   479,  -360,   633,   373,   464,   493,   254,   494,
     495,   502,   503,   508,   468,   374,   505,   506,   507,   511,
     517,   255,   518,   256,   375,   376,   377,   685,   527,   600,
     101,   519,   528,   531,   532,   534,   536,   535,   542,   608,
     543,   378,   544,   545,   686,   559,   563,   379,   138,   139,
     566,    44,   567,   193,   574,    45,   588,   100,   557,   558,
     575,   380,   452,   572,   555,   101,   590,   578,   585,   381,
      98,    46,   690,  -358,   573,   581,   592,   595,   589,    47,
     140,   604,   603,   690,   382,   593,   596,   613,   100,   383,
     614,   615,   618,   619,    32,   631,   651,   624,   384,   625,
     638,   636,   639,   385,   641,   600,    57,   386,   685,   690,
     141,   100,   644,   645,   647,   654,   657,   664,   665,   670,
     678,   142,   684,   100,   240,   686,   387,   699,   700,   138,
     139,   710,   711,   143,   241,   144,   720,  -247,   713,   388,
     389,   390,    48,   242,    49,   687,   243,   716,   391,   723,
      85,    98,   606,   686,   392,   244,   607,   138,   139,    41,
     245,   140,   145,   184,   635,   146,   561,   656,   147,   701,
     491,   514,   722,   533,   437,   576,    39,   118,   205,    98,
     393,   465,   246,   622,   135,   394,   395,   106,   285,   140,
     609,   141,   610,   605,   529,   247,   538,   299,   248,   679,
     709,   717,   142,    51,   612,   562,   601,   148,   149,    28,
     150,   259,   577,   417,   143,   666,   144,   424,   485,   141,
       0,     0,   303,     0,     0,     0,     0,     0,     0,   240,
     142,     0,   250,     0,     0,     0,     0,   240,     0,   241,
       0,     0,   143,   145,   144,     0,   146,   241,   242,   147,
       0,   243,     0,     0,     0,     0,   242,     0,   252,   243,
     244,     0,   240,   253,     0,   245,     0,     0,   244,     0,
       0,   145,   241,   245,   146,     0,     0,   147,     0,     0,
       0,   242,     0,     0,   243,     0,   254,   246,   148,   149,
      28,   150,     0,   244,     0,   246,     0,     0,   245,   255,
     247,   256,     0,   248,     0,     0,   257,     0,   247,     0,
       0,   248,     0,     0,     0,     0,   148,   149,    28,   150,
     246,  -404,   498,     0,     0,     0,     0,   303,     0,     0,
       0,   241,     0,   247,     0,   303,   248,   250,     0,     0,
     242,     0,     0,   243,     0,   250,     0,     0,     0,     0,
       0,     0,   244,   138,   139,     0,     0,   245,   138,   139,
       0,     0,     0,   252,     0,     0,     0,     0,   253,     0,
     250,   252,     0,     0,     0,    98,   253,     0,     0,   246,
      98,     0,     0,     0,     0,   140,     0,     0,     0,     0,
     140,   254,   247,     0,     0,   248,   252,     0,     0,   254,
       0,   253,     0,     0,   255,     0,   256,     0,     0,     0,
       0,   257,   255,     0,   256,   141,     0,     0,     0,   257,
     141,     0,     0,     0,   254,     0,   142,     0,     0,   250,
       0,   142,     0,     0,     0,     0,     0,   255,   143,   256,
     144,     0,     0,   143,   257,   144,     0,     0,     0,   138,
     139,     0,     0,     0,     0,   252,     0,     0,     0,     0,
    -404,     0,     0,     0,     0,     0,     0,   145,     0,     0,
     146,    98,   145,   147,     0,   146,     0,     0,   147,     0,
     225,   140,     0,   254,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   255,     0,   256,     0,
       0,     0,     0,  -404,     0,     0,     0,     0,     0,     0,
       0,   222,   148,   149,    28,   150,     0,   148,   149,    28,
     150,     0,   142,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   143,     0,   144,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   145,     0,     0,     0,     0,     0,   147,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   148,   149,
      28,   150
};

static const yytype_int16 yycheck[] =
{
       1,     2,     0,     2,    63,   208,   188,    65,   190,   189,
      97,     4,   274,   145,   254,   110,    20,     0,    68,    26,
     123,    61,     9,    70,    45,    37,    27,     9,    14,     9,
      14,    14,    51,    34,    61,    34,    61,    38,     8,    38,
      57,    14,    64,    44,   109,   104,    58,    59,    87,    62,
      70,    89,    53,    49,    53,   641,    17,    55,   143,   262,
      61,    19,    63,   138,    78,    66,   141,   108,   142,    70,
      71,   144,    57,    43,   660,    27,    82,    91,   163,    96,
      50,    85,    83,    44,    83,   101,   127,   123,    89,   154,
      89,   353,   139,   153,   107,   153,   276,   229,    57,    57,
      57,    87,   140,   104,    87,    61,   180,   181,    66,    61,
     117,    96,   134,   114,    87,   114,    29,   138,    74,   157,
     116,   179,   123,   143,   125,   175,   125,   200,   153,   188,
     189,   190,   118,    29,   121,   118,     4,    96,    96,    96,
     200,   182,     0,   159,   114,   118,    14,   222,   167,   166,
     162,   225,   145,    14,   115,   111,   195,   360,   217,   233,
     200,   120,   221,   237,   238,   240,   241,   242,   243,   153,
     153,   153,   179,   200,   187,   200,   251,   252,   253,   183,
     153,   164,   257,   258,   287,   172,   187,   188,   189,   190,
     172,   164,   172,   325,   200,   290,   181,   292,    14,   273,
     170,   121,   188,   277,   153,   188,   129,    68,   121,   165,
     211,   343,   211,    57,    87,   188,   217,   276,   219,   220,
     221,   220,   178,   193,   181,   121,    94,    55,   141,   102,
     189,    27,   100,   307,     3,    41,    52,    33,   153,   479,
     532,    69,    38,    49,    13,   141,   169,   143,   107,    57,
     118,   200,    96,    22,   122,    36,    25,   332,   333,    57,
     116,    10,    57,   131,    93,    34,   153,   135,    57,    17,
      39,   563,   101,   347,   361,   276,    72,   351,   352,   107,
      63,   573,   197,   151,   119,   286,   287,   286,    96,    57,
     291,   107,    61,    14,   426,   101,    44,   371,    96,   143,
     159,    96,   175,    84,    64,    74,   200,    96,    77,   144,
     181,   107,   168,   200,    24,   153,   105,   113,    39,    40,
     321,    57,   321,     5,   181,   106,   618,   110,    96,   403,
      90,   405,   101,   161,   408,   143,   586,   587,    48,   340,
      61,   340,   111,   402,    87,   143,    28,   125,   143,   424,
      71,   344,   235,   346,    37,   115,    92,   123,   416,   102,
      96,   493,   494,    57,    46,    57,   143,   136,   137,   443,
     444,   627,   628,   142,   134,    81,   508,   464,   640,    80,
     101,   143,    88,   633,    68,   121,    13,    81,   271,    81,
      73,   112,   101,   119,   103,    22,   165,   185,    25,   655,
     101,   402,    96,   124,    96,   126,    81,    34,   136,   178,
      54,   180,    39,    88,   142,   184,   185,   226,   123,   228,
      59,   414,   177,   498,    15,    90,    26,   130,   131,   133,
     134,   518,   153,   426,    61,   156,   153,   619,   159,   174,
     130,    41,    76,    58,   125,    73,    12,    74,   651,    49,
      77,   452,   143,   174,   121,   197,   457,    90,   532,   101,
     185,    45,   642,    63,   176,   176,    56,    56,   116,   165,
     190,   143,   654,   153,   153,   153,   174,   198,   199,   200,
     201,    42,    45,   121,   111,   559,   185,   545,   546,   563,
      58,   148,   166,   143,   495,   121,   143,   174,   572,   573,
     153,   198,   503,   121,   153,   168,   143,   581,   184,   173,
     137,   181,   142,    60,    96,   173,   590,   190,   159,   593,
      99,    14,    45,   185,    86,   657,    12,    83,   121,   588,
       6,    98,   153,   153,   592,    11,   181,   153,   165,    73,
     194,   153,     7,   153,   618,    21,   143,   143,   171,    52,
     149,   178,   181,   180,    30,    31,    32,    18,   143,   560,
     619,    14,   121,   143,   121,   148,    26,   159,   143,   567,
     158,    47,   141,   143,    35,    42,   153,    53,    39,    40,
     121,    37,    79,   642,   148,    41,    73,   588,   143,   143,
     148,    67,   163,   153,   595,   654,    45,   150,   143,    75,
      61,    57,   676,    59,   153,   153,   143,   121,    93,    65,
      71,   143,   152,   687,    90,   196,   181,    16,   619,    95,
      26,    26,   153,   153,   625,   150,   625,   148,   104,   110,
     143,   153,   133,   109,   143,   636,   175,   113,    18,   713,
     101,   642,    16,    16,   143,   153,    73,   143,   143,   143,
      80,   112,   143,   654,     3,    35,   132,    19,    79,    39,
      40,   103,    97,   124,    13,   126,    18,   123,    96,   145,
     146,   147,   128,    22,   130,   136,    25,    23,   154,    66,
      55,    61,   567,    35,   160,    34,   567,    39,    40,     4,
      39,    71,   153,    95,   595,   156,   503,   636,   159,   687,
     414,   442,   713,   468,   347,   527,   162,    78,   118,    61,
     186,   370,    61,   579,    84,   191,   192,    70,   200,    71,
     567,   101,   567,   566,   457,    74,   477,   219,    77,   665,
     692,   710,   112,     5,   568,   505,   562,   198,   199,   200,
     201,   154,   528,   321,   124,   650,   126,    96,   409,   101,
      -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,     3,
     112,    -1,   111,    -1,    -1,    -1,    -1,     3,    -1,    13,
      -1,    -1,   124,   153,   126,    -1,   156,    13,    22,   159,
      -1,    25,    -1,    -1,    -1,    -1,    22,    -1,   137,    25,
      34,    -1,     3,   142,    -1,    39,    -1,    -1,    34,    -1,
      -1,   153,    13,    39,   156,    -1,    -1,   159,    -1,    -1,
      -1,    22,    -1,    -1,    25,    -1,   165,    61,   198,   199,
     200,   201,    -1,    34,    -1,    61,    -1,    -1,    39,   178,
      74,   180,    -1,    77,    -1,    -1,   185,    -1,    74,    -1,
      -1,    77,    -1,    -1,    -1,    -1,   198,   199,   200,   201,
      61,     3,    96,    -1,    -1,    -1,    -1,   101,    -1,    -1,
      -1,    13,    -1,    74,    -1,   101,    77,   111,    -1,    -1,
      22,    -1,    -1,    25,    -1,   111,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    39,    40,    -1,    -1,    39,    39,    40,
      -1,    -1,    -1,   137,    -1,    -1,    -1,    -1,   142,    -1,
     111,   137,    -1,    -1,    -1,    61,   142,    -1,    -1,    61,
      61,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,
      71,   165,    74,    -1,    -1,    77,   137,    -1,    -1,   165,
      -1,   142,    -1,    -1,   178,    -1,   180,    -1,    -1,    -1,
      -1,   185,   178,    -1,   180,   101,    -1,    -1,    -1,   185,
     101,    -1,    -1,    -1,   165,    -1,   112,    -1,    -1,   111,
      -1,   112,    -1,    -1,    -1,    -1,    -1,   178,   124,   180,
     126,    -1,    -1,   124,   185,   126,    -1,    -1,    -1,    39,
      40,    -1,    -1,    -1,    -1,   137,    -1,    -1,    -1,    -1,
     142,    -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,
     156,    61,   153,   159,    -1,   156,    -1,    -1,   159,    -1,
     166,    71,    -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   178,    -1,   180,    -1,
      -1,    -1,    -1,   185,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   101,   198,   199,   200,   201,    -1,   198,   199,   200,
     201,    -1,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   124,    -1,   126,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,    -1,   159,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   198,   199,
     200,   201
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    14,    87,   118,   153,   164,   188,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   252,   257,   258,   259,
     260,   276,   277,   279,   280,   281,   289,    82,   200,   253,
     254,   255,   346,   348,   144,   348,    37,    58,    59,   162,
     308,   210,   211,   252,    37,    41,    57,    65,   128,   130,
     266,   308,   350,   123,     0,    10,    68,   175,   212,   213,
     253,   121,   181,   153,   310,   348,   181,   313,   347,   125,
     345,   345,   348,   123,   143,   143,   274,   346,   119,   185,
      54,   267,   123,    59,   348,   204,    70,   139,   256,   177,
      15,   247,    20,    85,   183,   214,   253,   153,    61,   239,
     346,   349,   313,   346,    90,   174,   274,   346,   351,   130,
     131,   269,   270,   271,   345,    24,    48,   275,   266,    36,
      84,   106,    76,    58,   125,   344,   348,     4,    14,    94,
     100,   118,   122,   135,   151,   271,   290,   291,    39,    40,
      71,   101,   112,   124,   126,   153,   156,   159,   198,   199,
     201,   216,   243,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   331,   332,   334,   335,   336,
     337,   338,   339,   340,   341,   346,   349,   352,   354,   348,
      73,    12,   244,   245,   212,   209,   143,   197,   121,    90,
     153,   311,   312,   349,    64,   134,   278,   185,   272,   272,
     348,    87,   102,   175,   273,   267,    78,    91,   351,   101,
     348,    45,   176,    56,    56,    49,   116,   342,   176,   342,
     168,   342,   101,   315,   315,   166,   314,   329,   330,   165,
     153,   211,   243,   153,   190,   215,   234,    57,    96,   313,
       3,    13,    22,    25,    34,    39,    61,    74,    77,   101,
     111,   136,   137,   142,   165,   178,   180,   185,   353,   354,
     153,   174,   313,   249,   250,   314,   314,   143,    61,   346,
     239,   311,   239,    42,   232,   233,   121,   185,    62,   107,
     187,    55,    69,   107,   161,   278,    45,    58,   310,   174,
       9,   153,   172,   261,   262,   263,   348,   148,   349,   293,
     346,   348,   349,   101,   314,   329,    81,    88,   329,   243,
       8,    43,    50,   114,   170,   193,   333,   143,   143,   314,
     235,   240,   232,   314,   314,   121,   315,   315,   315,   315,
     101,   159,   136,   142,   315,   315,   315,   340,   315,   315,
     184,    70,   143,   326,   153,   282,   310,   121,   120,   189,
     251,    92,   121,   232,   143,   314,   247,   311,   314,   348,
     351,   181,   272,   292,   293,   272,   119,   144,   265,   121,
     264,   153,     6,    11,    21,    30,    31,    32,    47,    53,
      67,    75,    90,    95,   104,   109,   113,   132,   145,   146,
     147,   154,   160,   186,   191,   192,   356,   357,   358,   359,
     360,   361,   168,   105,    81,    88,   314,   173,   190,   181,
      29,   121,   141,   241,   153,   346,   348,   352,    60,   230,
     243,   159,   315,   315,    96,   173,   153,   348,    99,   327,
     243,   211,    45,   285,    52,   107,   211,   249,    86,   248,
     314,   314,   247,   185,    12,   246,    83,   310,   209,    17,
      44,   115,   163,   307,   362,   363,   364,   121,    27,    33,
      38,    72,   107,   113,   181,   262,   287,   288,   314,   109,
     154,    98,    41,    49,   101,   294,   295,   296,   299,   153,
     349,   314,   314,    81,   314,   356,   108,   127,   182,   242,
     211,   235,   313,   153,    73,   194,   217,   218,    96,   315,
     211,   243,   153,     7,   328,   143,   143,   171,   153,   283,
     284,    52,    17,    44,   246,   314,   314,   149,   181,    14,
     309,   346,   355,    26,    41,    49,    63,   143,   121,   292,
     209,   143,   121,   251,   148,   159,    26,   298,   295,   340,
      81,   143,   143,   158,   141,   143,   143,    93,   101,   236,
     243,   243,   219,   220,   221,   346,   315,   143,   143,    42,
     153,   221,   327,   153,   286,   243,   121,    79,   209,    26,
     117,   179,   153,   153,   148,   148,   261,   363,   150,   268,
     287,   153,    63,   297,   301,   143,   313,   313,    73,    93,
      45,   237,   143,   196,   231,   121,   181,   314,   222,   229,
     346,   328,   287,   152,   143,   283,   207,   208,   252,   281,
     289,   343,   309,    16,    26,    26,   314,   287,   153,   153,
     129,   169,   269,   314,   148,   110,   300,   237,   237,   349,
     314,   150,   238,   313,   314,   219,   153,   143,   143,   133,
     223,   143,    87,   195,    16,    16,   143,   143,   287,   239,
     143,   348,   238,   238,   153,   237,   222,    73,   247,   233,
     311,    80,   101,   365,   143,   143,   365,   310,   239,   238,
     143,   243,    89,   140,   157,   224,   225,   233,    80,   300,
      45,   138,   302,   303,   143,    18,    35,   136,   226,   228,
     314,    87,   102,     5,    28,    46,   101,   103,   305,    19,
      79,   226,    19,    66,    64,    90,   115,   134,   304,   304,
     103,    97,   306,    96,   107,   159,    23,   306,    51,   167,
      18,   227,   228,    66
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   202,   203,   204,   204,   205,   205,   205,   205,   205,
     205,   206,   206,   206,   206,   207,   207,   207,   207,   208,
     209,   209,   210,   210,   211,   212,   212,   213,   214,   214,
     214,   215,   215,   216,   217,   217,   218,   219,   219,   220,
     221,   222,   223,   223,   224,   224,   224,   225,   225,   225,
     226,   226,   227,   227,   228,   228,   228,   229,   229,   230,
     230,   231,   231,   232,   232,   233,   234,   235,   235,   235,
     235,   236,   236,   236,   237,   237,   238,   238,   239,   239,
     240,   240,   241,   241,   241,   242,   242,   242,   242,   242,
     243,   243,   244,   244,   245,   245,   245,   246,   246,   247,
     247,   248,   248,   248,   249,   249,   250,   251,   251,   251,
     252,   252,   252,   253,   253,   254,   255,   256,   256,   256,
     257,   257,   258,   259,   260,   260,   261,   261,   262,   262,
     263,   263,   263,   263,   263,   263,   263,   263,   263,   264,
     264,   265,   265,   265,   266,   266,   266,   266,   267,   267,
     267,   268,   268,   268,   269,   269,   269,   270,   270,   270,
     271,   271,   271,   271,   272,   272,   273,   273,   273,   274,
     275,   275,   276,   277,   278,   278,   278,   279,   280,   281,
     282,   282,   282,   283,   283,   284,   285,   285,   285,   286,
     286,   287,   287,   288,   289,   289,   290,   290,   290,   290,
     290,   291,   291,   291,   291,   291,   291,   291,   292,   292,
     293,   294,   294,   295,   295,   296,   297,   297,   298,   298,
     299,   299,   299,   300,   301,   301,   302,   302,   303,   303,
     303,   303,   303,   304,   304,   304,   304,   304,   305,   305,
     305,   306,   306,   306,   307,   307,   308,   308,   309,   309,
     309,   309,   310,   310,   311,   311,   312,   312,   313,   313,
     314,   314,   314,   314,   314,   314,   315,   315,   315,   315,
     315,   315,   315,   315,   315,   315,   316,   317,   317,   318,
     318,   318,   318,   318,   318,   319,   319,   319,   319,   320,
     320,   321,   321,   321,   322,   322,   322,   322,   323,   323,
     324,   325,   325,   326,   326,   327,   327,   328,   328,   328,
     329,   329,   330,   331,   331,   331,   331,   331,   331,   332,
     333,   333,   333,   333,   333,   333,   334,   335,   336,   336,
     336,   337,   338,   338,   339,   339,   340,   341,   342,   342,
     343,   343,   343,   343,   344,   344,   345,   345,   346,   347,
     348,   349,   349,   349,   349,   350,   350,   350,   350,   351,
     352,   353,   353,   353,   353,   353,   353,   354,   354,   355,
     356,   356,   357,   357,   358,   359,   359,   359,   359,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     361,   361,   362,   362,   363,   363,   364,   364,   364,   364,
     365,   365,   365
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     1,     3,     3,     4,     1,     3,     7,     1,     1,
       1,     1,     0,     1,     1,     0,     2,     1,     3,     5,
       1,     4,     3,     0,     2,     5,     0,     1,     1,     1,
       1,     2,     1,     2,     2,     2,     2,     1,     0,     4,
       0,     2,     0,     1,     0,     2,     2,     6,     8,     7,
       7,     3,     2,     0,     2,     0,     4,     0,     1,     3,
       2,     0,     1,     1,     3,     1,     2,     1,     1,     0,
       4,     2,     1,     0,     2,     4,     4,     2,     0,     3,
       0,     2,     2,     0,     1,     3,     3,     1,     1,     0,
       2,     3,     0,     1,     3,     5,     2,     1,     1,     0,
       9,    10,    11,    11,     9,    11,     1,     0,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       0,     1,     1,     0,     3,     3,     3,     0,     3,     3,
       0,     2,     2,     0,     1,     1,     0,     3,     3,     3,
       3,     3,     3,     3,     1,     0,     1,     1,     1,     1,
       1,     1,     4,     6,     1,     1,     0,     4,     5,     7,
       2,     3,     3,     1,     3,     3,     5,     7,     0,     4,
       0,     1,     3,     2,     9,     8,     3,     5,     3,     3,
       1,     3,     1,     2,     2,     1,     2,     2,     1,     3,
       3,     3,     0,     1,     2,     1,     2,     0,     5,     0,
       2,     2,     1,     5,     2,     0,     1,     0,     2,     2,
       2,     3,     3,     2,     2,     1,     1,     2,     2,     3,
       0,     2,     2,     0,     2,     0,     1,     0,     3,     4,
       4,     0,     3,     0,     1,     3,     3,     5,     1,     0,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     6,     1,     1,     2,
       2,     2,     3,     4,     1,     1,     3,     3,     4,     3,
       3,     6,     6,     4,     4,     3,     6,     5,     5,     6,
       5,     5,     7,     1,     0,     5,     0,     4,     2,     0,
       1,     2,     4,     3,     3,     3,     3,     3,     3,     6,
       1,     1,     1,     1,     1,     1,     4,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     1,     1,     1,     3,     0,     2,     0,     1,     2,
       1,     1,     3,     1,     3,     1,     1,     1,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       1,     1,     1,     1,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     0,     1,     3,     6,     5,     6,     7,
       1,     2,     0
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
          case 198: /* INTLITERAL  */
#line 417 "bison.y" /* yacc.c:1257  */
      {
	 
}
#line 2138 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 199: /* FLOATLITERAL  */
#line 417 "bison.y" /* yacc.c:1257  */
      {
	 
}
#line 2146 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 200: /* IDENTIFIER  */
#line 413 "bison.y" /* yacc.c:1257  */
      {
	free( (((*yyvaluep).sval)) );
}
#line 2154 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 201: /* STRINGLITERAL  */
#line 413 "bison.y" /* yacc.c:1257  */
      {
	free( (((*yyvaluep).sval)) );
}
#line 2162 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 203: /* program  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).program_t)!=NULL)((*yyvaluep).program_t)->deep_delete(); }
#line 2168 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 204: /* stmtlist  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).stmtlist_t)!=NULL)((*yyvaluep).stmtlist_t)->deep_delete(); }
#line 2174 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 205: /* stmt  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).stmt_t)!=NULL)((*yyvaluep).stmt_t)->deep_delete(); }
#line 2180 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 206: /* create_stmt  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).create_stmt_t)!=NULL)((*yyvaluep).create_stmt_t)->deep_delete(); }
#line 2186 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 207: /* drop_stmt  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).drop_stmt_t)!=NULL)((*yyvaluep).drop_stmt_t)->deep_delete(); }
#line 2192 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 208: /* alter_stmt  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).alter_stmt_t)!=NULL)((*yyvaluep).alter_stmt_t)->deep_delete(); }
#line 2198 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 209: /* select_stmt  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).select_stmt_t)!=NULL)((*yyvaluep).select_stmt_t)->deep_delete(); }
#line 2204 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 210: /* select_with_parens  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).select_with_parens_t)!=NULL)((*yyvaluep).select_with_parens_t)->deep_delete(); }
#line 2210 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 211: /* select_no_parens  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).select_no_parens_t)!=NULL)((*yyvaluep).select_no_parens_t)->deep_delete(); }
#line 2216 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 212: /* select_clause_list  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).select_clause_list_t)!=NULL)((*yyvaluep).select_clause_list_t)->deep_delete(); }
#line 2222 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 213: /* select_clause  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).select_clause_t)!=NULL)((*yyvaluep).select_clause_t)->deep_delete(); }
#line 2228 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 214: /* combine_clause  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).combine_clause_t)!=NULL)((*yyvaluep).combine_clause_t)->deep_delete(); }
#line 2234 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 215: /* opt_from_clause  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_from_clause_t)!=NULL)((*yyvaluep).opt_from_clause_t)->deep_delete(); }
#line 2240 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 216: /* select_target  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).select_target_t)!=NULL)((*yyvaluep).select_target_t)->deep_delete(); }
#line 2246 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 217: /* opt_window_clause  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_window_clause_t)!=NULL)((*yyvaluep).opt_window_clause_t)->deep_delete(); }
#line 2252 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 218: /* window_clause  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).window_clause_t)!=NULL)((*yyvaluep).window_clause_t)->deep_delete(); }
#line 2258 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 219: /* window_def_list  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).window_def_list_t)!=NULL)((*yyvaluep).window_def_list_t)->deep_delete(); }
#line 2264 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 220: /* window_def  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).window_def_t)!=NULL)((*yyvaluep).window_def_t)->deep_delete(); }
#line 2270 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 221: /* window_name  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).window_name_t)!=NULL)((*yyvaluep).window_name_t)->deep_delete(); }
#line 2276 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 222: /* window  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).window_t)!=NULL)((*yyvaluep).window_t)->deep_delete(); }
#line 2282 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 223: /* opt_partition  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_partition_t)!=NULL)((*yyvaluep).opt_partition_t)->deep_delete(); }
#line 2288 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 224: /* opt_frame_clause  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_frame_clause_t)!=NULL)((*yyvaluep).opt_frame_clause_t)->deep_delete(); }
#line 2294 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 225: /* range_or_rows  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).range_or_rows_t)!=NULL)((*yyvaluep).range_or_rows_t)->deep_delete(); }
#line 2300 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 226: /* frame_bound_start  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).frame_bound_start_t)!=NULL)((*yyvaluep).frame_bound_start_t)->deep_delete(); }
#line 2306 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 227: /* frame_bound_end  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).frame_bound_end_t)!=NULL)((*yyvaluep).frame_bound_end_t)->deep_delete(); }
#line 2312 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 228: /* frame_bound  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).frame_bound_t)!=NULL)((*yyvaluep).frame_bound_t)->deep_delete(); }
#line 2318 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 229: /* opt_exist_window_name  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_exist_window_name_t)!=NULL)((*yyvaluep).opt_exist_window_name_t)->deep_delete(); }
#line 2324 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 230: /* opt_group_clause  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_group_clause_t)!=NULL)((*yyvaluep).opt_group_clause_t)->deep_delete(); }
#line 2330 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 231: /* opt_having_clause  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_having_clause_t)!=NULL)((*yyvaluep).opt_having_clause_t)->deep_delete(); }
#line 2336 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 232: /* opt_where_clause  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_where_clause_t)!=NULL)((*yyvaluep).opt_where_clause_t)->deep_delete(); }
#line 2342 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 233: /* where_clause  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).where_clause_t)!=NULL)((*yyvaluep).where_clause_t)->deep_delete(); }
#line 2348 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 234: /* from_clause  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).from_clause_t)!=NULL)((*yyvaluep).from_clause_t)->deep_delete(); }
#line 2354 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 235: /* table_ref  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).table_ref_t)!=NULL)((*yyvaluep).table_ref_t)->deep_delete(); }
#line 2360 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 236: /* opt_index  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_index_t)!=NULL)((*yyvaluep).opt_index_t)->deep_delete(); }
#line 2366 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 237: /* opt_on  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_on_t)!=NULL)((*yyvaluep).opt_on_t)->deep_delete(); }
#line 2372 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 238: /* opt_using  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_using_t)!=NULL)((*yyvaluep).opt_using_t)->deep_delete(); }
#line 2378 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 239: /* column_name_list  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).column_name_list_t)!=NULL)((*yyvaluep).column_name_list_t)->deep_delete(); }
#line 2384 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 240: /* opt_table_prefix  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_table_prefix_t)!=NULL)((*yyvaluep).opt_table_prefix_t)->deep_delete(); }
#line 2390 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 241: /* join_op  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).join_op_t)!=NULL)((*yyvaluep).join_op_t)->deep_delete(); }
#line 2396 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 242: /* opt_join_type  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_join_type_t)!=NULL)((*yyvaluep).opt_join_type_t)->deep_delete(); }
#line 2402 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 243: /* expr_list  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).expr_list_t)!=NULL)((*yyvaluep).expr_list_t)->deep_delete(); }
#line 2408 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 244: /* opt_limit_clause  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_limit_clause_t)!=NULL)((*yyvaluep).opt_limit_clause_t)->deep_delete(); }
#line 2414 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 245: /* limit_clause  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).limit_clause_t)!=NULL)((*yyvaluep).limit_clause_t)->deep_delete(); }
#line 2420 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 246: /* opt_limit_row_count  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_limit_row_count_t)!=NULL)((*yyvaluep).opt_limit_row_count_t)->deep_delete(); }
#line 2426 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 247: /* opt_order_clause  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_order_clause_t)!=NULL)((*yyvaluep).opt_order_clause_t)->deep_delete(); }
#line 2432 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 248: /* opt_order_nulls  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_order_nulls_t)!=NULL)((*yyvaluep).opt_order_nulls_t)->deep_delete(); }
#line 2438 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 249: /* order_item_list  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).order_item_list_t)!=NULL)((*yyvaluep).order_item_list_t)->deep_delete(); }
#line 2444 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 250: /* order_item  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).order_item_t)!=NULL)((*yyvaluep).order_item_t)->deep_delete(); }
#line 2450 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 251: /* opt_order_behavior  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_order_behavior_t)!=NULL)((*yyvaluep).opt_order_behavior_t)->deep_delete(); }
#line 2456 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 252: /* opt_with_clause  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_with_clause_t)!=NULL)((*yyvaluep).opt_with_clause_t)->deep_delete(); }
#line 2462 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 253: /* cte_table_list  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).cte_table_list_t)!=NULL)((*yyvaluep).cte_table_list_t)->deep_delete(); }
#line 2468 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 254: /* cte_table  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).cte_table_t)!=NULL)((*yyvaluep).cte_table_t)->deep_delete(); }
#line 2474 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 255: /* cte_table_name  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).cte_table_name_t)!=NULL)((*yyvaluep).cte_table_name_t)->deep_delete(); }
#line 2480 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 256: /* opt_all_or_distinct  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_all_or_distinct_t)!=NULL)((*yyvaluep).opt_all_or_distinct_t)->deep_delete(); }
#line 2486 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 257: /* create_table_stmt  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).create_table_stmt_t)!=NULL)((*yyvaluep).create_table_stmt_t)->deep_delete(); }
#line 2492 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 258: /* create_index_stmt  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).create_index_stmt_t)!=NULL)((*yyvaluep).create_index_stmt_t)->deep_delete(); }
#line 2498 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 259: /* create_trigger_stmt  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).create_trigger_stmt_t)!=NULL)((*yyvaluep).create_trigger_stmt_t)->deep_delete(); }
#line 2504 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 260: /* create_view_stmt  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).create_view_stmt_t)!=NULL)((*yyvaluep).create_view_stmt_t)->deep_delete(); }
#line 2510 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 261: /* opt_table_option_list  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_table_option_list_t)!=NULL)((*yyvaluep).opt_table_option_list_t)->deep_delete(); }
#line 2516 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 262: /* table_option_list  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).table_option_list_t)!=NULL)((*yyvaluep).table_option_list_t)->deep_delete(); }
#line 2522 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 263: /* table_option  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).table_option_t)!=NULL)((*yyvaluep).table_option_t)->deep_delete(); }
#line 2528 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 264: /* opt_op_comma  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_op_comma_t)!=NULL)((*yyvaluep).opt_op_comma_t)->deep_delete(); }
#line 2534 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 265: /* opt_ignore_or_replace  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_ignore_or_replace_t)!=NULL)((*yyvaluep).opt_ignore_or_replace_t)->deep_delete(); }
#line 2540 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 266: /* opt_view_algorithm  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_view_algorithm_t)!=NULL)((*yyvaluep).opt_view_algorithm_t)->deep_delete(); }
#line 2546 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 267: /* opt_sql_security  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_sql_security_t)!=NULL)((*yyvaluep).opt_sql_security_t)->deep_delete(); }
#line 2552 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 268: /* opt_index_option  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_index_option_t)!=NULL)((*yyvaluep).opt_index_option_t)->deep_delete(); }
#line 2558 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 269: /* opt_extra_option  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_extra_option_t)!=NULL)((*yyvaluep).opt_extra_option_t)->deep_delete(); }
#line 2564 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 270: /* index_algorithm_option  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).index_algorithm_option_t)!=NULL)((*yyvaluep).index_algorithm_option_t)->deep_delete(); }
#line 2570 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 271: /* lock_option  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).lock_option_t)!=NULL)((*yyvaluep).lock_option_t)->deep_delete(); }
#line 2576 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 272: /* opt_op_equal  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_op_equal_t)!=NULL)((*yyvaluep).opt_op_equal_t)->deep_delete(); }
#line 2582 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 273: /* trigger_events  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).trigger_events_t)!=NULL)((*yyvaluep).trigger_events_t)->deep_delete(); }
#line 2588 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 274: /* trigger_name  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).trigger_name_t)!=NULL)((*yyvaluep).trigger_name_t)->deep_delete(); }
#line 2594 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 275: /* trigger_action_time  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).trigger_action_time_t)!=NULL)((*yyvaluep).trigger_action_time_t)->deep_delete(); }
#line 2600 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 276: /* drop_index_stmt  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).drop_index_stmt_t)!=NULL)((*yyvaluep).drop_index_stmt_t)->deep_delete(); }
#line 2606 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 277: /* drop_table_stmt  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).drop_table_stmt_t)!=NULL)((*yyvaluep).drop_table_stmt_t)->deep_delete(); }
#line 2612 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 278: /* opt_restrict_or_cascade  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_restrict_or_cascade_t)!=NULL)((*yyvaluep).opt_restrict_or_cascade_t)->deep_delete(); }
#line 2618 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 279: /* drop_trigger_stmt  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).drop_trigger_stmt_t)!=NULL)((*yyvaluep).drop_trigger_stmt_t)->deep_delete(); }
#line 2624 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 280: /* drop_view_stmt  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).drop_view_stmt_t)!=NULL)((*yyvaluep).drop_view_stmt_t)->deep_delete(); }
#line 2630 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 281: /* insert_stmt  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).insert_stmt_t)!=NULL)((*yyvaluep).insert_stmt_t)->deep_delete(); }
#line 2636 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 282: /* insert_rest  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).insert_rest_t)!=NULL)((*yyvaluep).insert_rest_t)->deep_delete(); }
#line 2642 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 283: /* super_values_list  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).super_values_list_t)!=NULL)((*yyvaluep).super_values_list_t)->deep_delete(); }
#line 2648 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 284: /* values_list  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).values_list_t)!=NULL)((*yyvaluep).values_list_t)->deep_delete(); }
#line 2654 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 285: /* opt_on_conflict  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_on_conflict_t)!=NULL)((*yyvaluep).opt_on_conflict_t)->deep_delete(); }
#line 2660 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 286: /* opt_conflict_expr  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_conflict_expr_t)!=NULL)((*yyvaluep).opt_conflict_expr_t)->deep_delete(); }
#line 2666 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 287: /* indexed_column_list  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).indexed_column_list_t)!=NULL)((*yyvaluep).indexed_column_list_t)->deep_delete(); }
#line 2672 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 288: /* indexed_column  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).indexed_column_t)!=NULL)((*yyvaluep).indexed_column_t)->deep_delete(); }
#line 2678 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 289: /* update_stmt  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).update_stmt_t)!=NULL)((*yyvaluep).update_stmt_t)->deep_delete(); }
#line 2684 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 290: /* alter_action  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).alter_action_t)!=NULL)((*yyvaluep).alter_action_t)->deep_delete(); }
#line 2690 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 291: /* alter_constant_action  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).alter_constant_action_t)!=NULL)((*yyvaluep).alter_constant_action_t)->deep_delete(); }
#line 2696 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 292: /* column_def_list  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).column_def_list_t)!=NULL)((*yyvaluep).column_def_list_t)->deep_delete(); }
#line 2702 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 293: /* column_def  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).column_def_t)!=NULL)((*yyvaluep).column_def_t)->deep_delete(); }
#line 2708 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 294: /* opt_column_constraint_list  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_column_constraint_list_t)!=NULL)((*yyvaluep).opt_column_constraint_list_t)->deep_delete(); }
#line 2714 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 295: /* column_constraint_list  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).column_constraint_list_t)!=NULL)((*yyvaluep).column_constraint_list_t)->deep_delete(); }
#line 2720 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 296: /* column_constraint  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).column_constraint_t)!=NULL)((*yyvaluep).column_constraint_t)->deep_delete(); }
#line 2726 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 297: /* opt_reference_clause  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_reference_clause_t)!=NULL)((*yyvaluep).opt_reference_clause_t)->deep_delete(); }
#line 2732 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 298: /* opt_check  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_check_t)!=NULL)((*yyvaluep).opt_check_t)->deep_delete(); }
#line 2738 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 299: /* constraint_type  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).constraint_type_t)!=NULL)((*yyvaluep).constraint_type_t)->deep_delete(); }
#line 2744 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 300: /* reference_clause  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).reference_clause_t)!=NULL)((*yyvaluep).reference_clause_t)->deep_delete(); }
#line 2750 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 301: /* opt_foreign_key  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_foreign_key_t)!=NULL)((*yyvaluep).opt_foreign_key_t)->deep_delete(); }
#line 2756 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 302: /* opt_foreign_key_actions  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_foreign_key_actions_t)!=NULL)((*yyvaluep).opt_foreign_key_actions_t)->deep_delete(); }
#line 2762 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 303: /* foreign_key_actions  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).foreign_key_actions_t)!=NULL)((*yyvaluep).foreign_key_actions_t)->deep_delete(); }
#line 2768 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 304: /* key_actions  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).key_actions_t)!=NULL)((*yyvaluep).key_actions_t)->deep_delete(); }
#line 2774 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 305: /* opt_constraint_attribute_spec  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_constraint_attribute_spec_t)!=NULL)((*yyvaluep).opt_constraint_attribute_spec_t)->deep_delete(); }
#line 2780 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 306: /* opt_initial_time  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_initial_time_t)!=NULL)((*yyvaluep).opt_initial_time_t)->deep_delete(); }
#line 2786 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 307: /* opt_constraint_name  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_constraint_name_t)!=NULL)((*yyvaluep).opt_constraint_name_t)->deep_delete(); }
#line 2792 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 308: /* opt_temp  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_temp_t)!=NULL)((*yyvaluep).opt_temp_t)->deep_delete(); }
#line 2798 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 309: /* opt_check_option  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_check_option_t)!=NULL)((*yyvaluep).opt_check_option_t)->deep_delete(); }
#line 2804 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 310: /* opt_column_name_list_p  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_column_name_list_p_t)!=NULL)((*yyvaluep).opt_column_name_list_p_t)->deep_delete(); }
#line 2810 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 311: /* set_clause_list  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).set_clause_list_t)!=NULL)((*yyvaluep).set_clause_list_t)->deep_delete(); }
#line 2816 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 312: /* set_clause  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).set_clause_t)!=NULL)((*yyvaluep).set_clause_t)->deep_delete(); }
#line 2822 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 313: /* opt_as_alias  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_as_alias_t)!=NULL)((*yyvaluep).opt_as_alias_t)->deep_delete(); }
#line 2828 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 314: /* expr  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).expr_t)!=NULL)((*yyvaluep).expr_t)->deep_delete(); }
#line 2834 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 315: /* operand  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).operand_t)!=NULL)((*yyvaluep).operand_t)->deep_delete(); }
#line 2840 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 316: /* cast_expr  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).cast_expr_t)!=NULL)((*yyvaluep).cast_expr_t)->deep_delete(); }
#line 2846 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 317: /* scalar_expr  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).scalar_expr_t)!=NULL)((*yyvaluep).scalar_expr_t)->deep_delete(); }
#line 2852 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 318: /* unary_expr  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).unary_expr_t)!=NULL)((*yyvaluep).unary_expr_t)->deep_delete(); }
#line 2858 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 319: /* binary_expr  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).binary_expr_t)!=NULL)((*yyvaluep).binary_expr_t)->deep_delete(); }
#line 2864 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 320: /* logic_expr  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).logic_expr_t)!=NULL)((*yyvaluep).logic_expr_t)->deep_delete(); }
#line 2870 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 321: /* in_expr  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).in_expr_t)!=NULL)((*yyvaluep).in_expr_t)->deep_delete(); }
#line 2876 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 322: /* case_expr  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).case_expr_t)!=NULL)((*yyvaluep).case_expr_t)->deep_delete(); }
#line 2882 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 323: /* between_expr  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).between_expr_t)!=NULL)((*yyvaluep).between_expr_t)->deep_delete(); }
#line 2888 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 324: /* exists_expr  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).exists_expr_t)!=NULL)((*yyvaluep).exists_expr_t)->deep_delete(); }
#line 2894 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 325: /* function_expr  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).function_expr_t)!=NULL)((*yyvaluep).function_expr_t)->deep_delete(); }
#line 2900 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 326: /* opt_distinct  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_distinct_t)!=NULL)((*yyvaluep).opt_distinct_t)->deep_delete(); }
#line 2906 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 327: /* opt_filter_clause  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_filter_clause_t)!=NULL)((*yyvaluep).opt_filter_clause_t)->deep_delete(); }
#line 2912 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 328: /* opt_over_clause  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_over_clause_t)!=NULL)((*yyvaluep).opt_over_clause_t)->deep_delete(); }
#line 2918 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 329: /* case_list  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).case_list_t)!=NULL)((*yyvaluep).case_list_t)->deep_delete(); }
#line 2924 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 330: /* case_clause  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).case_clause_t)!=NULL)((*yyvaluep).case_clause_t)->deep_delete(); }
#line 2930 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 331: /* comp_expr  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).comp_expr_t)!=NULL)((*yyvaluep).comp_expr_t)->deep_delete(); }
#line 2936 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 332: /* extract_expr  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).extract_expr_t)!=NULL)((*yyvaluep).extract_expr_t)->deep_delete(); }
#line 2942 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 333: /* datetime_field  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).datetime_field_t)!=NULL)((*yyvaluep).datetime_field_t)->deep_delete(); }
#line 2948 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 334: /* array_expr  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).array_expr_t)!=NULL)((*yyvaluep).array_expr_t)->deep_delete(); }
#line 2954 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 335: /* array_index  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).array_index_t)!=NULL)((*yyvaluep).array_index_t)->deep_delete(); }
#line 2960 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 336: /* literal  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).literal_t)!=NULL)((*yyvaluep).literal_t)->deep_delete(); }
#line 2966 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 337: /* string_literal  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).string_literal_t)!=NULL)((*yyvaluep).string_literal_t)->deep_delete(); }
#line 2972 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 338: /* bool_literal  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).bool_literal_t)!=NULL)((*yyvaluep).bool_literal_t)->deep_delete(); }
#line 2978 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 339: /* num_literal  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).num_literal_t)!=NULL)((*yyvaluep).num_literal_t)->deep_delete(); }
#line 2984 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 340: /* int_literal  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).int_literal_t)!=NULL)((*yyvaluep).int_literal_t)->deep_delete(); }
#line 2990 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 341: /* float_literal  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).float_literal_t)!=NULL)((*yyvaluep).float_literal_t)->deep_delete(); }
#line 2996 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 342: /* opt_column  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_column_t)!=NULL)((*yyvaluep).opt_column_t)->deep_delete(); }
#line 3002 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 343: /* trigger_body  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).trigger_body_t)!=NULL)((*yyvaluep).trigger_body_t)->deep_delete(); }
#line 3008 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 344: /* opt_if_not_exist  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_if_not_exist_t)!=NULL)((*yyvaluep).opt_if_not_exist_t)->deep_delete(); }
#line 3014 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 345: /* opt_if_exist  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_if_exist_t)!=NULL)((*yyvaluep).opt_if_exist_t)->deep_delete(); }
#line 3020 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 346: /* identifier  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).identifier_t)!=NULL)((*yyvaluep).identifier_t)->deep_delete(); }
#line 3026 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 347: /* as_alias  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).as_alias_t)!=NULL)((*yyvaluep).as_alias_t)->deep_delete(); }
#line 3032 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 348: /* table_name  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).table_name_t)!=NULL)((*yyvaluep).table_name_t)->deep_delete(); }
#line 3038 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 349: /* column_name  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).column_name_t)!=NULL)((*yyvaluep).column_name_t)->deep_delete(); }
#line 3044 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 350: /* opt_index_keyword  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_index_keyword_t)!=NULL)((*yyvaluep).opt_index_keyword_t)->deep_delete(); }
#line 3050 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 351: /* view_name  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).view_name_t)!=NULL)((*yyvaluep).view_name_t)->deep_delete(); }
#line 3056 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 352: /* function_name  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).function_name_t)!=NULL)((*yyvaluep).function_name_t)->deep_delete(); }
#line 3062 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 353: /* binary_op  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).binary_op_t)!=NULL)((*yyvaluep).binary_op_t)->deep_delete(); }
#line 3068 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 354: /* opt_not  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_not_t)!=NULL)((*yyvaluep).opt_not_t)->deep_delete(); }
#line 3074 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 355: /* name  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).name_t)!=NULL)((*yyvaluep).name_t)->deep_delete(); }
#line 3080 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 356: /* type_name  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).type_name_t)!=NULL)((*yyvaluep).type_name_t)->deep_delete(); }
#line 3086 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 357: /* character_type  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).character_type_t)!=NULL)((*yyvaluep).character_type_t)->deep_delete(); }
#line 3092 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 358: /* character_with_length  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).character_with_length_t)!=NULL)((*yyvaluep).character_with_length_t)->deep_delete(); }
#line 3098 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 359: /* character_without_length  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).character_without_length_t)!=NULL)((*yyvaluep).character_without_length_t)->deep_delete(); }
#line 3104 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 360: /* character_conflicta  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).character_conflicta_t)!=NULL)((*yyvaluep).character_conflicta_t)->deep_delete(); }
#line 3110 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 361: /* numeric_type  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).numeric_type_t)!=NULL)((*yyvaluep).numeric_type_t)->deep_delete(); }
#line 3116 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 362: /* opt_table_constraint_list  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_table_constraint_list_t)!=NULL)((*yyvaluep).opt_table_constraint_list_t)->deep_delete(); }
#line 3122 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 363: /* table_constraint_list  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).table_constraint_list_t)!=NULL)((*yyvaluep).table_constraint_list_t)->deep_delete(); }
#line 3128 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 364: /* table_constraint  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).table_constraint_t)!=NULL)((*yyvaluep).table_constraint_t)->deep_delete(); }
#line 3134 "bison.tab.c" /* yacc.c:1257  */
        break;

    case 365: /* opt_enforced  */
#line 421 "bison.y" /* yacc.c:1257  */
      { if(((*yyvaluep).opt_enforced_t)!=NULL)((*yyvaluep).opt_enforced_t)->deep_delete(); }
#line 3140 "bison.tab.c" /* yacc.c:1257  */
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

/* User initialization code.  */
#line 18 "bison.y" /* yacc.c:1429  */
{
    // Initialize
    yylloc.first_column = 0;
    yylloc.last_column = 0;
    yylloc.first_line = 0;
    yylloc.last_line = 0;
    yylloc.total_column = 0;
    yylloc.string_length = 0;
}

#line 3259 "bison.tab.c" /* yacc.c:1429  */
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
#line 425 "bison.y" /* yacc.c:1646  */
    {
		(yyval.program_t) = result;
		(yyval.program_t)->case_idx_ = CASE0;
		(yyval.program_t)->stmtlist_ = (yyvsp[0].stmtlist_t);
				(yyval.program_t) = NULL;

	}
#line 3454 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 435 "bison.y" /* yacc.c:1646  */
    {
		(yyval.stmtlist_t) = new Stmtlist();
		(yyval.stmtlist_t)->case_idx_ = CASE0;
		(yyval.stmtlist_t)->stmt_ = (yyvsp[-2].stmt_t);
		(yyval.stmtlist_t)->stmtlist_ = (yyvsp[0].stmtlist_t);
		
	}
#line 3466 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 442 "bison.y" /* yacc.c:1646  */
    {
		(yyval.stmtlist_t) = new Stmtlist();
		(yyval.stmtlist_t)->case_idx_ = CASE1;
		(yyval.stmtlist_t)->stmt_ = (yyvsp[-1].stmt_t);
		
	}
#line 3477 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 451 "bison.y" /* yacc.c:1646  */
    {
		(yyval.stmt_t) = new Stmt();
		(yyval.stmt_t)->case_idx_ = CASE0;
		(yyval.stmt_t)->create_stmt_ = (yyvsp[0].create_stmt_t);
		
	}
#line 3488 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 457 "bison.y" /* yacc.c:1646  */
    {
		(yyval.stmt_t) = new Stmt();
		(yyval.stmt_t)->case_idx_ = CASE1;
		(yyval.stmt_t)->drop_stmt_ = (yyvsp[0].drop_stmt_t);
		
	}
#line 3499 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 463 "bison.y" /* yacc.c:1646  */
    {
		(yyval.stmt_t) = new Stmt();
		(yyval.stmt_t)->case_idx_ = CASE2;
		(yyval.stmt_t)->select_stmt_ = (yyvsp[0].select_stmt_t);
		
	}
#line 3510 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 469 "bison.y" /* yacc.c:1646  */
    {
		(yyval.stmt_t) = new Stmt();
		(yyval.stmt_t)->case_idx_ = CASE3;
		(yyval.stmt_t)->update_stmt_ = (yyvsp[0].update_stmt_t);
		
	}
#line 3521 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 475 "bison.y" /* yacc.c:1646  */
    {
		(yyval.stmt_t) = new Stmt();
		(yyval.stmt_t)->case_idx_ = CASE4;
		(yyval.stmt_t)->insert_stmt_ = (yyvsp[0].insert_stmt_t);
		
	}
#line 3532 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 481 "bison.y" /* yacc.c:1646  */
    {
		(yyval.stmt_t) = new Stmt();
		(yyval.stmt_t)->case_idx_ = CASE5;
		(yyval.stmt_t)->alter_stmt_ = (yyvsp[0].alter_stmt_t);
		
	}
#line 3543 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 490 "bison.y" /* yacc.c:1646  */
    {
		(yyval.create_stmt_t) = new CreateStmt();
		(yyval.create_stmt_t)->case_idx_ = CASE0;
		(yyval.create_stmt_t)->create_table_stmt_ = (yyvsp[0].create_table_stmt_t);
		
	}
#line 3554 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 496 "bison.y" /* yacc.c:1646  */
    {
		(yyval.create_stmt_t) = new CreateStmt();
		(yyval.create_stmt_t)->case_idx_ = CASE1;
		(yyval.create_stmt_t)->create_index_stmt_ = (yyvsp[0].create_index_stmt_t);
		
	}
#line 3565 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 502 "bison.y" /* yacc.c:1646  */
    {
		(yyval.create_stmt_t) = new CreateStmt();
		(yyval.create_stmt_t)->case_idx_ = CASE2;
		(yyval.create_stmt_t)->create_trigger_stmt_ = (yyvsp[0].create_trigger_stmt_t);
		
	}
#line 3576 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 508 "bison.y" /* yacc.c:1646  */
    {
		(yyval.create_stmt_t) = new CreateStmt();
		(yyval.create_stmt_t)->case_idx_ = CASE3;
		(yyval.create_stmt_t)->create_view_stmt_ = (yyvsp[0].create_view_stmt_t);
		
	}
#line 3587 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 517 "bison.y" /* yacc.c:1646  */
    {
		(yyval.drop_stmt_t) = new DropStmt();
		(yyval.drop_stmt_t)->case_idx_ = CASE0;
		(yyval.drop_stmt_t)->drop_index_stmt_ = (yyvsp[0].drop_index_stmt_t);
		
	}
#line 3598 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 523 "bison.y" /* yacc.c:1646  */
    {
		(yyval.drop_stmt_t) = new DropStmt();
		(yyval.drop_stmt_t)->case_idx_ = CASE1;
		(yyval.drop_stmt_t)->drop_table_stmt_ = (yyvsp[0].drop_table_stmt_t);
		
	}
#line 3609 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 529 "bison.y" /* yacc.c:1646  */
    {
		(yyval.drop_stmt_t) = new DropStmt();
		(yyval.drop_stmt_t)->case_idx_ = CASE2;
		(yyval.drop_stmt_t)->drop_trigger_stmt_ = (yyvsp[0].drop_trigger_stmt_t);
		
	}
#line 3620 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 535 "bison.y" /* yacc.c:1646  */
    {
		(yyval.drop_stmt_t) = new DropStmt();
		(yyval.drop_stmt_t)->case_idx_ = CASE3;
		(yyval.drop_stmt_t)->drop_view_stmt_ = (yyvsp[0].drop_view_stmt_t);
		
	}
#line 3631 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 544 "bison.y" /* yacc.c:1646  */
    {
		(yyval.alter_stmt_t) = new AlterStmt();
		(yyval.alter_stmt_t)->case_idx_ = CASE0;
		(yyval.alter_stmt_t)->table_name_ = (yyvsp[-1].table_name_t);
		(yyval.alter_stmt_t)->alter_action_ = (yyvsp[0].alter_action_t);
		
	}
#line 3643 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 554 "bison.y" /* yacc.c:1646  */
    {
		(yyval.select_stmt_t) = new SelectStmt();
		(yyval.select_stmt_t)->case_idx_ = CASE0;
		(yyval.select_stmt_t)->select_no_parens_ = (yyvsp[0].select_no_parens_t);
		
	}
#line 3654 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 560 "bison.y" /* yacc.c:1646  */
    {
		(yyval.select_stmt_t) = new SelectStmt();
		(yyval.select_stmt_t)->case_idx_ = CASE1;
		(yyval.select_stmt_t)->select_with_parens_ = (yyvsp[0].select_with_parens_t);
		
	}
#line 3665 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 569 "bison.y" /* yacc.c:1646  */
    {
		(yyval.select_with_parens_t) = new SelectWithParens();
		(yyval.select_with_parens_t)->case_idx_ = CASE0;
		(yyval.select_with_parens_t)->select_no_parens_ = (yyvsp[-1].select_no_parens_t);
		
	}
#line 3676 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 575 "bison.y" /* yacc.c:1646  */
    {
		(yyval.select_with_parens_t) = new SelectWithParens();
		(yyval.select_with_parens_t)->case_idx_ = CASE1;
		(yyval.select_with_parens_t)->select_with_parens_ = (yyvsp[-1].select_with_parens_t);
		
	}
#line 3687 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 584 "bison.y" /* yacc.c:1646  */
    {
		(yyval.select_no_parens_t) = new SelectNoParens();
		(yyval.select_no_parens_t)->case_idx_ = CASE0;
		(yyval.select_no_parens_t)->opt_with_clause_ = (yyvsp[-3].opt_with_clause_t);
		(yyval.select_no_parens_t)->select_clause_list_ = (yyvsp[-2].select_clause_list_t);
		(yyval.select_no_parens_t)->opt_order_clause_ = (yyvsp[-1].opt_order_clause_t);
		(yyval.select_no_parens_t)->opt_limit_clause_ = (yyvsp[0].opt_limit_clause_t);
		
	}
#line 3701 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 596 "bison.y" /* yacc.c:1646  */
    {
		(yyval.select_clause_list_t) = new SelectClauseList();
		(yyval.select_clause_list_t)->case_idx_ = CASE0;
		(yyval.select_clause_list_t)->select_clause_ = (yyvsp[0].select_clause_t);
		
	}
#line 3712 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 602 "bison.y" /* yacc.c:1646  */
    {
		(yyval.select_clause_list_t) = new SelectClauseList();
		(yyval.select_clause_list_t)->case_idx_ = CASE1;
		(yyval.select_clause_list_t)->select_clause_ = (yyvsp[-2].select_clause_t);
		(yyval.select_clause_list_t)->combine_clause_ = (yyvsp[-1].combine_clause_t);
		(yyval.select_clause_list_t)->select_clause_list_ = (yyvsp[0].select_clause_list_t);
		
	}
#line 3725 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 613 "bison.y" /* yacc.c:1646  */
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
#line 3741 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 627 "bison.y" /* yacc.c:1646  */
    {
		(yyval.combine_clause_t) = new CombineClause();
		(yyval.combine_clause_t)->case_idx_ = CASE0;
		
	}
#line 3751 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 632 "bison.y" /* yacc.c:1646  */
    {
		(yyval.combine_clause_t) = new CombineClause();
		(yyval.combine_clause_t)->case_idx_ = CASE1;
		
	}
#line 3761 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 637 "bison.y" /* yacc.c:1646  */
    {
		(yyval.combine_clause_t) = new CombineClause();
		(yyval.combine_clause_t)->case_idx_ = CASE2;
		
	}
#line 3771 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 645 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_from_clause_t) = new OptFromClause();
		(yyval.opt_from_clause_t)->case_idx_ = CASE0;
		(yyval.opt_from_clause_t)->from_clause_ = (yyvsp[0].from_clause_t);
		
	}
#line 3782 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 651 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_from_clause_t) = new OptFromClause();
		(yyval.opt_from_clause_t)->case_idx_ = CASE1;
		
	}
#line 3792 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 659 "bison.y" /* yacc.c:1646  */
    {
		(yyval.select_target_t) = new SelectTarget();
		(yyval.select_target_t)->case_idx_ = CASE0;
		(yyval.select_target_t)->expr_list_ = (yyvsp[0].expr_list_t);
		
	}
#line 3803 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 668 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_window_clause_t) = new OptWindowClause();
		(yyval.opt_window_clause_t)->case_idx_ = CASE0;
		(yyval.opt_window_clause_t)->window_clause_ = (yyvsp[0].window_clause_t);
		
	}
#line 3814 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 674 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_window_clause_t) = new OptWindowClause();
		(yyval.opt_window_clause_t)->case_idx_ = CASE1;
		
	}
#line 3824 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 682 "bison.y" /* yacc.c:1646  */
    {
		(yyval.window_clause_t) = new WindowClause();
		(yyval.window_clause_t)->case_idx_ = CASE0;
		(yyval.window_clause_t)->window_def_list_ = (yyvsp[0].window_def_list_t);
		
	}
#line 3835 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 691 "bison.y" /* yacc.c:1646  */
    {
		(yyval.window_def_list_t) = new WindowDefList();
		(yyval.window_def_list_t)->case_idx_ = CASE0;
		(yyval.window_def_list_t)->window_def_ = (yyvsp[0].window_def_t);
		
	}
#line 3846 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 697 "bison.y" /* yacc.c:1646  */
    {
		(yyval.window_def_list_t) = new WindowDefList();
		(yyval.window_def_list_t)->case_idx_ = CASE1;
		(yyval.window_def_list_t)->window_def_ = (yyvsp[-2].window_def_t);
		(yyval.window_def_list_t)->window_def_list_ = (yyvsp[0].window_def_list_t);
		
	}
#line 3858 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 707 "bison.y" /* yacc.c:1646  */
    {
		(yyval.window_def_t) = new WindowDef();
		(yyval.window_def_t)->case_idx_ = CASE0;
		(yyval.window_def_t)->window_name_ = (yyvsp[-4].window_name_t);
		(yyval.window_def_t)->window_ = (yyvsp[-1].window_t);
	}
#line 3869 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 716 "bison.y" /* yacc.c:1646  */
    {
		(yyval.window_name_t) = new WindowName();
		(yyval.window_name_t)->case_idx_ = CASE0;
		(yyval.window_name_t)->identifier_ = (yyvsp[0].identifier_t);
		
	}
#line 3880 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 725 "bison.y" /* yacc.c:1646  */
    {
		(yyval.window_t) = new Window();
		(yyval.window_t)->case_idx_ = CASE0;
		(yyval.window_t)->opt_exist_window_name_ = (yyvsp[-3].opt_exist_window_name_t);
		(yyval.window_t)->opt_partition_ = (yyvsp[-2].opt_partition_t);
		(yyval.window_t)->opt_order_clause_ = (yyvsp[-1].opt_order_clause_t);
		(yyval.window_t)->opt_frame_clause_ = (yyvsp[0].opt_frame_clause_t);
		
	}
#line 3894 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 737 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_partition_t) = new OptPartition();
		(yyval.opt_partition_t)->case_idx_ = CASE0;
		(yyval.opt_partition_t)->expr_list_ = (yyvsp[0].expr_list_t);
		
	}
#line 3905 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 743 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_partition_t) = new OptPartition();
		(yyval.opt_partition_t)->case_idx_ = CASE1;
		
	}
#line 3915 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 751 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_frame_clause_t) = new OptFrameClause();
		(yyval.opt_frame_clause_t)->case_idx_ = CASE0;
		(yyval.opt_frame_clause_t)->range_or_rows_ = (yyvsp[-1].range_or_rows_t);
		(yyval.opt_frame_clause_t)->frame_bound_start_ = (yyvsp[0].frame_bound_start_t);
		
	}
#line 3927 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 758 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_frame_clause_t) = new OptFrameClause();
		(yyval.opt_frame_clause_t)->case_idx_ = CASE1;
		(yyval.opt_frame_clause_t)->range_or_rows_ = (yyvsp[-4].range_or_rows_t);
		(yyval.opt_frame_clause_t)->frame_bound_start_ = (yyvsp[-2].frame_bound_start_t);
		(yyval.opt_frame_clause_t)->frame_bound_end_ = (yyvsp[0].frame_bound_end_t);
		
	}
#line 3940 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 766 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_frame_clause_t) = new OptFrameClause();
		(yyval.opt_frame_clause_t)->case_idx_ = CASE2;
		
	}
#line 3950 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 774 "bison.y" /* yacc.c:1646  */
    {
		(yyval.range_or_rows_t) = new RangeOrRows();
		(yyval.range_or_rows_t)->case_idx_ = CASE0;
		
	}
#line 3960 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 779 "bison.y" /* yacc.c:1646  */
    {
		(yyval.range_or_rows_t) = new RangeOrRows();
		(yyval.range_or_rows_t)->case_idx_ = CASE1;
		
	}
#line 3970 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 784 "bison.y" /* yacc.c:1646  */
    {
		(yyval.range_or_rows_t) = new RangeOrRows();
		(yyval.range_or_rows_t)->case_idx_ = CASE2;
		
	}
#line 3980 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 792 "bison.y" /* yacc.c:1646  */
    {
		(yyval.frame_bound_start_t) = new FrameBoundStart();
		(yyval.frame_bound_start_t)->case_idx_ = CASE0;
		(yyval.frame_bound_start_t)->frame_bound_ = (yyvsp[0].frame_bound_t);
		
	}
#line 3991 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 798 "bison.y" /* yacc.c:1646  */
    {
		(yyval.frame_bound_start_t) = new FrameBoundStart();
		(yyval.frame_bound_start_t)->case_idx_ = CASE1;
		
	}
#line 4001 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 806 "bison.y" /* yacc.c:1646  */
    {
		(yyval.frame_bound_end_t) = new FrameBoundEnd();
		(yyval.frame_bound_end_t)->case_idx_ = CASE0;
		(yyval.frame_bound_end_t)->frame_bound_ = (yyvsp[0].frame_bound_t);
		
	}
#line 4012 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 812 "bison.y" /* yacc.c:1646  */
    {
		(yyval.frame_bound_end_t) = new FrameBoundEnd();
		(yyval.frame_bound_end_t)->case_idx_ = CASE1;
		
	}
#line 4022 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 820 "bison.y" /* yacc.c:1646  */
    {
		(yyval.frame_bound_t) = new FrameBound();
		(yyval.frame_bound_t)->case_idx_ = CASE0;
		(yyval.frame_bound_t)->expr_ = (yyvsp[-1].expr_t);
		
	}
#line 4033 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 826 "bison.y" /* yacc.c:1646  */
    {
		(yyval.frame_bound_t) = new FrameBound();
		(yyval.frame_bound_t)->case_idx_ = CASE1;
		(yyval.frame_bound_t)->expr_ = (yyvsp[-1].expr_t);
		
	}
#line 4044 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 832 "bison.y" /* yacc.c:1646  */
    {
		(yyval.frame_bound_t) = new FrameBound();
		(yyval.frame_bound_t)->case_idx_ = CASE2;
		
	}
#line 4054 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 840 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_exist_window_name_t) = new OptExistWindowName();
		(yyval.opt_exist_window_name_t)->case_idx_ = CASE0;
		(yyval.opt_exist_window_name_t)->identifier_ = (yyvsp[0].identifier_t);
	}
#line 4064 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 845 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_exist_window_name_t) = new OptExistWindowName();
		(yyval.opt_exist_window_name_t)->case_idx_ = CASE1;
		
	}
#line 4074 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 853 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_group_clause_t) = new OptGroupClause();
		(yyval.opt_group_clause_t)->case_idx_ = CASE0;
		(yyval.opt_group_clause_t)->expr_list_ = (yyvsp[-1].expr_list_t);
		(yyval.opt_group_clause_t)->opt_having_clause_ = (yyvsp[0].opt_having_clause_t);
		
	}
#line 4086 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 860 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_group_clause_t) = new OptGroupClause();
		(yyval.opt_group_clause_t)->case_idx_ = CASE1;
		
	}
#line 4096 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 868 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_having_clause_t) = new OptHavingClause();
		(yyval.opt_having_clause_t)->case_idx_ = CASE0;
		(yyval.opt_having_clause_t)->expr_ = (yyvsp[0].expr_t);
		
	}
#line 4107 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 874 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_having_clause_t) = new OptHavingClause();
		(yyval.opt_having_clause_t)->case_idx_ = CASE1;
		
	}
#line 4117 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 882 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_where_clause_t) = new OptWhereClause();
		(yyval.opt_where_clause_t)->case_idx_ = CASE0;
		(yyval.opt_where_clause_t)->where_clause_ = (yyvsp[0].where_clause_t);
		
	}
#line 4128 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 888 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_where_clause_t) = new OptWhereClause();
		(yyval.opt_where_clause_t)->case_idx_ = CASE1;
		
	}
#line 4138 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 896 "bison.y" /* yacc.c:1646  */
    {
		(yyval.where_clause_t) = new WhereClause();
		(yyval.where_clause_t)->case_idx_ = CASE0;
		(yyval.where_clause_t)->expr_ = (yyvsp[0].expr_t);
		
	}
#line 4149 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 905 "bison.y" /* yacc.c:1646  */
    {
		(yyval.from_clause_t) = new FromClause();
		(yyval.from_clause_t)->case_idx_ = CASE0;
		(yyval.from_clause_t)->table_ref_ = (yyvsp[0].table_ref_t);
		
	}
#line 4160 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 914 "bison.y" /* yacc.c:1646  */
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
#line 4176 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 925 "bison.y" /* yacc.c:1646  */
    {
		(yyval.table_ref_t) = new TableRef();
		(yyval.table_ref_t)->case_idx_ = CASE1;
		(yyval.table_ref_t)->opt_table_prefix_ = (yyvsp[-7].opt_table_prefix_t);
		(yyval.table_ref_t)->function_name_ = (yyvsp[-6].function_name_t);
		(yyval.table_ref_t)->expr_list_ = (yyvsp[-4].expr_list_t);
		(yyval.table_ref_t)->opt_as_alias_ = (yyvsp[-2].opt_as_alias_t);
		(yyval.table_ref_t)->opt_on_ = (yyvsp[-1].opt_on_t);
		(yyval.table_ref_t)->opt_using_ = (yyvsp[0].opt_using_t);
		
	}
#line 4192 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 936 "bison.y" /* yacc.c:1646  */
    {
		(yyval.table_ref_t) = new TableRef();
		(yyval.table_ref_t)->case_idx_ = CASE2;
		(yyval.table_ref_t)->opt_table_prefix_ = (yyvsp[-6].opt_table_prefix_t);
		(yyval.table_ref_t)->select_no_parens_ = (yyvsp[-4].select_no_parens_t);
		(yyval.table_ref_t)->opt_as_alias_ = (yyvsp[-2].opt_as_alias_t);
		(yyval.table_ref_t)->opt_on_ = (yyvsp[-1].opt_on_t);
		(yyval.table_ref_t)->opt_using_ = (yyvsp[0].opt_using_t);
		
	}
#line 4207 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 946 "bison.y" /* yacc.c:1646  */
    {
		(yyval.table_ref_t) = new TableRef();
		(yyval.table_ref_t)->case_idx_ = CASE3;
		(yyval.table_ref_t)->opt_table_prefix_ = (yyvsp[-6].opt_table_prefix_t);
		(yyval.table_ref_t)->table_ref_ = (yyvsp[-4].table_ref_t);
		(yyval.table_ref_t)->opt_as_alias_ = (yyvsp[-2].opt_as_alias_t);
		(yyval.table_ref_t)->opt_on_ = (yyvsp[-1].opt_on_t);
		(yyval.table_ref_t)->opt_using_ = (yyvsp[0].opt_using_t);
		
	}
#line 4222 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 959 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_index_t) = new OptIndex();
		(yyval.opt_index_t)->case_idx_ = CASE0;
		(yyval.opt_index_t)->column_name_ = (yyvsp[0].column_name_t);
		
	}
#line 4233 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 965 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_index_t) = new OptIndex();
		(yyval.opt_index_t)->case_idx_ = CASE1;
		
	}
#line 4243 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 970 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_index_t) = new OptIndex();
		(yyval.opt_index_t)->case_idx_ = CASE2;
		
	}
#line 4253 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 978 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_on_t) = new OptOn();
		(yyval.opt_on_t)->case_idx_ = CASE0;
		(yyval.opt_on_t)->expr_ = (yyvsp[0].expr_t);
		
	}
#line 4264 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 984 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_on_t) = new OptOn();
		(yyval.opt_on_t)->case_idx_ = CASE1;
		
	}
#line 4274 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 992 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_using_t) = new OptUsing();
		(yyval.opt_using_t)->case_idx_ = CASE0;
		(yyval.opt_using_t)->column_name_list_ = (yyvsp[-1].column_name_list_t);
		
	}
#line 4285 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 998 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_using_t) = new OptUsing();
		(yyval.opt_using_t)->case_idx_ = CASE1;
		
	}
#line 4295 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 1006 "bison.y" /* yacc.c:1646  */
    {
		(yyval.column_name_list_t) = new ColumnNameList();
		(yyval.column_name_list_t)->case_idx_ = CASE0;
		(yyval.column_name_list_t)->column_name_ = (yyvsp[0].column_name_t);
		
	}
#line 4306 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 1012 "bison.y" /* yacc.c:1646  */
    {
		(yyval.column_name_list_t) = new ColumnNameList();
		(yyval.column_name_list_t)->case_idx_ = CASE1;
		(yyval.column_name_list_t)->column_name_ = (yyvsp[-2].column_name_t);
		(yyval.column_name_list_t)->column_name_list_ = (yyvsp[0].column_name_list_t);
		
	}
#line 4318 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 1022 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_table_prefix_t) = new OptTablePrefix();
		(yyval.opt_table_prefix_t)->case_idx_ = CASE0;
		(yyval.opt_table_prefix_t)->table_ref_ = (yyvsp[-1].table_ref_t);
		(yyval.opt_table_prefix_t)->join_op_ = (yyvsp[0].join_op_t);
		
	}
#line 4330 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 1029 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_table_prefix_t) = new OptTablePrefix();
		(yyval.opt_table_prefix_t)->case_idx_ = CASE1;
		
	}
#line 4340 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 1037 "bison.y" /* yacc.c:1646  */
    {
		(yyval.join_op_t) = new JoinOp();
		(yyval.join_op_t)->case_idx_ = CASE0;
		
	}
#line 4350 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 1042 "bison.y" /* yacc.c:1646  */
    {
		(yyval.join_op_t) = new JoinOp();
		(yyval.join_op_t)->case_idx_ = CASE1;
		
	}
#line 4360 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 1047 "bison.y" /* yacc.c:1646  */
    {
		(yyval.join_op_t) = new JoinOp();
		(yyval.join_op_t)->case_idx_ = CASE2;
		(yyval.join_op_t)->opt_join_type_ = (yyvsp[-1].opt_join_type_t);
		
	}
#line 4371 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 1056 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_join_type_t) = new OptJoinType();
		(yyval.opt_join_type_t)->case_idx_ = CASE0;
		
	}
#line 4381 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 1061 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_join_type_t) = new OptJoinType();
		(yyval.opt_join_type_t)->case_idx_ = CASE1;
		
	}
#line 4391 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 1066 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_join_type_t) = new OptJoinType();
		(yyval.opt_join_type_t)->case_idx_ = CASE2;
		
	}
#line 4401 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 1071 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_join_type_t) = new OptJoinType();
		(yyval.opt_join_type_t)->case_idx_ = CASE3;
		
	}
#line 4411 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 1076 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_join_type_t) = new OptJoinType();
		(yyval.opt_join_type_t)->case_idx_ = CASE4;
		
	}
#line 4421 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 1084 "bison.y" /* yacc.c:1646  */
    {
		(yyval.expr_list_t) = new ExprList();
		(yyval.expr_list_t)->case_idx_ = CASE0;
		(yyval.expr_list_t)->expr_ = (yyvsp[-3].expr_t);
		(yyval.expr_list_t)->opt_as_alias_ = (yyvsp[-2].opt_as_alias_t);
		(yyval.expr_list_t)->expr_list_ = (yyvsp[0].expr_list_t);
		
	}
#line 4434 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 1092 "bison.y" /* yacc.c:1646  */
    {
		(yyval.expr_list_t) = new ExprList();
		(yyval.expr_list_t)->case_idx_ = CASE1;
		(yyval.expr_list_t)->expr_ = (yyvsp[-1].expr_t);
		(yyval.expr_list_t)->opt_as_alias_ = (yyvsp[0].opt_as_alias_t);
		
	}
#line 4446 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 1102 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_limit_clause_t) = new OptLimitClause();
		(yyval.opt_limit_clause_t)->case_idx_ = CASE0;
		(yyval.opt_limit_clause_t)->limit_clause_ = (yyvsp[0].limit_clause_t);
		
	}
#line 4457 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 1108 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_limit_clause_t) = new OptLimitClause();
		(yyval.opt_limit_clause_t)->case_idx_ = CASE1;
		
	}
#line 4467 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1116 "bison.y" /* yacc.c:1646  */
    {
		(yyval.limit_clause_t) = new LimitClause();
		(yyval.limit_clause_t)->case_idx_ = CASE0;
		(yyval.limit_clause_t)->expr_1_ = (yyvsp[0].expr_t);
		
	}
#line 4478 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1122 "bison.y" /* yacc.c:1646  */
    {
		(yyval.limit_clause_t) = new LimitClause();
		(yyval.limit_clause_t)->case_idx_ = CASE1;
		(yyval.limit_clause_t)->expr_1_ = (yyvsp[-2].expr_t);
		(yyval.limit_clause_t)->expr_2_ = (yyvsp[0].expr_t);
		
	}
#line 4490 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1129 "bison.y" /* yacc.c:1646  */
    {
		(yyval.limit_clause_t) = new LimitClause();
		(yyval.limit_clause_t)->case_idx_ = CASE2;
		(yyval.limit_clause_t)->expr_1_ = (yyvsp[-2].expr_t);
		(yyval.limit_clause_t)->expr_2_ = (yyvsp[0].expr_t);
		
	}
#line 4502 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 1139 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_limit_row_count_t) = new OptLimitRowCount();
		(yyval.opt_limit_row_count_t)->case_idx_ = CASE0;
		(yyval.opt_limit_row_count_t)->expr_ = (yyvsp[0].expr_t);
		
	}
#line 4513 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 1145 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_limit_row_count_t) = new OptLimitRowCount();
		(yyval.opt_limit_row_count_t)->case_idx_ = CASE1;
		
	}
#line 4523 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 1153 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_order_clause_t) = new OptOrderClause();
		(yyval.opt_order_clause_t)->case_idx_ = CASE0;
		(yyval.opt_order_clause_t)->order_item_list_ = (yyvsp[0].order_item_list_t);
		
	}
#line 4534 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 1159 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_order_clause_t) = new OptOrderClause();
		(yyval.opt_order_clause_t)->case_idx_ = CASE1;
		
	}
#line 4544 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 1167 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_order_nulls_t) = new OptOrderNulls();
		(yyval.opt_order_nulls_t)->case_idx_ = CASE0;
		
	}
#line 4554 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 1172 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_order_nulls_t) = new OptOrderNulls();
		(yyval.opt_order_nulls_t)->case_idx_ = CASE1;
		
	}
#line 4564 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 1177 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_order_nulls_t) = new OptOrderNulls();
		(yyval.opt_order_nulls_t)->case_idx_ = CASE2;
		
	}
#line 4574 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 1185 "bison.y" /* yacc.c:1646  */
    {
		(yyval.order_item_list_t) = new OrderItemList();
		(yyval.order_item_list_t)->case_idx_ = CASE0;
		(yyval.order_item_list_t)->order_item_ = (yyvsp[0].order_item_t);
		
	}
#line 4585 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 1191 "bison.y" /* yacc.c:1646  */
    {
		(yyval.order_item_list_t) = new OrderItemList();
		(yyval.order_item_list_t)->case_idx_ = CASE1;
		(yyval.order_item_list_t)->order_item_ = (yyvsp[-2].order_item_t);
		(yyval.order_item_list_t)->order_item_list_ = (yyvsp[0].order_item_list_t);
		
	}
#line 4597 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 1201 "bison.y" /* yacc.c:1646  */
    {
		(yyval.order_item_t) = new OrderItem();
		(yyval.order_item_t)->case_idx_ = CASE0;
		(yyval.order_item_t)->expr_ = (yyvsp[-2].expr_t);
		(yyval.order_item_t)->opt_order_behavior_ = (yyvsp[-1].opt_order_behavior_t);
		(yyval.order_item_t)->opt_order_nulls_ = (yyvsp[0].opt_order_nulls_t);
		
	}
#line 4610 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1212 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_order_behavior_t) = new OptOrderBehavior();
		(yyval.opt_order_behavior_t)->case_idx_ = CASE0;
		
	}
#line 4620 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1217 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_order_behavior_t) = new OptOrderBehavior();
		(yyval.opt_order_behavior_t)->case_idx_ = CASE1;
		
	}
#line 4630 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 1222 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_order_behavior_t) = new OptOrderBehavior();
		(yyval.opt_order_behavior_t)->case_idx_ = CASE2;
		
	}
#line 4640 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 1230 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_with_clause_t) = new OptWithClause();
		(yyval.opt_with_clause_t)->case_idx_ = CASE0;
		(yyval.opt_with_clause_t)->cte_table_list_ = (yyvsp[0].cte_table_list_t);
		
	}
#line 4651 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1236 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_with_clause_t) = new OptWithClause();
		(yyval.opt_with_clause_t)->case_idx_ = CASE1;
		(yyval.opt_with_clause_t)->cte_table_list_ = (yyvsp[0].cte_table_list_t);
		
	}
#line 4662 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1242 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_with_clause_t) = new OptWithClause();
		(yyval.opt_with_clause_t)->case_idx_ = CASE2;
		
	}
#line 4672 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 1250 "bison.y" /* yacc.c:1646  */
    {
		(yyval.cte_table_list_t) = new CteTableList();
		(yyval.cte_table_list_t)->case_idx_ = CASE0;
		(yyval.cte_table_list_t)->cte_table_ = (yyvsp[0].cte_table_t);
		
	}
#line 4683 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1256 "bison.y" /* yacc.c:1646  */
    {
		(yyval.cte_table_list_t) = new CteTableList();
		(yyval.cte_table_list_t)->case_idx_ = CASE1;
		(yyval.cte_table_list_t)->cte_table_ = (yyvsp[-2].cte_table_t);
		(yyval.cte_table_list_t)->cte_table_list_ = (yyvsp[0].cte_table_list_t);
		
	}
#line 4695 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1266 "bison.y" /* yacc.c:1646  */
    {
		(yyval.cte_table_t) = new CteTable();
		(yyval.cte_table_t)->case_idx_ = CASE0;
		(yyval.cte_table_t)->cte_table_name_ = (yyvsp[-4].cte_table_name_t);
		(yyval.cte_table_t)->select_stmt_ = (yyvsp[-1].select_stmt_t);
		
	}
#line 4707 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1276 "bison.y" /* yacc.c:1646  */
    {
		(yyval.cte_table_name_t) = new CteTableName();
		(yyval.cte_table_name_t)->case_idx_ = CASE0;
		(yyval.cte_table_name_t)->table_name_ = (yyvsp[-1].table_name_t);
		(yyval.cte_table_name_t)->opt_column_name_list_p_ = (yyvsp[0].opt_column_name_list_p_t);
		
	}
#line 4719 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 1286 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_all_or_distinct_t) = new OptAllOrDistinct();
		(yyval.opt_all_or_distinct_t)->case_idx_ = CASE0;
		
	}
#line 4729 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1291 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_all_or_distinct_t) = new OptAllOrDistinct();
		(yyval.opt_all_or_distinct_t)->case_idx_ = CASE1;
		
	}
#line 4739 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 1296 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_all_or_distinct_t) = new OptAllOrDistinct();
		(yyval.opt_all_or_distinct_t)->case_idx_ = CASE2;
		
	}
#line 4749 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 1304 "bison.y" /* yacc.c:1646  */
    {
		(yyval.create_table_stmt_t) = new CreateTableStmt();
		(yyval.create_table_stmt_t)->case_idx_ = CASE0;
		(yyval.create_table_stmt_t)->opt_temp_ = (yyvsp[-7].opt_temp_t);
		(yyval.create_table_stmt_t)->opt_if_not_exist_ = (yyvsp[-5].opt_if_not_exist_t);
		(yyval.create_table_stmt_t)->table_name_ = (yyvsp[-4].table_name_t);
		(yyval.create_table_stmt_t)->opt_table_option_list_ = (yyvsp[-3].opt_table_option_list_t);
		(yyval.create_table_stmt_t)->opt_ignore_or_replace_ = (yyvsp[-2].opt_ignore_or_replace_t);
		(yyval.create_table_stmt_t)->select_stmt_ = (yyvsp[0].select_stmt_t);
	}
#line 4764 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1315 "bison.y" /* yacc.c:1646  */
    {
		(yyval.create_table_stmt_t) = new CreateTableStmt();
		(yyval.create_table_stmt_t)->case_idx_ = CASE1;
		(yyval.create_table_stmt_t)->opt_temp_ = (yyvsp[-8].opt_temp_t);
		(yyval.create_table_stmt_t)->opt_if_not_exist_ = (yyvsp[-6].opt_if_not_exist_t);
		(yyval.create_table_stmt_t)->table_name_ = (yyvsp[-5].table_name_t);
		(yyval.create_table_stmt_t)->column_def_list_ = (yyvsp[-3].column_def_list_t);
		(yyval.create_table_stmt_t)->opt_table_constraint_list_ = (yyvsp[-2].opt_table_constraint_list_t);
		(yyval.create_table_stmt_t)->opt_table_option_list_ = (yyvsp[0].opt_table_option_list_t);
	}
#line 4779 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1328 "bison.y" /* yacc.c:1646  */
    {
		(yyval.create_index_stmt_t) = new CreateIndexStmt();
		(yyval.create_index_stmt_t)->case_idx_ = CASE0;
		(yyval.create_index_stmt_t)->opt_index_keyword_ = (yyvsp[-9].opt_index_keyword_t);
		(yyval.create_index_stmt_t)->table_name_1_ = (yyvsp[-7].table_name_t);
		(yyval.create_index_stmt_t)->table_name_2_ = (yyvsp[-5].table_name_t);
		(yyval.create_index_stmt_t)->indexed_column_list_ = (yyvsp[-3].indexed_column_list_t);
		(yyval.create_index_stmt_t)->opt_index_option_ = (yyvsp[-1].opt_index_option_t);
		(yyval.create_index_stmt_t)->opt_extra_option_ = (yyvsp[0].opt_extra_option_t);
	}
#line 4794 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1341 "bison.y" /* yacc.c:1646  */
    {
		(yyval.create_trigger_stmt_t) = new CreateTriggerStmt();
		(yyval.create_trigger_stmt_t)->case_idx_ = CASE0;
		(yyval.create_trigger_stmt_t)->trigger_name_ = (yyvsp[-8].trigger_name_t);
		(yyval.create_trigger_stmt_t)->trigger_action_time_ = (yyvsp[-7].trigger_action_time_t);
		(yyval.create_trigger_stmt_t)->trigger_events_ = (yyvsp[-6].trigger_events_t);
		(yyval.create_trigger_stmt_t)->table_name_ = (yyvsp[-4].table_name_t);
		(yyval.create_trigger_stmt_t)->trigger_body_ = (yyvsp[0].trigger_body_t);
	}
#line 4808 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1353 "bison.y" /* yacc.c:1646  */
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
#line 4823 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1363 "bison.y" /* yacc.c:1646  */
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
#line 4838 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1376 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_table_option_list_t) = new OptTableOptionList();
		(yyval.opt_table_option_list_t)->case_idx_ = CASE0;
		(yyval.opt_table_option_list_t)->table_option_list_ = (yyvsp[0].table_option_list_t);
		
	}
#line 4849 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1382 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_table_option_list_t) = new OptTableOptionList();
		(yyval.opt_table_option_list_t)->case_idx_ = CASE1;
		
	}
#line 4859 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1390 "bison.y" /* yacc.c:1646  */
    {
		(yyval.table_option_list_t) = new TableOptionList();
		(yyval.table_option_list_t)->case_idx_ = CASE0;
		(yyval.table_option_list_t)->table_option_ = (yyvsp[0].table_option_t);
		
	}
#line 4870 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1396 "bison.y" /* yacc.c:1646  */
    {
		(yyval.table_option_list_t) = new TableOptionList();
		(yyval.table_option_list_t)->case_idx_ = CASE1;
		(yyval.table_option_list_t)->table_option_ = (yyvsp[-2].table_option_t);
		(yyval.table_option_list_t)->opt_op_comma_ = (yyvsp[-1].opt_op_comma_t);
		(yyval.table_option_list_t)->table_option_list_ = (yyvsp[0].table_option_list_t);
		
	}
#line 4883 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1407 "bison.y" /* yacc.c:1646  */
    {
		(yyval.table_option_t) = new TableOption();
		(yyval.table_option_t)->case_idx_ = CASE0;
		(yyval.table_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 4894 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1413 "bison.y" /* yacc.c:1646  */
    {
		(yyval.table_option_t) = new TableOption();
		(yyval.table_option_t)->case_idx_ = CASE1;
		(yyval.table_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 4905 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1419 "bison.y" /* yacc.c:1646  */
    {
		(yyval.table_option_t) = new TableOption();
		(yyval.table_option_t)->case_idx_ = CASE2;
		(yyval.table_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 4916 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1425 "bison.y" /* yacc.c:1646  */
    {
		(yyval.table_option_t) = new TableOption();
		(yyval.table_option_t)->case_idx_ = CASE3;
		(yyval.table_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 4927 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1431 "bison.y" /* yacc.c:1646  */
    {
		(yyval.table_option_t) = new TableOption();
		(yyval.table_option_t)->case_idx_ = CASE4;
		(yyval.table_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 4938 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1437 "bison.y" /* yacc.c:1646  */
    {
		(yyval.table_option_t) = new TableOption();
		(yyval.table_option_t)->case_idx_ = CASE5;
		(yyval.table_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 4949 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1443 "bison.y" /* yacc.c:1646  */
    {
		(yyval.table_option_t) = new TableOption();
		(yyval.table_option_t)->case_idx_ = CASE6;
		(yyval.table_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 4960 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1449 "bison.y" /* yacc.c:1646  */
    {
		(yyval.table_option_t) = new TableOption();
		(yyval.table_option_t)->case_idx_ = CASE7;
		(yyval.table_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 4971 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1455 "bison.y" /* yacc.c:1646  */
    {
		(yyval.table_option_t) = new TableOption();
		(yyval.table_option_t)->case_idx_ = CASE8;
		(yyval.table_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 4982 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1464 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_op_comma_t) = new OptOpComma();
		(yyval.opt_op_comma_t)->case_idx_ = CASE0;
		
	}
#line 4992 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1469 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_op_comma_t) = new OptOpComma();
		(yyval.opt_op_comma_t)->case_idx_ = CASE1;
		
	}
#line 5002 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1477 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_ignore_or_replace_t) = new OptIgnoreOrReplace();
		(yyval.opt_ignore_or_replace_t)->case_idx_ = CASE0;
		
	}
#line 5012 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1482 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_ignore_or_replace_t) = new OptIgnoreOrReplace();
		(yyval.opt_ignore_or_replace_t)->case_idx_ = CASE1;
		
	}
#line 5022 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1487 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_ignore_or_replace_t) = new OptIgnoreOrReplace();
		(yyval.opt_ignore_or_replace_t)->case_idx_ = CASE2;
		
	}
#line 5032 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1495 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_view_algorithm_t) = new OptViewAlgorithm();
		(yyval.opt_view_algorithm_t)->case_idx_ = CASE0;
		
	}
#line 5042 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1500 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_view_algorithm_t) = new OptViewAlgorithm();
		(yyval.opt_view_algorithm_t)->case_idx_ = CASE1;
		
	}
#line 5052 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1505 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_view_algorithm_t) = new OptViewAlgorithm();
		(yyval.opt_view_algorithm_t)->case_idx_ = CASE2;
		
	}
#line 5062 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1510 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_view_algorithm_t) = new OptViewAlgorithm();
		(yyval.opt_view_algorithm_t)->case_idx_ = CASE3;
		
	}
#line 5072 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1518 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_sql_security_t) = new OptSqlSecurity();
		(yyval.opt_sql_security_t)->case_idx_ = CASE0;
		
	}
#line 5082 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1523 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_sql_security_t) = new OptSqlSecurity();
		(yyval.opt_sql_security_t)->case_idx_ = CASE1;
		
	}
#line 5092 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1528 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_sql_security_t) = new OptSqlSecurity();
		(yyval.opt_sql_security_t)->case_idx_ = CASE2;
		
	}
#line 5102 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1536 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_index_option_t) = new OptIndexOption();
		(yyval.opt_index_option_t)->case_idx_ = CASE0;
		
	}
#line 5112 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1541 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_index_option_t) = new OptIndexOption();
		(yyval.opt_index_option_t)->case_idx_ = CASE1;
		
	}
#line 5122 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1546 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_index_option_t) = new OptIndexOption();
		(yyval.opt_index_option_t)->case_idx_ = CASE2;
		
	}
#line 5132 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1554 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_extra_option_t) = new OptExtraOption();
		(yyval.opt_extra_option_t)->case_idx_ = CASE0;
		(yyval.opt_extra_option_t)->index_algorithm_option_ = (yyvsp[0].index_algorithm_option_t);
		
	}
#line 5143 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1560 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_extra_option_t) = new OptExtraOption();
		(yyval.opt_extra_option_t)->case_idx_ = CASE1;
		(yyval.opt_extra_option_t)->lock_option_ = (yyvsp[0].lock_option_t);
		
	}
#line 5154 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1566 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_extra_option_t) = new OptExtraOption();
		(yyval.opt_extra_option_t)->case_idx_ = CASE2;
		
	}
#line 5164 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1574 "bison.y" /* yacc.c:1646  */
    {
		(yyval.index_algorithm_option_t) = new IndexAlgorithmOption();
		(yyval.index_algorithm_option_t)->case_idx_ = CASE0;
		(yyval.index_algorithm_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 5175 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1580 "bison.y" /* yacc.c:1646  */
    {
		(yyval.index_algorithm_option_t) = new IndexAlgorithmOption();
		(yyval.index_algorithm_option_t)->case_idx_ = CASE1;
		(yyval.index_algorithm_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 5186 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1586 "bison.y" /* yacc.c:1646  */
    {
		(yyval.index_algorithm_option_t) = new IndexAlgorithmOption();
		(yyval.index_algorithm_option_t)->case_idx_ = CASE2;
		(yyval.index_algorithm_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 5197 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1595 "bison.y" /* yacc.c:1646  */
    {
		(yyval.lock_option_t) = new LockOption();
		(yyval.lock_option_t)->case_idx_ = CASE0;
		(yyval.lock_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 5208 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1601 "bison.y" /* yacc.c:1646  */
    {
		(yyval.lock_option_t) = new LockOption();
		(yyval.lock_option_t)->case_idx_ = CASE1;
		(yyval.lock_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 5219 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1607 "bison.y" /* yacc.c:1646  */
    {
		(yyval.lock_option_t) = new LockOption();
		(yyval.lock_option_t)->case_idx_ = CASE2;
		(yyval.lock_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 5230 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1613 "bison.y" /* yacc.c:1646  */
    {
		(yyval.lock_option_t) = new LockOption();
		(yyval.lock_option_t)->case_idx_ = CASE3;
		(yyval.lock_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 5241 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1622 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_op_equal_t) = new OptOpEqual();
		(yyval.opt_op_equal_t)->case_idx_ = CASE0;
		
	}
#line 5251 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1627 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_op_equal_t) = new OptOpEqual();
		(yyval.opt_op_equal_t)->case_idx_ = CASE1;
		
	}
#line 5261 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1635 "bison.y" /* yacc.c:1646  */
    {
		(yyval.trigger_events_t) = new TriggerEvents();
		(yyval.trigger_events_t)->case_idx_ = CASE0;
		
	}
#line 5271 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1640 "bison.y" /* yacc.c:1646  */
    {
		(yyval.trigger_events_t) = new TriggerEvents();
		(yyval.trigger_events_t)->case_idx_ = CASE1;
		
	}
#line 5281 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1645 "bison.y" /* yacc.c:1646  */
    {
		(yyval.trigger_events_t) = new TriggerEvents();
		(yyval.trigger_events_t)->case_idx_ = CASE2;
		
	}
#line 5291 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1653 "bison.y" /* yacc.c:1646  */
    {
		(yyval.trigger_name_t) = new TriggerName();
		(yyval.trigger_name_t)->case_idx_ = CASE0;
		(yyval.trigger_name_t)->identifier_ = (yyvsp[0].identifier_t);
		
	}
#line 5302 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1662 "bison.y" /* yacc.c:1646  */
    {
		(yyval.trigger_action_time_t) = new TriggerActionTime();
		(yyval.trigger_action_time_t)->case_idx_ = CASE0;
		
	}
#line 5312 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1667 "bison.y" /* yacc.c:1646  */
    {
		(yyval.trigger_action_time_t) = new TriggerActionTime();
		(yyval.trigger_action_time_t)->case_idx_ = CASE1;
		
	}
#line 5322 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1675 "bison.y" /* yacc.c:1646  */
    {
		(yyval.drop_index_stmt_t) = new DropIndexStmt();
		(yyval.drop_index_stmt_t)->case_idx_ = CASE0;
		(yyval.drop_index_stmt_t)->table_name_ = (yyvsp[-1].table_name_t);
		(yyval.drop_index_stmt_t)->opt_extra_option_ = (yyvsp[0].opt_extra_option_t);
	}
#line 5333 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1684 "bison.y" /* yacc.c:1646  */
    {
		(yyval.drop_table_stmt_t) = new DropTableStmt();
		(yyval.drop_table_stmt_t)->case_idx_ = CASE0;
		(yyval.drop_table_stmt_t)->opt_temp_ = (yyvsp[-4].opt_temp_t);
		(yyval.drop_table_stmt_t)->opt_if_exist_ = (yyvsp[-2].opt_if_exist_t);
		(yyval.drop_table_stmt_t)->table_name_ = (yyvsp[-1].table_name_t);
		(yyval.drop_table_stmt_t)->opt_restrict_or_cascade_ = (yyvsp[0].opt_restrict_or_cascade_t);
	}
#line 5346 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1695 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_restrict_or_cascade_t) = new OptRestrictOrCascade();
		(yyval.opt_restrict_or_cascade_t)->case_idx_ = CASE0;
		
	}
#line 5356 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1700 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_restrict_or_cascade_t) = new OptRestrictOrCascade();
		(yyval.opt_restrict_or_cascade_t)->case_idx_ = CASE1;
		
	}
#line 5366 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1705 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_restrict_or_cascade_t) = new OptRestrictOrCascade();
		(yyval.opt_restrict_or_cascade_t)->case_idx_ = CASE2;
		
	}
#line 5376 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1713 "bison.y" /* yacc.c:1646  */
    {
		(yyval.drop_trigger_stmt_t) = new DropTriggerStmt();
		(yyval.drop_trigger_stmt_t)->case_idx_ = CASE0;
		(yyval.drop_trigger_stmt_t)->opt_if_exist_ = (yyvsp[-1].opt_if_exist_t);
		(yyval.drop_trigger_stmt_t)->trigger_name_ = (yyvsp[0].trigger_name_t);
	}
#line 5387 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1722 "bison.y" /* yacc.c:1646  */
    {
		(yyval.drop_view_stmt_t) = new DropViewStmt();
		(yyval.drop_view_stmt_t)->case_idx_ = CASE0;
		(yyval.drop_view_stmt_t)->opt_if_exist_ = (yyvsp[-2].opt_if_exist_t);
		(yyval.drop_view_stmt_t)->view_name_ = (yyvsp[-1].view_name_t);
		(yyval.drop_view_stmt_t)->opt_restrict_or_cascade_ = (yyvsp[0].opt_restrict_or_cascade_t);
	}
#line 5399 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1732 "bison.y" /* yacc.c:1646  */
    {
		(yyval.insert_stmt_t) = new InsertStmt();
		(yyval.insert_stmt_t)->case_idx_ = CASE0;
		(yyval.insert_stmt_t)->opt_with_clause_ = (yyvsp[-6].opt_with_clause_t);
		(yyval.insert_stmt_t)->table_name_ = (yyvsp[-3].table_name_t);
		(yyval.insert_stmt_t)->opt_as_alias_ = (yyvsp[-2].opt_as_alias_t);
		(yyval.insert_stmt_t)->insert_rest_ = (yyvsp[-1].insert_rest_t);
		(yyval.insert_stmt_t)->opt_on_conflict_ = (yyvsp[0].opt_on_conflict_t);
		
	}
#line 5414 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1745 "bison.y" /* yacc.c:1646  */
    {
		(yyval.insert_rest_t) = new InsertRest();
		(yyval.insert_rest_t)->case_idx_ = CASE0;
		(yyval.insert_rest_t)->opt_column_name_list_p_ = (yyvsp[-1].opt_column_name_list_p_t);
		(yyval.insert_rest_t)->select_no_parens_ = (yyvsp[0].select_no_parens_t);
		
	}
#line 5426 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1752 "bison.y" /* yacc.c:1646  */
    {
		(yyval.insert_rest_t) = new InsertRest();
		(yyval.insert_rest_t)->case_idx_ = CASE1;
		(yyval.insert_rest_t)->opt_column_name_list_p_ = (yyvsp[-2].opt_column_name_list_p_t);
		
	}
#line 5437 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1758 "bison.y" /* yacc.c:1646  */
    {
		(yyval.insert_rest_t) = new InsertRest();
		(yyval.insert_rest_t)->case_idx_ = CASE2;
		(yyval.insert_rest_t)->opt_column_name_list_p_ = (yyvsp[-2].opt_column_name_list_p_t);
		(yyval.insert_rest_t)->super_values_list_ = (yyvsp[0].super_values_list_t);
		
	}
#line 5449 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1768 "bison.y" /* yacc.c:1646  */
    {
		(yyval.super_values_list_t) = new SuperValuesList();
		(yyval.super_values_list_t)->case_idx_ = CASE0;
		(yyval.super_values_list_t)->values_list_ = (yyvsp[0].values_list_t);
		
	}
#line 5460 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1774 "bison.y" /* yacc.c:1646  */
    {
		(yyval.super_values_list_t) = new SuperValuesList();
		(yyval.super_values_list_t)->case_idx_ = CASE1;
		(yyval.super_values_list_t)->values_list_ = (yyvsp[-2].values_list_t);
		(yyval.super_values_list_t)->super_values_list_ = (yyvsp[0].super_values_list_t);
		
	}
#line 5472 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1784 "bison.y" /* yacc.c:1646  */
    {
		(yyval.values_list_t) = new ValuesList();
		(yyval.values_list_t)->case_idx_ = CASE0;
		(yyval.values_list_t)->expr_list_ = (yyvsp[-1].expr_list_t);
		
	}
#line 5483 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1794 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_on_conflict_t) = new OptOnConflict();
		(yyval.opt_on_conflict_t)->case_idx_ = CASE0;
		(yyval.opt_on_conflict_t)->opt_conflict_expr_ = (yyvsp[-2].opt_conflict_expr_t);
		
	}
#line 5494 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1800 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_on_conflict_t) = new OptOnConflict();
		(yyval.opt_on_conflict_t)->case_idx_ = CASE1;
		(yyval.opt_on_conflict_t)->opt_conflict_expr_ = (yyvsp[-4].opt_conflict_expr_t);
		(yyval.opt_on_conflict_t)->set_clause_list_ = (yyvsp[-1].set_clause_list_t);
		(yyval.opt_on_conflict_t)->where_clause_ = (yyvsp[0].where_clause_t);
		
	}
#line 5507 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1808 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_on_conflict_t) = new OptOnConflict();
		(yyval.opt_on_conflict_t)->case_idx_ = CASE2;
		
	}
#line 5517 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1816 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_conflict_expr_t) = new OptConflictExpr();
		(yyval.opt_conflict_expr_t)->case_idx_ = CASE0;
		(yyval.opt_conflict_expr_t)->indexed_column_list_ = (yyvsp[-2].indexed_column_list_t);
		(yyval.opt_conflict_expr_t)->where_clause_ = (yyvsp[0].where_clause_t);
		
	}
#line 5529 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1823 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_conflict_expr_t) = new OptConflictExpr();
		(yyval.opt_conflict_expr_t)->case_idx_ = CASE1;
		
	}
#line 5539 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1831 "bison.y" /* yacc.c:1646  */
    {
		(yyval.indexed_column_list_t) = new IndexedColumnList();
		(yyval.indexed_column_list_t)->case_idx_ = CASE0;
		(yyval.indexed_column_list_t)->indexed_column_ = (yyvsp[0].indexed_column_t);
		
	}
#line 5550 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1837 "bison.y" /* yacc.c:1646  */
    {
		(yyval.indexed_column_list_t) = new IndexedColumnList();
		(yyval.indexed_column_list_t)->case_idx_ = CASE1;
		(yyval.indexed_column_list_t)->indexed_column_ = (yyvsp[-2].indexed_column_t);
		(yyval.indexed_column_list_t)->indexed_column_list_ = (yyvsp[0].indexed_column_list_t);
		
	}
#line 5562 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1847 "bison.y" /* yacc.c:1646  */
    {
		(yyval.indexed_column_t) = new IndexedColumn();
		(yyval.indexed_column_t)->case_idx_ = CASE0;
		(yyval.indexed_column_t)->expr_ = (yyvsp[-1].expr_t);
		(yyval.indexed_column_t)->opt_order_behavior_ = (yyvsp[0].opt_order_behavior_t);
		
	}
#line 5574 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1857 "bison.y" /* yacc.c:1646  */
    {
		(yyval.update_stmt_t) = new UpdateStmt();
		(yyval.update_stmt_t)->case_idx_ = CASE0;
		(yyval.update_stmt_t)->table_name_ = (yyvsp[-6].table_name_t);
		(yyval.update_stmt_t)->opt_as_alias_ = (yyvsp[-5].opt_as_alias_t);
		(yyval.update_stmt_t)->set_clause_list_ = (yyvsp[-3].set_clause_list_t);
		(yyval.update_stmt_t)->opt_where_clause_ = (yyvsp[-2].opt_where_clause_t);
		(yyval.update_stmt_t)->opt_order_clause_ = (yyvsp[-1].opt_order_clause_t);
		(yyval.update_stmt_t)->opt_limit_row_count_ = (yyvsp[0].opt_limit_row_count_t);
		
	}
#line 5590 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1868 "bison.y" /* yacc.c:1646  */
    {
		(yyval.update_stmt_t) = new UpdateStmt();
		(yyval.update_stmt_t)->case_idx_ = CASE1;
		(yyval.update_stmt_t)->table_name_ = (yyvsp[-6].table_name_t);
		(yyval.update_stmt_t)->opt_as_alias_ = (yyvsp[-5].opt_as_alias_t);
		(yyval.update_stmt_t)->set_clause_list_ = (yyvsp[-3].set_clause_list_t);
		(yyval.update_stmt_t)->opt_where_clause_ = (yyvsp[-2].opt_where_clause_t);
		(yyval.update_stmt_t)->opt_order_clause_ = (yyvsp[-1].opt_order_clause_t);
		(yyval.update_stmt_t)->opt_limit_row_count_ = (yyvsp[0].opt_limit_row_count_t);
		
	}
#line 5606 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1882 "bison.y" /* yacc.c:1646  */
    {
		(yyval.alter_action_t) = new AlterAction();
		(yyval.alter_action_t)->case_idx_ = CASE0;
		(yyval.alter_action_t)->table_name_ = (yyvsp[0].table_name_t);
	}
#line 5616 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1887 "bison.y" /* yacc.c:1646  */
    {
		(yyval.alter_action_t) = new AlterAction();
		(yyval.alter_action_t)->case_idx_ = CASE1;
		(yyval.alter_action_t)->opt_column_ = (yyvsp[-3].opt_column_t);
		(yyval.alter_action_t)->column_name_1_ = (yyvsp[-2].column_name_t);
		(yyval.alter_action_t)->column_name_2_ = (yyvsp[0].column_name_t);

	}
#line 5629 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1895 "bison.y" /* yacc.c:1646  */
    {
		(yyval.alter_action_t) = new AlterAction();
		(yyval.alter_action_t)->case_idx_ = CASE2;
		(yyval.alter_action_t)->opt_column_ = (yyvsp[-1].opt_column_t);
		(yyval.alter_action_t)->column_def_ = (yyvsp[0].column_def_t);
	}
#line 5640 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1901 "bison.y" /* yacc.c:1646  */
    {
		(yyval.alter_action_t) = new AlterAction();
		(yyval.alter_action_t)->case_idx_ = CASE3;
		(yyval.alter_action_t)->opt_column_ = (yyvsp[-1].opt_column_t);
		(yyval.alter_action_t)->column_name_1_ = (yyvsp[0].column_name_t);

	}
#line 5652 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1908 "bison.y" /* yacc.c:1646  */
    {
		(yyval.alter_action_t) = new AlterAction();
		(yyval.alter_action_t)->case_idx_ = CASE4;
		(yyval.alter_action_t)->alter_constant_action_ = (yyvsp[0].alter_constant_action_t);
		
	}
#line 5663 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1917 "bison.y" /* yacc.c:1646  */
    {
		(yyval.alter_constant_action_t) = new AlterConstantAction();
		(yyval.alter_constant_action_t)->case_idx_ = CASE0;
		
	}
#line 5673 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1922 "bison.y" /* yacc.c:1646  */
    {
		(yyval.alter_constant_action_t) = new AlterConstantAction();
		(yyval.alter_constant_action_t)->case_idx_ = CASE1;
		
	}
#line 5683 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1927 "bison.y" /* yacc.c:1646  */
    {
		(yyval.alter_constant_action_t) = new AlterConstantAction();
		(yyval.alter_constant_action_t)->case_idx_ = CASE2;
		
	}
#line 5693 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1932 "bison.y" /* yacc.c:1646  */
    {
		(yyval.alter_constant_action_t) = new AlterConstantAction();
		(yyval.alter_constant_action_t)->case_idx_ = CASE3;
		
	}
#line 5703 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1937 "bison.y" /* yacc.c:1646  */
    {
		(yyval.alter_constant_action_t) = new AlterConstantAction();
		(yyval.alter_constant_action_t)->case_idx_ = CASE4;
		(yyval.alter_constant_action_t)->lock_option_ = (yyvsp[0].lock_option_t);
		
	}
#line 5714 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1943 "bison.y" /* yacc.c:1646  */
    {
		(yyval.alter_constant_action_t) = new AlterConstantAction();
		(yyval.alter_constant_action_t)->case_idx_ = CASE5;
		
	}
#line 5724 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1948 "bison.y" /* yacc.c:1646  */
    {
		(yyval.alter_constant_action_t) = new AlterConstantAction();
		(yyval.alter_constant_action_t)->case_idx_ = CASE6;
		
	}
#line 5734 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1956 "bison.y" /* yacc.c:1646  */
    {
		(yyval.column_def_list_t) = new ColumnDefList();
		(yyval.column_def_list_t)->case_idx_ = CASE0;
		(yyval.column_def_list_t)->column_def_ = (yyvsp[0].column_def_t);
		
	}
#line 5745 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1962 "bison.y" /* yacc.c:1646  */
    {
		(yyval.column_def_list_t) = new ColumnDefList();
		(yyval.column_def_list_t)->case_idx_ = CASE1;
		(yyval.column_def_list_t)->column_def_ = (yyvsp[-2].column_def_t);
		(yyval.column_def_list_t)->column_def_list_ = (yyvsp[0].column_def_list_t);
		
	}
#line 5757 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1972 "bison.y" /* yacc.c:1646  */
    {
		(yyval.column_def_t) = new ColumnDef();
		(yyval.column_def_t)->case_idx_ = CASE0;
		(yyval.column_def_t)->identifier_ = (yyvsp[-2].identifier_t);
		(yyval.column_def_t)->type_name_ = (yyvsp[-1].type_name_t);
		(yyval.column_def_t)->opt_column_constraint_list_ = (yyvsp[0].opt_column_constraint_list_t);
	}
#line 5769 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1982 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_column_constraint_list_t) = new OptColumnConstraintList();
		(yyval.opt_column_constraint_list_t)->case_idx_ = CASE0;
		(yyval.opt_column_constraint_list_t)->column_constraint_list_ = (yyvsp[-2].column_constraint_list_t);
		(yyval.opt_column_constraint_list_t)->opt_check_ = (yyvsp[-1].opt_check_t);
		(yyval.opt_column_constraint_list_t)->opt_reference_clause_ = (yyvsp[0].opt_reference_clause_t);
		
	}
#line 5782 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1990 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_column_constraint_list_t) = new OptColumnConstraintList();
		(yyval.opt_column_constraint_list_t)->case_idx_ = CASE1;
		
	}
#line 5792 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1998 "bison.y" /* yacc.c:1646  */
    {
		(yyval.column_constraint_list_t) = new ColumnConstraintList();
		(yyval.column_constraint_list_t)->case_idx_ = CASE0;
		(yyval.column_constraint_list_t)->column_constraint_ = (yyvsp[0].column_constraint_t);
		
	}
#line 5803 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 2004 "bison.y" /* yacc.c:1646  */
    {
		(yyval.column_constraint_list_t) = new ColumnConstraintList();
		(yyval.column_constraint_list_t)->case_idx_ = CASE1;
		(yyval.column_constraint_list_t)->column_constraint_ = (yyvsp[-1].column_constraint_t);
		(yyval.column_constraint_list_t)->column_constraint_list_ = (yyvsp[0].column_constraint_list_t);
		
	}
#line 5815 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 2014 "bison.y" /* yacc.c:1646  */
    {
		(yyval.column_constraint_t) = new ColumnConstraint();
		(yyval.column_constraint_t)->case_idx_ = CASE0;
		(yyval.column_constraint_t)->constraint_type_ = (yyvsp[0].constraint_type_t);
		
	}
#line 5826 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 2030 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_reference_clause_t) = new OptReferenceClause();
		(yyval.opt_reference_clause_t)->case_idx_ = CASE0;
		(yyval.opt_reference_clause_t)->opt_foreign_key_ = (yyvsp[-1].opt_foreign_key_t);
		(yyval.opt_reference_clause_t)->reference_clause_ = (yyvsp[0].reference_clause_t);
		
	}
#line 5838 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 2037 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_reference_clause_t) = new OptReferenceClause();
		(yyval.opt_reference_clause_t)->case_idx_ = CASE1;
		
	}
#line 5848 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 2045 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_check_t) = new OptCheck();
		(yyval.opt_check_t)->case_idx_ = CASE0;
		(yyval.opt_check_t)->expr_ = (yyvsp[-2].expr_t);
		(yyval.opt_check_t)->opt_enforced_ = (yyvsp[0].opt_enforced_t);
		
	}
#line 5860 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 2052 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_check_t) = new OptCheck();
		(yyval.opt_check_t)->case_idx_ = CASE1;
		
	}
#line 5870 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 2060 "bison.y" /* yacc.c:1646  */
    {
		(yyval.constraint_type_t) = new ConstraintType();
		(yyval.constraint_type_t)->case_idx_ = CASE0;
		
	}
#line 5880 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 2065 "bison.y" /* yacc.c:1646  */
    {
		(yyval.constraint_type_t) = new ConstraintType();
		(yyval.constraint_type_t)->case_idx_ = CASE1;
		
	}
#line 5890 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 2070 "bison.y" /* yacc.c:1646  */
    {
		(yyval.constraint_type_t) = new ConstraintType();
		(yyval.constraint_type_t)->case_idx_ = CASE2;
		
	}
#line 5900 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 2078 "bison.y" /* yacc.c:1646  */
    {
		(yyval.reference_clause_t) = new ReferenceClause();
		(yyval.reference_clause_t)->case_idx_ = CASE0;
		(yyval.reference_clause_t)->table_name_ = (yyvsp[-3].table_name_t);
		(yyval.reference_clause_t)->opt_column_name_list_p_ = (yyvsp[-2].opt_column_name_list_p_t);
		(yyval.reference_clause_t)->opt_foreign_key_actions_ = (yyvsp[-1].opt_foreign_key_actions_t);
		(yyval.reference_clause_t)->opt_constraint_attribute_spec_ = (yyvsp[0].opt_constraint_attribute_spec_t);
	}
#line 5913 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 2089 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_foreign_key_t) = new OptForeignKey();
		(yyval.opt_foreign_key_t)->case_idx_ = CASE0;
		
	}
#line 5923 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 2094 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_foreign_key_t) = new OptForeignKey();
		(yyval.opt_foreign_key_t)->case_idx_ = CASE1;
		
	}
#line 5933 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 2102 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_foreign_key_actions_t) = new OptForeignKeyActions();
		(yyval.opt_foreign_key_actions_t)->case_idx_ = CASE0;
		(yyval.opt_foreign_key_actions_t)->foreign_key_actions_ = (yyvsp[0].foreign_key_actions_t);
		
	}
#line 5944 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 2108 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_foreign_key_actions_t) = new OptForeignKeyActions();
		(yyval.opt_foreign_key_actions_t)->case_idx_ = CASE1;
		
	}
#line 5954 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 2116 "bison.y" /* yacc.c:1646  */
    {
		(yyval.foreign_key_actions_t) = new ForeignKeyActions();
		(yyval.foreign_key_actions_t)->case_idx_ = CASE0;
		
	}
#line 5964 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 2121 "bison.y" /* yacc.c:1646  */
    {
		(yyval.foreign_key_actions_t) = new ForeignKeyActions();
		(yyval.foreign_key_actions_t)->case_idx_ = CASE1;
		
	}
#line 5974 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 2126 "bison.y" /* yacc.c:1646  */
    {
		(yyval.foreign_key_actions_t) = new ForeignKeyActions();
		(yyval.foreign_key_actions_t)->case_idx_ = CASE2;
		
	}
#line 5984 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 2131 "bison.y" /* yacc.c:1646  */
    {
		(yyval.foreign_key_actions_t) = new ForeignKeyActions();
		(yyval.foreign_key_actions_t)->case_idx_ = CASE3;
		(yyval.foreign_key_actions_t)->key_actions_ = (yyvsp[0].key_actions_t);
		
	}
#line 5995 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 2137 "bison.y" /* yacc.c:1646  */
    {
		(yyval.foreign_key_actions_t) = new ForeignKeyActions();
		(yyval.foreign_key_actions_t)->case_idx_ = CASE4;
		(yyval.foreign_key_actions_t)->key_actions_ = (yyvsp[0].key_actions_t);
		
	}
#line 6006 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 2146 "bison.y" /* yacc.c:1646  */
    {
		(yyval.key_actions_t) = new KeyActions();
		(yyval.key_actions_t)->case_idx_ = CASE0;
		
	}
#line 6016 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 2151 "bison.y" /* yacc.c:1646  */
    {
		(yyval.key_actions_t) = new KeyActions();
		(yyval.key_actions_t)->case_idx_ = CASE1;
		
	}
#line 6026 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 2156 "bison.y" /* yacc.c:1646  */
    {
		(yyval.key_actions_t) = new KeyActions();
		(yyval.key_actions_t)->case_idx_ = CASE2;
		
	}
#line 6036 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 2161 "bison.y" /* yacc.c:1646  */
    {
		(yyval.key_actions_t) = new KeyActions();
		(yyval.key_actions_t)->case_idx_ = CASE3;
		
	}
#line 6046 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 2166 "bison.y" /* yacc.c:1646  */
    {
		(yyval.key_actions_t) = new KeyActions();
		(yyval.key_actions_t)->case_idx_ = CASE4;
		
	}
#line 6056 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 2174 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_constraint_attribute_spec_t) = new OptConstraintAttributeSpec();
		(yyval.opt_constraint_attribute_spec_t)->case_idx_ = CASE0;
		(yyval.opt_constraint_attribute_spec_t)->opt_initial_time_ = (yyvsp[0].opt_initial_time_t);
		
	}
#line 6067 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 2180 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_constraint_attribute_spec_t) = new OptConstraintAttributeSpec();
		(yyval.opt_constraint_attribute_spec_t)->case_idx_ = CASE1;
		(yyval.opt_constraint_attribute_spec_t)->opt_initial_time_ = (yyvsp[0].opt_initial_time_t);
		
	}
#line 6078 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 2186 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_constraint_attribute_spec_t) = new OptConstraintAttributeSpec();
		(yyval.opt_constraint_attribute_spec_t)->case_idx_ = CASE2;
		
	}
#line 6088 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 2194 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_initial_time_t) = new OptInitialTime();
		(yyval.opt_initial_time_t)->case_idx_ = CASE0;
		
	}
#line 6098 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 2199 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_initial_time_t) = new OptInitialTime();
		(yyval.opt_initial_time_t)->case_idx_ = CASE1;
		
	}
#line 6108 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 2204 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_initial_time_t) = new OptInitialTime();
		(yyval.opt_initial_time_t)->case_idx_ = CASE2;
		
	}
#line 6118 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 2214 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_constraint_name_t) = new OptConstraintName();
		(yyval.opt_constraint_name_t)->case_idx_ = CASE0;
		(yyval.opt_constraint_name_t)->name_ = (yyvsp[0].name_t);
		
	}
#line 6129 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 2220 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_constraint_name_t) = new OptConstraintName();
		(yyval.opt_constraint_name_t)->case_idx_ = CASE1;
		
	}
#line 6139 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 2228 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_temp_t) = new OptTemp();
		(yyval.opt_temp_t)->case_idx_ = CASE0;
		
	}
#line 6149 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 2233 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_temp_t) = new OptTemp();
		(yyval.opt_temp_t)->case_idx_ = CASE1;
		
	}
#line 6159 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 2241 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_check_option_t) = new OptCheckOption();
		(yyval.opt_check_option_t)->case_idx_ = CASE0;
		
	}
#line 6169 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 2246 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_check_option_t) = new OptCheckOption();
		(yyval.opt_check_option_t)->case_idx_ = CASE1;
		
	}
#line 6179 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 2251 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_check_option_t) = new OptCheckOption();
		(yyval.opt_check_option_t)->case_idx_ = CASE2;
		
	}
#line 6189 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 2256 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_check_option_t) = new OptCheckOption();
		(yyval.opt_check_option_t)->case_idx_ = CASE3;
		
	}
#line 6199 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 2264 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_column_name_list_p_t) = new OptColumnNameListP();
		(yyval.opt_column_name_list_p_t)->case_idx_ = CASE0;
		(yyval.opt_column_name_list_p_t)->column_name_list_ = (yyvsp[-1].column_name_list_t);
		
	}
#line 6210 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 2270 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_column_name_list_p_t) = new OptColumnNameListP();
		(yyval.opt_column_name_list_p_t)->case_idx_ = CASE1;
		
	}
#line 6220 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 2278 "bison.y" /* yacc.c:1646  */
    {
		(yyval.set_clause_list_t) = new SetClauseList();
		(yyval.set_clause_list_t)->case_idx_ = CASE0;
		(yyval.set_clause_list_t)->set_clause_ = (yyvsp[0].set_clause_t);
		
	}
#line 6231 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 2284 "bison.y" /* yacc.c:1646  */
    {
		(yyval.set_clause_list_t) = new SetClauseList();
		(yyval.set_clause_list_t)->case_idx_ = CASE1;
		(yyval.set_clause_list_t)->set_clause_ = (yyvsp[-2].set_clause_t);
		(yyval.set_clause_list_t)->set_clause_list_ = (yyvsp[0].set_clause_list_t);
		
	}
#line 6243 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 2294 "bison.y" /* yacc.c:1646  */
    {
		(yyval.set_clause_t) = new SetClause();
		(yyval.set_clause_t)->case_idx_ = CASE0;
		(yyval.set_clause_t)->column_name_ = (yyvsp[-2].column_name_t);
		(yyval.set_clause_t)->expr_ = (yyvsp[0].expr_t);
		
	}
#line 6255 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 2301 "bison.y" /* yacc.c:1646  */
    {
		(yyval.set_clause_t) = new SetClause();
		(yyval.set_clause_t)->case_idx_ = CASE1;
		(yyval.set_clause_t)->column_name_list_ = (yyvsp[-3].column_name_list_t);
		(yyval.set_clause_t)->expr_ = (yyvsp[0].expr_t);
		
	}
#line 6267 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 2311 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_as_alias_t) = new OptAsAlias();
		(yyval.opt_as_alias_t)->case_idx_ = CASE0;
		(yyval.opt_as_alias_t)->as_alias_ = (yyvsp[0].as_alias_t);
		
	}
#line 6278 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 2317 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_as_alias_t) = new OptAsAlias();
		(yyval.opt_as_alias_t)->case_idx_ = CASE1;
		
	}
#line 6288 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 2325 "bison.y" /* yacc.c:1646  */
    {
		(yyval.expr_t) = new Expr();
		(yyval.expr_t)->case_idx_ = CASE0;
		(yyval.expr_t)->operand_ = (yyvsp[0].operand_t);
		
	}
#line 6299 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 2331 "bison.y" /* yacc.c:1646  */
    {
		(yyval.expr_t) = new Expr();
		(yyval.expr_t)->case_idx_ = CASE1;
		(yyval.expr_t)->between_expr_ = (yyvsp[0].between_expr_t);
		
	}
#line 6310 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 2337 "bison.y" /* yacc.c:1646  */
    {
		(yyval.expr_t) = new Expr();
		(yyval.expr_t)->case_idx_ = CASE2;
		(yyval.expr_t)->exists_expr_ = (yyvsp[0].exists_expr_t);
		
	}
#line 6321 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 2343 "bison.y" /* yacc.c:1646  */
    {
		(yyval.expr_t) = new Expr();
		(yyval.expr_t)->case_idx_ = CASE3;
		(yyval.expr_t)->in_expr_ = (yyvsp[0].in_expr_t);
		
	}
#line 6332 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 2349 "bison.y" /* yacc.c:1646  */
    {
		(yyval.expr_t) = new Expr();
		(yyval.expr_t)->case_idx_ = CASE4;
		(yyval.expr_t)->cast_expr_ = (yyvsp[0].cast_expr_t);
		
	}
#line 6343 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 2355 "bison.y" /* yacc.c:1646  */
    {
		(yyval.expr_t) = new Expr();
		(yyval.expr_t)->case_idx_ = CASE5;
		(yyval.expr_t)->logic_expr_ = (yyvsp[0].logic_expr_t);
		
	}
#line 6354 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 2364 "bison.y" /* yacc.c:1646  */
    {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE0;
		(yyval.operand_t)->expr_list_ = (yyvsp[-1].expr_list_t);
		
	}
#line 6365 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 2370 "bison.y" /* yacc.c:1646  */
    {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE1;
		(yyval.operand_t)->array_index_ = (yyvsp[0].array_index_t);
		
	}
#line 6376 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 2376 "bison.y" /* yacc.c:1646  */
    {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE2;
		(yyval.operand_t)->scalar_expr_ = (yyvsp[0].scalar_expr_t);
		
	}
#line 6387 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 2382 "bison.y" /* yacc.c:1646  */
    {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE3;
		(yyval.operand_t)->unary_expr_ = (yyvsp[0].unary_expr_t);
		
	}
#line 6398 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 2388 "bison.y" /* yacc.c:1646  */
    {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE4;
		(yyval.operand_t)->binary_expr_ = (yyvsp[0].binary_expr_t);
		
	}
#line 6409 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 2394 "bison.y" /* yacc.c:1646  */
    {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE5;
		(yyval.operand_t)->case_expr_ = (yyvsp[0].case_expr_t);
		
	}
#line 6420 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 2400 "bison.y" /* yacc.c:1646  */
    {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE6;
		(yyval.operand_t)->extract_expr_ = (yyvsp[0].extract_expr_t);
		
	}
#line 6431 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 2406 "bison.y" /* yacc.c:1646  */
    {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE7;
		(yyval.operand_t)->array_expr_ = (yyvsp[0].array_expr_t);
		
	}
#line 6442 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 2412 "bison.y" /* yacc.c:1646  */
    {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE8;
		(yyval.operand_t)->function_expr_ = (yyvsp[0].function_expr_t);
		
	}
#line 6453 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 2418 "bison.y" /* yacc.c:1646  */
    {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE9;
		(yyval.operand_t)->select_no_parens_ = (yyvsp[-1].select_no_parens_t);
		
	}
#line 6464 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 2427 "bison.y" /* yacc.c:1646  */
    {
		(yyval.cast_expr_t) = new CastExpr();
		(yyval.cast_expr_t)->case_idx_ = CASE0;
		(yyval.cast_expr_t)->expr_ = (yyvsp[-3].expr_t);
		(yyval.cast_expr_t)->type_name_ = (yyvsp[-1].type_name_t);
		
	}
#line 6476 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 2437 "bison.y" /* yacc.c:1646  */
    {
		(yyval.scalar_expr_t) = new ScalarExpr();
		(yyval.scalar_expr_t)->case_idx_ = CASE0;
		(yyval.scalar_expr_t)->column_name_ = (yyvsp[0].column_name_t);
		
	}
#line 6487 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 2443 "bison.y" /* yacc.c:1646  */
    {
		(yyval.scalar_expr_t) = new ScalarExpr();
		(yyval.scalar_expr_t)->case_idx_ = CASE1;
		(yyval.scalar_expr_t)->literal_ = (yyvsp[0].literal_t);
		
	}
#line 6498 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 2452 "bison.y" /* yacc.c:1646  */
    {
		(yyval.unary_expr_t) = new UnaryExpr();
		(yyval.unary_expr_t)->case_idx_ = CASE0;
		(yyval.unary_expr_t)->operand_ = (yyvsp[0].operand_t);
		
	}
#line 6509 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 2458 "bison.y" /* yacc.c:1646  */
    {
		(yyval.unary_expr_t) = new UnaryExpr();
		(yyval.unary_expr_t)->case_idx_ = CASE1;
		(yyval.unary_expr_t)->operand_ = (yyvsp[0].operand_t);
		
	}
#line 6520 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 2464 "bison.y" /* yacc.c:1646  */
    {
		(yyval.unary_expr_t) = new UnaryExpr();
		(yyval.unary_expr_t)->case_idx_ = CASE2;
		(yyval.unary_expr_t)->operand_ = (yyvsp[-1].operand_t);
		
	}
#line 6531 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 2470 "bison.y" /* yacc.c:1646  */
    {
		(yyval.unary_expr_t) = new UnaryExpr();
		(yyval.unary_expr_t)->case_idx_ = CASE3;
		(yyval.unary_expr_t)->operand_ = (yyvsp[-2].operand_t);
		
	}
#line 6542 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 2476 "bison.y" /* yacc.c:1646  */
    {
		(yyval.unary_expr_t) = new UnaryExpr();
		(yyval.unary_expr_t)->case_idx_ = CASE4;
		(yyval.unary_expr_t)->operand_ = (yyvsp[-3].operand_t);
		
	}
#line 6553 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 2482 "bison.y" /* yacc.c:1646  */
    {
		(yyval.unary_expr_t) = new UnaryExpr();
		(yyval.unary_expr_t)->case_idx_ = CASE5;
		
	}
#line 6563 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 2494 "bison.y" /* yacc.c:1646  */
    {
		(yyval.binary_expr_t) = new BinaryExpr();
		(yyval.binary_expr_t)->case_idx_ = CASE0;
		(yyval.binary_expr_t)->comp_expr_ = (yyvsp[0].comp_expr_t);
		
	}
#line 6574 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 2500 "bison.y" /* yacc.c:1646  */
    {
		(yyval.binary_expr_t) = new BinaryExpr();
		(yyval.binary_expr_t)->case_idx_ = CASE1;
		(yyval.binary_expr_t)->operand_1_ = (yyvsp[-2].operand_t);
		(yyval.binary_expr_t)->binary_op_ = (yyvsp[-1].binary_op_t);
		(yyval.binary_expr_t)->operand_2_ = (yyvsp[0].operand_t);
		
	}
#line 6587 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 2508 "bison.y" /* yacc.c:1646  */
    {
		(yyval.binary_expr_t) = new BinaryExpr();
		(yyval.binary_expr_t)->case_idx_ = CASE2;
		(yyval.binary_expr_t)->operand_1_ = (yyvsp[-2].operand_t);
		(yyval.binary_expr_t)->operand_2_ = (yyvsp[0].operand_t);
		
	}
#line 6599 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 2515 "bison.y" /* yacc.c:1646  */
    {
		(yyval.binary_expr_t) = new BinaryExpr();
		(yyval.binary_expr_t)->case_idx_ = CASE3;
		(yyval.binary_expr_t)->operand_1_ = (yyvsp[-3].operand_t);
		(yyval.binary_expr_t)->operand_2_ = (yyvsp[0].operand_t);
		
	}
#line 6611 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 2525 "bison.y" /* yacc.c:1646  */
    {
		(yyval.logic_expr_t) = new LogicExpr();
		(yyval.logic_expr_t)->case_idx_ = CASE0;
		(yyval.logic_expr_t)->expr_1_ = (yyvsp[-2].expr_t);
		(yyval.logic_expr_t)->expr_2_ = (yyvsp[0].expr_t);
		
	}
#line 6623 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 2532 "bison.y" /* yacc.c:1646  */
    {
		(yyval.logic_expr_t) = new LogicExpr();
		(yyval.logic_expr_t)->case_idx_ = CASE1;
		(yyval.logic_expr_t)->expr_1_ = (yyvsp[-2].expr_t);
		(yyval.logic_expr_t)->expr_2_ = (yyvsp[0].expr_t);
		
	}
#line 6635 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 2542 "bison.y" /* yacc.c:1646  */
    {
		(yyval.in_expr_t) = new InExpr();
		(yyval.in_expr_t)->case_idx_ = CASE0;
		(yyval.in_expr_t)->operand_ = (yyvsp[-5].operand_t);
		(yyval.in_expr_t)->opt_not_ = (yyvsp[-4].opt_not_t);
		(yyval.in_expr_t)->select_no_parens_ = (yyvsp[-1].select_no_parens_t);
		
	}
#line 6648 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 2550 "bison.y" /* yacc.c:1646  */
    {
		(yyval.in_expr_t) = new InExpr();
		(yyval.in_expr_t)->case_idx_ = CASE1;
		(yyval.in_expr_t)->operand_ = (yyvsp[-5].operand_t);
		(yyval.in_expr_t)->opt_not_ = (yyvsp[-4].opt_not_t);
		(yyval.in_expr_t)->expr_list_ = (yyvsp[-1].expr_list_t);
		
	}
#line 6661 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 2558 "bison.y" /* yacc.c:1646  */
    {
		(yyval.in_expr_t) = new InExpr();
		(yyval.in_expr_t)->case_idx_ = CASE2;
		(yyval.in_expr_t)->operand_ = (yyvsp[-3].operand_t);
		(yyval.in_expr_t)->opt_not_ = (yyvsp[-2].opt_not_t);
		(yyval.in_expr_t)->table_name_ = (yyvsp[0].table_name_t);
		
	}
#line 6674 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 2569 "bison.y" /* yacc.c:1646  */
    {
		(yyval.case_expr_t) = new CaseExpr();
		(yyval.case_expr_t)->case_idx_ = CASE0;
		(yyval.case_expr_t)->expr_1_ = (yyvsp[-2].expr_t);
		(yyval.case_expr_t)->case_list_ = (yyvsp[-1].case_list_t);
		
	}
#line 6686 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 2576 "bison.y" /* yacc.c:1646  */
    {
		(yyval.case_expr_t) = new CaseExpr();
		(yyval.case_expr_t)->case_idx_ = CASE1;
		(yyval.case_expr_t)->case_list_ = (yyvsp[-1].case_list_t);
		
	}
#line 6697 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 2582 "bison.y" /* yacc.c:1646  */
    {
		(yyval.case_expr_t) = new CaseExpr();
		(yyval.case_expr_t)->case_idx_ = CASE2;
		(yyval.case_expr_t)->expr_1_ = (yyvsp[-4].expr_t);
		(yyval.case_expr_t)->case_list_ = (yyvsp[-3].case_list_t);
		(yyval.case_expr_t)->expr_2_ = (yyvsp[-1].expr_t);
		
	}
#line 6710 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 2590 "bison.y" /* yacc.c:1646  */
    {
		(yyval.case_expr_t) = new CaseExpr();
		(yyval.case_expr_t)->case_idx_ = CASE3;
		(yyval.case_expr_t)->case_list_ = (yyvsp[-3].case_list_t);
		(yyval.case_expr_t)->expr_1_ = (yyvsp[-1].expr_t);
		
	}
#line 6722 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 2600 "bison.y" /* yacc.c:1646  */
    {
		(yyval.between_expr_t) = new BetweenExpr();
		(yyval.between_expr_t)->case_idx_ = CASE0;
		(yyval.between_expr_t)->operand_1_ = (yyvsp[-4].operand_t);
		(yyval.between_expr_t)->operand_2_ = (yyvsp[-2].operand_t);
		(yyval.between_expr_t)->operand_3_ = (yyvsp[0].operand_t);
		
	}
#line 6735 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 2608 "bison.y" /* yacc.c:1646  */
    {
		(yyval.between_expr_t) = new BetweenExpr();
		(yyval.between_expr_t)->case_idx_ = CASE1;
		(yyval.between_expr_t)->operand_1_ = (yyvsp[-5].operand_t);
		(yyval.between_expr_t)->operand_2_ = (yyvsp[-2].operand_t);
		(yyval.between_expr_t)->operand_3_ = (yyvsp[0].operand_t);
		
	}
#line 6748 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 2619 "bison.y" /* yacc.c:1646  */
    {
		(yyval.exists_expr_t) = new ExistsExpr();
		(yyval.exists_expr_t)->case_idx_ = CASE0;
		(yyval.exists_expr_t)->opt_not_ = (yyvsp[-4].opt_not_t);
		(yyval.exists_expr_t)->select_no_parens_ = (yyvsp[-1].select_no_parens_t);
		
	}
#line 6760 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 2629 "bison.y" /* yacc.c:1646  */
    {
		(yyval.function_expr_t) = new FunctionExpr();
		(yyval.function_expr_t)->case_idx_ = CASE0;
		(yyval.function_expr_t)->function_name_ = (yyvsp[-4].function_name_t);
		(yyval.function_expr_t)->opt_filter_clause_ = (yyvsp[-1].opt_filter_clause_t);
		(yyval.function_expr_t)->opt_over_clause_ = (yyvsp[0].opt_over_clause_t);
		
	}
#line 6773 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 2637 "bison.y" /* yacc.c:1646  */
    {
		(yyval.function_expr_t) = new FunctionExpr();
		(yyval.function_expr_t)->case_idx_ = CASE1;
		(yyval.function_expr_t)->function_name_ = (yyvsp[-6].function_name_t);
		(yyval.function_expr_t)->opt_distinct_ = (yyvsp[-4].opt_distinct_t);
		(yyval.function_expr_t)->expr_list_ = (yyvsp[-3].expr_list_t);
		(yyval.function_expr_t)->opt_filter_clause_ = (yyvsp[-1].opt_filter_clause_t);
		(yyval.function_expr_t)->opt_over_clause_ = (yyvsp[0].opt_over_clause_t);
		
	}
#line 6788 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 2650 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_distinct_t) = new OptDistinct();
		(yyval.opt_distinct_t)->case_idx_ = CASE0;
		
	}
#line 6798 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 2655 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_distinct_t) = new OptDistinct();
		(yyval.opt_distinct_t)->case_idx_ = CASE1;
		
	}
#line 6808 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 2663 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_filter_clause_t) = new OptFilterClause();
		(yyval.opt_filter_clause_t)->case_idx_ = CASE0;
		(yyval.opt_filter_clause_t)->expr_ = (yyvsp[-1].expr_t);
		
	}
#line 6819 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 2669 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_filter_clause_t) = new OptFilterClause();
		(yyval.opt_filter_clause_t)->case_idx_ = CASE1;
		
	}
#line 6829 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 2677 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_over_clause_t) = new OptOverClause();
		(yyval.opt_over_clause_t)->case_idx_ = CASE0;
		(yyval.opt_over_clause_t)->window_ = (yyvsp[-1].window_t);
		
	}
#line 6840 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 2683 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_over_clause_t) = new OptOverClause();
		(yyval.opt_over_clause_t)->case_idx_ = CASE1;
		(yyval.opt_over_clause_t)->window_name_ = (yyvsp[0].window_name_t);
		
	}
#line 6851 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 2689 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_over_clause_t) = new OptOverClause();
		(yyval.opt_over_clause_t)->case_idx_ = CASE2;
		
	}
#line 6861 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 2697 "bison.y" /* yacc.c:1646  */
    {
		(yyval.case_list_t) = new CaseList();
		(yyval.case_list_t)->case_idx_ = CASE0;
		(yyval.case_list_t)->case_clause_ = (yyvsp[0].case_clause_t);
		
	}
#line 6872 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 2703 "bison.y" /* yacc.c:1646  */
    {
		(yyval.case_list_t) = new CaseList();
		(yyval.case_list_t)->case_idx_ = CASE1;
		(yyval.case_list_t)->case_clause_ = (yyvsp[-1].case_clause_t);
		(yyval.case_list_t)->case_list_ = (yyvsp[0].case_list_t);
		
	}
#line 6884 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 2713 "bison.y" /* yacc.c:1646  */
    {
		(yyval.case_clause_t) = new CaseClause();
		(yyval.case_clause_t)->case_idx_ = CASE0;
		(yyval.case_clause_t)->expr_1_ = (yyvsp[-2].expr_t);
		(yyval.case_clause_t)->expr_2_ = (yyvsp[0].expr_t);
		
	}
#line 6896 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 2723 "bison.y" /* yacc.c:1646  */
    {
		(yyval.comp_expr_t) = new CompExpr();
		(yyval.comp_expr_t)->case_idx_ = CASE0;
		(yyval.comp_expr_t)->operand_1_ = (yyvsp[-2].operand_t);
		(yyval.comp_expr_t)->operand_2_ = (yyvsp[0].operand_t);
		
	}
#line 6908 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 2730 "bison.y" /* yacc.c:1646  */
    {
		(yyval.comp_expr_t) = new CompExpr();
		(yyval.comp_expr_t)->case_idx_ = CASE1;
		(yyval.comp_expr_t)->operand_1_ = (yyvsp[-2].operand_t);
		(yyval.comp_expr_t)->operand_2_ = (yyvsp[0].operand_t);
		
	}
#line 6920 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 2737 "bison.y" /* yacc.c:1646  */
    {
		(yyval.comp_expr_t) = new CompExpr();
		(yyval.comp_expr_t)->case_idx_ = CASE2;
		(yyval.comp_expr_t)->operand_1_ = (yyvsp[-2].operand_t);
		(yyval.comp_expr_t)->operand_2_ = (yyvsp[0].operand_t);
		
	}
#line 6932 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 2744 "bison.y" /* yacc.c:1646  */
    {
		(yyval.comp_expr_t) = new CompExpr();
		(yyval.comp_expr_t)->case_idx_ = CASE3;
		(yyval.comp_expr_t)->operand_1_ = (yyvsp[-2].operand_t);
		(yyval.comp_expr_t)->operand_2_ = (yyvsp[0].operand_t);
		
	}
#line 6944 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 2751 "bison.y" /* yacc.c:1646  */
    {
		(yyval.comp_expr_t) = new CompExpr();
		(yyval.comp_expr_t)->case_idx_ = CASE4;
		(yyval.comp_expr_t)->operand_1_ = (yyvsp[-2].operand_t);
		(yyval.comp_expr_t)->operand_2_ = (yyvsp[0].operand_t);
		
	}
#line 6956 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 2758 "bison.y" /* yacc.c:1646  */
    {
		(yyval.comp_expr_t) = new CompExpr();
		(yyval.comp_expr_t)->case_idx_ = CASE5;
		(yyval.comp_expr_t)->operand_1_ = (yyvsp[-2].operand_t);
		(yyval.comp_expr_t)->operand_2_ = (yyvsp[0].operand_t);
		
	}
#line 6968 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 2768 "bison.y" /* yacc.c:1646  */
    {
		(yyval.extract_expr_t) = new ExtractExpr();
		(yyval.extract_expr_t)->case_idx_ = CASE0;
		(yyval.extract_expr_t)->datetime_field_ = (yyvsp[-3].datetime_field_t);
		(yyval.extract_expr_t)->expr_ = (yyvsp[-1].expr_t);
		
	}
#line 6980 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 2778 "bison.y" /* yacc.c:1646  */
    {
		(yyval.datetime_field_t) = new DatetimeField();
		(yyval.datetime_field_t)->case_idx_ = CASE0;
		
	}
#line 6990 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 2783 "bison.y" /* yacc.c:1646  */
    {
		(yyval.datetime_field_t) = new DatetimeField();
		(yyval.datetime_field_t)->case_idx_ = CASE1;
		
	}
#line 7000 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 2788 "bison.y" /* yacc.c:1646  */
    {
		(yyval.datetime_field_t) = new DatetimeField();
		(yyval.datetime_field_t)->case_idx_ = CASE2;
		
	}
#line 7010 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 2793 "bison.y" /* yacc.c:1646  */
    {
		(yyval.datetime_field_t) = new DatetimeField();
		(yyval.datetime_field_t)->case_idx_ = CASE3;
		
	}
#line 7020 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 2798 "bison.y" /* yacc.c:1646  */
    {
		(yyval.datetime_field_t) = new DatetimeField();
		(yyval.datetime_field_t)->case_idx_ = CASE4;
		
	}
#line 7030 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 2803 "bison.y" /* yacc.c:1646  */
    {
		(yyval.datetime_field_t) = new DatetimeField();
		(yyval.datetime_field_t)->case_idx_ = CASE5;
		
	}
#line 7040 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 2811 "bison.y" /* yacc.c:1646  */
    {
		(yyval.array_expr_t) = new ArrayExpr();
		(yyval.array_expr_t)->case_idx_ = CASE0;
		(yyval.array_expr_t)->expr_list_ = (yyvsp[-1].expr_list_t);
		
	}
#line 7051 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 2820 "bison.y" /* yacc.c:1646  */
    {
		(yyval.array_index_t) = new ArrayIndex();
		(yyval.array_index_t)->case_idx_ = CASE0;
		(yyval.array_index_t)->operand_ = (yyvsp[-3].operand_t);
		(yyval.array_index_t)->int_literal_ = (yyvsp[-1].int_literal_t);
		
	}
#line 7063 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 2830 "bison.y" /* yacc.c:1646  */
    {
		(yyval.literal_t) = new Literal();
		(yyval.literal_t)->case_idx_ = CASE0;
		(yyval.literal_t)->string_literal_ = (yyvsp[0].string_literal_t);
		
	}
#line 7074 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 2836 "bison.y" /* yacc.c:1646  */
    {
		(yyval.literal_t) = new Literal();
		(yyval.literal_t)->case_idx_ = CASE1;
		(yyval.literal_t)->bool_literal_ = (yyvsp[0].bool_literal_t);
		
	}
#line 7085 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 2842 "bison.y" /* yacc.c:1646  */
    {
		(yyval.literal_t) = new Literal();
		(yyval.literal_t)->case_idx_ = CASE2;
		(yyval.literal_t)->num_literal_ = (yyvsp[0].num_literal_t);
		
	}
#line 7096 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 2851 "bison.y" /* yacc.c:1646  */
    {
		(yyval.string_literal_t) = new StringLiteral();
		(yyval.string_literal_t)->string_val_ = (yyvsp[0].sval);
		free((yyvsp[0].sval));
		
	}
#line 7107 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 2860 "bison.y" /* yacc.c:1646  */
    {
		(yyval.bool_literal_t) = new BoolLiteral();
		(yyval.bool_literal_t)->case_idx_ = CASE0;
		
	}
#line 7117 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 2865 "bison.y" /* yacc.c:1646  */
    {
		(yyval.bool_literal_t) = new BoolLiteral();
		(yyval.bool_literal_t)->case_idx_ = CASE1;
		
	}
#line 7127 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 2873 "bison.y" /* yacc.c:1646  */
    {
		(yyval.num_literal_t) = new NumLiteral();
		(yyval.num_literal_t)->case_idx_ = CASE0;
		(yyval.num_literal_t)->int_literal_ = (yyvsp[0].int_literal_t);
		
	}
#line 7138 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 2879 "bison.y" /* yacc.c:1646  */
    {
		(yyval.num_literal_t) = new NumLiteral();
		(yyval.num_literal_t)->case_idx_ = CASE1;
		(yyval.num_literal_t)->float_literal_ = (yyvsp[0].float_literal_t);
		
	}
#line 7149 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 2888 "bison.y" /* yacc.c:1646  */
    {
		(yyval.int_literal_t) = new IntLiteral();
		(yyval.int_literal_t)->int_val_ = (yyvsp[0].ival);
		
	}
#line 7159 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 2896 "bison.y" /* yacc.c:1646  */
    {
		(yyval.float_literal_t) = new FloatLiteral();
		(yyval.float_literal_t)->float_val_ = (yyvsp[0].fval);
		
	}
#line 7169 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 2904 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_column_t) = new OptColumn();
		(yyval.opt_column_t)->case_idx_ = CASE0;
		
	}
#line 7179 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 2909 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_column_t) = new OptColumn();
		(yyval.opt_column_t)->case_idx_ = CASE1;
		
	}
#line 7189 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 2917 "bison.y" /* yacc.c:1646  */
    {
		(yyval.trigger_body_t) = new TriggerBody();
		(yyval.trigger_body_t)->case_idx_ = CASE0;
		(yyval.trigger_body_t)->drop_stmt_ = (yyvsp[0].drop_stmt_t);
		
	}
#line 7200 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 2923 "bison.y" /* yacc.c:1646  */
    {
		(yyval.trigger_body_t) = new TriggerBody();
		(yyval.trigger_body_t)->case_idx_ = CASE1;
		(yyval.trigger_body_t)->update_stmt_ = (yyvsp[0].update_stmt_t);
		
	}
#line 7211 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 2929 "bison.y" /* yacc.c:1646  */
    {
		(yyval.trigger_body_t) = new TriggerBody();
		(yyval.trigger_body_t)->case_idx_ = CASE2;
		(yyval.trigger_body_t)->insert_stmt_ = (yyvsp[0].insert_stmt_t);
		
	}
#line 7222 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 343:
#line 2935 "bison.y" /* yacc.c:1646  */
    {
		(yyval.trigger_body_t) = new TriggerBody();
		(yyval.trigger_body_t)->case_idx_ = CASE3;
		(yyval.trigger_body_t)->alter_stmt_ = (yyvsp[0].alter_stmt_t);
		
	}
#line 7233 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 2944 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_if_not_exist_t) = new OptIfNotExist();
		(yyval.opt_if_not_exist_t)->case_idx_ = CASE0;
		
	}
#line 7243 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 2949 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_if_not_exist_t) = new OptIfNotExist();
		(yyval.opt_if_not_exist_t)->case_idx_ = CASE1;
		
	}
#line 7253 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 2957 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_if_exist_t) = new OptIfExist();
		(yyval.opt_if_exist_t)->case_idx_ = CASE0;
		
	}
#line 7263 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 2962 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_if_exist_t) = new OptIfExist();
		(yyval.opt_if_exist_t)->case_idx_ = CASE1;
		
	}
#line 7273 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 348:
#line 2970 "bison.y" /* yacc.c:1646  */
    {
		(yyval.identifier_t) = new Identifier();
		(yyval.identifier_t)->string_val_ = (yyvsp[0].sval);
		free((yyvsp[0].sval));
		
	}
#line 7284 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 2979 "bison.y" /* yacc.c:1646  */
    {
		(yyval.as_alias_t) = new AsAlias();
		(yyval.as_alias_t)->case_idx_ = CASE0;
		(yyval.as_alias_t)->identifier_ = (yyvsp[0].identifier_t);
	}
#line 7294 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 350:
#line 2987 "bison.y" /* yacc.c:1646  */
    {
		(yyval.table_name_t) = new TableName();
		(yyval.table_name_t)->case_idx_ = CASE0;
		(yyval.table_name_t)->identifier_ = (yyvsp[0].identifier_t);
	}
#line 7304 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 2995 "bison.y" /* yacc.c:1646  */
    {
		(yyval.column_name_t) = new ColumnName();
		(yyval.column_name_t)->case_idx_ = CASE0;
		(yyval.column_name_t)->identifier2_ = (yyvsp[0].identifier_t);
	}
#line 7314 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 3000 "bison.y" /* yacc.c:1646  */
    {

		(yyval.column_name_t) = new ColumnName();
		(yyval.column_name_t)->case_idx_ = CASE1;

		(yyval.column_name_t)->identifier1_ = (yyvsp[-2].identifier_t);
		(yyval.column_name_t)->identifier2_ = (yyvsp[0].identifier_t);
	}
#line 7327 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 353:
#line 3009 "bison.y" /* yacc.c:1646  */
    {
		(yyval.column_name_t) = new ColumnName();
		(yyval.column_name_t)->case_idx_ = CASE2;
	}
#line 7336 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 3014 "bison.y" /* yacc.c:1646  */
    {
		(yyval.column_name_t) = new ColumnName();
		(yyval.column_name_t)->case_idx_ = CASE3;
		(yyval.column_name_t)->identifier1_ = (yyvsp[-2].identifier_t);
	}
#line 7346 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 355:
#line 3022 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_index_keyword_t) = new OptIndexKeyword();
		(yyval.opt_index_keyword_t)->case_idx_ = CASE0;
		
	}
#line 7356 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 3027 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_index_keyword_t) = new OptIndexKeyword();
		(yyval.opt_index_keyword_t)->case_idx_ = CASE1;
		
	}
#line 7366 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 3032 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_index_keyword_t) = new OptIndexKeyword();
		(yyval.opt_index_keyword_t)->case_idx_ = CASE2;
		
	}
#line 7376 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 3037 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_index_keyword_t) = new OptIndexKeyword();
		(yyval.opt_index_keyword_t)->case_idx_ = CASE3;
		
	}
#line 7386 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 3045 "bison.y" /* yacc.c:1646  */
    {
		(yyval.view_name_t) = new ViewName();
		(yyval.view_name_t)->case_idx_ = CASE0;
		(yyval.view_name_t)->identifier_ = (yyvsp[0].identifier_t);
		
	}
#line 7397 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 3054 "bison.y" /* yacc.c:1646  */
    {
		(yyval.function_name_t) = new FunctionName();
		(yyval.function_name_t)->case_idx_ = CASE0;
		(yyval.function_name_t)->identifier_ = (yyvsp[0].identifier_t);
	}
#line 7407 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 3062 "bison.y" /* yacc.c:1646  */
    {
		(yyval.binary_op_t) = new BinaryOp();
		(yyval.binary_op_t)->case_idx_ = CASE0;
		
	}
#line 7417 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 362:
#line 3067 "bison.y" /* yacc.c:1646  */
    {
		(yyval.binary_op_t) = new BinaryOp();
		(yyval.binary_op_t)->case_idx_ = CASE1;
		
	}
#line 7427 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 363:
#line 3072 "bison.y" /* yacc.c:1646  */
    {
		(yyval.binary_op_t) = new BinaryOp();
		(yyval.binary_op_t)->case_idx_ = CASE2;
		
	}
#line 7437 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 3077 "bison.y" /* yacc.c:1646  */
    {
		(yyval.binary_op_t) = new BinaryOp();
		(yyval.binary_op_t)->case_idx_ = CASE3;
		
	}
#line 7447 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 3082 "bison.y" /* yacc.c:1646  */
    {
		(yyval.binary_op_t) = new BinaryOp();
		(yyval.binary_op_t)->case_idx_ = CASE4;
		
	}
#line 7457 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 3087 "bison.y" /* yacc.c:1646  */
    {
		(yyval.binary_op_t) = new BinaryOp();
		(yyval.binary_op_t)->case_idx_ = CASE5;
		
	}
#line 7467 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 3095 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_not_t) = new OptNot();
		(yyval.opt_not_t)->case_idx_ = CASE0;
		
	}
#line 7477 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 3100 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_not_t) = new OptNot();
		(yyval.opt_not_t)->case_idx_ = CASE1;
		
	}
#line 7487 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 3108 "bison.y" /* yacc.c:1646  */
    {
		(yyval.name_t) = new Name();
		(yyval.name_t)->case_idx_ = CASE0;
		(yyval.name_t)->identifier_ = (yyvsp[0].identifier_t);
		
	}
#line 7498 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 3117 "bison.y" /* yacc.c:1646  */
    {
		(yyval.type_name_t) = new TypeName();
		(yyval.type_name_t)->case_idx_ = CASE0;
		(yyval.type_name_t)->numeric_type_ = (yyvsp[0].numeric_type_t);
		
	}
#line 7509 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 3123 "bison.y" /* yacc.c:1646  */
    {
		(yyval.type_name_t) = new TypeName();
		(yyval.type_name_t)->case_idx_ = CASE1;
		(yyval.type_name_t)->character_type_ = (yyvsp[0].character_type_t);
		
	}
#line 7520 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 372:
#line 3132 "bison.y" /* yacc.c:1646  */
    {
		(yyval.character_type_t) = new CharacterType();
		(yyval.character_type_t)->case_idx_ = CASE0;
		(yyval.character_type_t)->character_with_length_ = (yyvsp[0].character_with_length_t);
		
	}
#line 7531 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 373:
#line 3138 "bison.y" /* yacc.c:1646  */
    {
		(yyval.character_type_t) = new CharacterType();
		(yyval.character_type_t)->case_idx_ = CASE1;
		(yyval.character_type_t)->character_without_length_ = (yyvsp[0].character_without_length_t);
		
	}
#line 7542 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 374:
#line 3147 "bison.y" /* yacc.c:1646  */
    {
		(yyval.character_with_length_t) = new CharacterWithLength();
		(yyval.character_with_length_t)->case_idx_ = CASE0;
		(yyval.character_with_length_t)->character_conflicta_ = (yyvsp[-3].character_conflicta_t);
		(yyval.character_with_length_t)->int_literal_ = (yyvsp[-1].int_literal_t);
		
	}
#line 7554 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 375:
#line 3157 "bison.y" /* yacc.c:1646  */
    {
		(yyval.character_without_length_t) = new CharacterWithoutLength();
		(yyval.character_without_length_t)->case_idx_ = CASE0;
		(yyval.character_without_length_t)->character_conflicta_ = (yyvsp[0].character_conflicta_t);
		
	}
#line 7565 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 376:
#line 3163 "bison.y" /* yacc.c:1646  */
    {
		(yyval.character_without_length_t) = new CharacterWithoutLength();
		(yyval.character_without_length_t)->case_idx_ = CASE1;
		
	}
#line 7575 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 377:
#line 3168 "bison.y" /* yacc.c:1646  */
    {
		(yyval.character_without_length_t) = new CharacterWithoutLength();
		(yyval.character_without_length_t)->case_idx_ = CASE2;
		
	}
#line 7585 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 378:
#line 3173 "bison.y" /* yacc.c:1646  */
    {
		(yyval.character_without_length_t) = new CharacterWithoutLength();
		(yyval.character_without_length_t)->case_idx_ = CASE3;
		
	}
#line 7595 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 379:
#line 3181 "bison.y" /* yacc.c:1646  */
    {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE0;
		
	}
#line 7605 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 380:
#line 3186 "bison.y" /* yacc.c:1646  */
    {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE1;
		
	}
#line 7615 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 381:
#line 3191 "bison.y" /* yacc.c:1646  */
    {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE2;
		
	}
#line 7625 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 382:
#line 3196 "bison.y" /* yacc.c:1646  */
    {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE3;
		
	}
#line 7635 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 383:
#line 3201 "bison.y" /* yacc.c:1646  */
    {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE4;
		
	}
#line 7645 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 384:
#line 3206 "bison.y" /* yacc.c:1646  */
    {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE5;
		
	}
#line 7655 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 385:
#line 3211 "bison.y" /* yacc.c:1646  */
    {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE6;
		
	}
#line 7665 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 386:
#line 3216 "bison.y" /* yacc.c:1646  */
    {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE7;
		
	}
#line 7675 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 387:
#line 3221 "bison.y" /* yacc.c:1646  */
    {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE8;
		
	}
#line 7685 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 388:
#line 3226 "bison.y" /* yacc.c:1646  */
    {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE9;
		
	}
#line 7695 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 389:
#line 3234 "bison.y" /* yacc.c:1646  */
    {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE0;
		
	}
#line 7705 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 390:
#line 3239 "bison.y" /* yacc.c:1646  */
    {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE1;
		
	}
#line 7715 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 391:
#line 3244 "bison.y" /* yacc.c:1646  */
    {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE2;
		
	}
#line 7725 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 392:
#line 3249 "bison.y" /* yacc.c:1646  */
    {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE3;
		
	}
#line 7735 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 393:
#line 3254 "bison.y" /* yacc.c:1646  */
    {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE4;
		
	}
#line 7745 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 394:
#line 3259 "bison.y" /* yacc.c:1646  */
    {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE5;
		
	}
#line 7755 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 395:
#line 3264 "bison.y" /* yacc.c:1646  */
    {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE6;
		
	}
#line 7765 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 396:
#line 3269 "bison.y" /* yacc.c:1646  */
    {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE7;
		
	}
#line 7775 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 397:
#line 3274 "bison.y" /* yacc.c:1646  */
    {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE8;
		
	}
#line 7785 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 398:
#line 3279 "bison.y" /* yacc.c:1646  */
    {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE9;
		
	}
#line 7795 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 399:
#line 3284 "bison.y" /* yacc.c:1646  */
    {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE10;
		
	}
#line 7805 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 400:
#line 3289 "bison.y" /* yacc.c:1646  */
    {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE11;
		
	}
#line 7815 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 401:
#line 3294 "bison.y" /* yacc.c:1646  */
    {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE12;
		
	}
#line 7825 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 402:
#line 3302 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_table_constraint_list_t) = new OptTableConstraintList();
		(yyval.opt_table_constraint_list_t)->case_idx_ = CASE0;
		(yyval.opt_table_constraint_list_t)->table_constraint_list_ = (yyvsp[0].table_constraint_list_t);
		
	}
#line 7836 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 403:
#line 3308 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_table_constraint_list_t) = new OptTableConstraintList();
		(yyval.opt_table_constraint_list_t)->case_idx_ = CASE1;
		
	}
#line 7846 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 404:
#line 3316 "bison.y" /* yacc.c:1646  */
    {
		(yyval.table_constraint_list_t) = new TableConstraintList();
		(yyval.table_constraint_list_t)->case_idx_ = CASE0;
		(yyval.table_constraint_list_t)->table_constraint_ = (yyvsp[0].table_constraint_t);
		
	}
#line 7857 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 405:
#line 3322 "bison.y" /* yacc.c:1646  */
    {
		(yyval.table_constraint_list_t) = new TableConstraintList();
		(yyval.table_constraint_list_t)->case_idx_ = CASE1;
		(yyval.table_constraint_list_t)->table_constraint_ = (yyvsp[-2].table_constraint_t);
		(yyval.table_constraint_list_t)->table_constraint_list_ = (yyvsp[0].table_constraint_list_t);
		
	}
#line 7869 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 406:
#line 3333 "bison.y" /* yacc.c:1646  */
    {
		(yyval.table_constraint_t) = new TableConstraint();
		(yyval.table_constraint_t)->case_idx_ = CASE0;
		(yyval.table_constraint_t)->opt_constraint_name_ = (yyvsp[-5].opt_constraint_name_t);
		(yyval.table_constraint_t)->indexed_column_list_ = (yyvsp[-1].indexed_column_list_t);
		
	}
#line 7881 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 407:
#line 3340 "bison.y" /* yacc.c:1646  */
    {
		(yyval.table_constraint_t) = new TableConstraint();
		(yyval.table_constraint_t)->case_idx_ = CASE1;
		(yyval.table_constraint_t)->opt_constraint_name_ = (yyvsp[-4].opt_constraint_name_t);
		(yyval.table_constraint_t)->indexed_column_list_ = (yyvsp[-1].indexed_column_list_t);
		
	}
#line 7893 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 408:
#line 3347 "bison.y" /* yacc.c:1646  */
    {
		(yyval.table_constraint_t) = new TableConstraint();
		(yyval.table_constraint_t)->case_idx_ = CASE2;
		(yyval.table_constraint_t)->opt_constraint_name_ = (yyvsp[-5].opt_constraint_name_t);
		(yyval.table_constraint_t)->expr_ = (yyvsp[-2].expr_t);
		(yyval.table_constraint_t)->opt_enforced_ = (yyvsp[0].opt_enforced_t);
		
	}
#line 7906 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 409:
#line 3355 "bison.y" /* yacc.c:1646  */
    {
		(yyval.table_constraint_t) = new TableConstraint();
		(yyval.table_constraint_t)->case_idx_ = CASE3;
		(yyval.table_constraint_t)->opt_constraint_name_ = (yyvsp[-6].opt_constraint_name_t);
		(yyval.table_constraint_t)->column_name_list_ = (yyvsp[-2].column_name_list_t);
		(yyval.table_constraint_t)->reference_clause_ = (yyvsp[0].reference_clause_t);

	}
#line 7919 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 410:
#line 3366 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_enforced_t) = new OptEnforced();
		(yyval.opt_enforced_t)->case_idx_ = CASE0;
		
	}
#line 7929 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 411:
#line 3371 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_enforced_t) = new OptEnforced();
		(yyval.opt_enforced_t)->case_idx_ = CASE1;
		
	}
#line 7939 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 412:
#line 3376 "bison.y" /* yacc.c:1646  */
    {
		(yyval.opt_enforced_t) = new OptEnforced();
		(yyval.opt_enforced_t)->case_idx_ = CASE2;
		
	}
#line 7949 "bison.tab.c" /* yacc.c:1646  */
    break;


#line 7953 "bison.tab.c" /* yacc.c:1646  */
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
#line 3383 "bison.y" /* yacc.c:1906  */

