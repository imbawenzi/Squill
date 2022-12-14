%{
#include "bison_parser.h"
#include <stdio.h>
#include <sstream>
#include <string>
#include <cstring>
#define TOKEN(name) { return SQL_##name; }
static thread_local std::stringstream strbuf;
%}

%{

#define YYLTYPE_IS_DECLARED 1

#define YY_USER_ACTION \
    yylloc->first_line = yylloc->last_line; \
    yylloc->first_column = yylloc->last_column; \
    for(int i = 0; yytext[i] != '\0'; i++) { \
        if(yytext[i] == '\n') { \
            yylloc->last_line++; \
            yylloc->last_column = 0; \
        } \
        else { \
            yylloc->last_column++; \
        } \
    }   
%}

%option reentrant
%option bison-bridge
%option never-interactive
%option batch
%option noyywrap
%option nounput
%option warn
%option case-insensitive
%option bison-locations
%option header-file="flex_lexer.h"
%option outfile="flex_lexer.cpp"
%option prefix="ff_"
%s COMMENT
%x singlequotedstring

%%
";"		TOKEN(OP_SEMI)
ALTER		TOKEN(ALTER)
TABLE		TOKEN(TABLE)
UMINUS		TOKEN(UMINUS)
"("		TOKEN(OP_LP)
")"		TOKEN(OP_RP)
SELECT		TOKEN(SELECT)
UNION		TOKEN(UNION)
WINDOW		TOKEN(WINDOW)
","		TOKEN(OP_COMMA)
AS		TOKEN(AS)
PARTITION		TOKEN(PARTITION)
BY		TOKEN(BY)
BETWEEN		TOKEN(BETWEEN)
AND		TOKEN(AND)
RANGE		TOKEN(RANGE)
ROWS		TOKEN(ROWS)
GROUPS		TOKEN(GROUPS)
UNBOUNDED		TOKEN(UNBOUNDED)
PRECEDING		TOKEN(PRECEDING)
FOLLOWING		TOKEN(FOLLOWING)
CURRENT		TOKEN(CURRENT)
ROW		TOKEN(ROW)
GROUP		TOKEN(GROUP)
HAVING		TOKEN(HAVING)
WHERE		TOKEN(WHERE)
FROM		TOKEN(FROM)
INDEXED		TOKEN(INDEXED)
NOT		TOKEN(NOT)
ON		TOKEN(ON)
USING		TOKEN(USING)
JOIN		TOKEN(JOIN)
NATURAL		TOKEN(NATURAL)
LEFT		TOKEN(LEFT)
OUTER		TOKEN(OUTER)
INNER		TOKEN(INNER)
CROSS		TOKEN(CROSS)
LIMIT		TOKEN(LIMIT)
OFFSET		TOKEN(OFFSET)
ORDER		TOKEN(ORDER)
ASC		TOKEN(ASC)
DESC		TOKEN(DESC)
WITH		TOKEN(WITH)
RECURSIVE		TOKEN(RECURSIVE)
ALL		TOKEN(ALL)
DISTINCT		TOKEN(DISTINCT)
CREATE		TOKEN(CREATE)
LIKE		TOKEN(LIKE)
BTREE		TOKEN(BTREE)
HASH		TOKEN(HASH)
INDEX		TOKEN(INDEX)
TRIGGER		TOKEN(TRIGGER)
FOR		TOKEN(FOR)
EACH		TOKEN(EACH)
VIEW		TOKEN(VIEW)
OR		TOKEN(OR)
REPLACE		TOKEN(REPLACE)
INSERT_METHOD		TOKEN(INSERT_METHOD)
ROW_FORMAT		TOKEN(ROW_FORMAT)
NO		TOKEN(NO)
FIRST		TOKEN(FIRST)
LAST		TOKEN(LAST)
DEFAULT		TOKEN(DEFAULT)
DYNAMIC		TOKEN(DYNAMIC)
FIXED		TOKEN(FIXED)
COMPRESSED		TOKEN(COMPRESSED)
REDUNDANT		TOKEN(REDUNDANT)
COMPACT		TOKEN(COMPACT)
IGNORE		TOKEN(IGNORE)
ALGORITHM		TOKEN(ALGORITHM)
"="		TOKEN(OP_EQUAL)
UNDEFINED		TOKEN(UNDEFINED)
MERGE		TOKEN(MERGE)
TEMPTABLE		TOKEN(TEMPTABLE)
SQL		TOKEN(SQL)
SECURITY		TOKEN(SECURITY)
DEFINER		TOKEN(DEFINER)
INVOKER		TOKEN(INVOKER)
INPLACE		TOKEN(INPLACE)
COPY		TOKEN(COPY)
LOCK		TOKEN(LOCK)
NONE		TOKEN(NONE)
SHARED		TOKEN(SHARED)
EXCLUSIVE		TOKEN(EXCLUSIVE)
DELETE		TOKEN(DELETE)
INSERT		TOKEN(INSERT)
UPDATE		TOKEN(UPDATE)
BEFORE		TOKEN(BEFORE)
AFTER		TOKEN(AFTER)
DROP		TOKEN(DROP)
RESTRICT		TOKEN(RESTRICT)
CASCADE		TOKEN(CASCADE)
SET		TOKEN(SET)
LOW_PRIORITY		TOKEN(LOW_PRIORITY)
DELAYED		TOKEN(DELAYED)
HIGH_PRIORITY		TOKEN(HIGH_PRIORITY)
INTO		TOKEN(INTO)
VALUE		TOKEN(VALUE)
VALUES		TOKEN(VALUES)
DUPLICATE		TOKEN(DUPLICATE)
KEY		TOKEN(KEY)
RENAME		TOKEN(RENAME)
TO		TOKEN(TO)
COLUMN		TOKEN(COLUMN)
ADD		TOKEN(ADD)
PRIMARY		TOKEN(PRIMARY)
FORCE		TOKEN(FORCE)
DISABLE		TOKEN(DISABLE)
KEYS		TOKEN(KEYS)
ENABLE		TOKEN(ENABLE)
VALIDATION		TOKEN(VALIDATION)
WITHOUT		TOKEN(WITHOUT)
UNIQUE		TOKEN(UNIQUE)
FOREIGN		TOKEN(FOREIGN)
FULLTEXT		TOKEN(FULLTEXT)
SPATIAL		TOKEN(SPATIAL)
NULL		TOKEN(NULL)
VISIBLE		TOKEN(VISIBLE)
INVISIBLE		TOKEN(INVISIBLE)
AUTO_INCREMENT		TOKEN(AUTO_INCREMENT)
COLUMN_FORMAT		TOKEN(COLUMN_FORMAT)
STORAGE		TOKEN(STORAGE)
DISK		TOKEN(DISK)
MEMORY		TOKEN(MEMORY)
REFERENCES		TOKEN(REFERENCES)
MATCH		TOKEN(MATCH)
FULL		TOKEN(FULL)
PARTIAL		TOKEN(PARTIAL)
SIMPLE		TOKEN(SIMPLE)
ACTION		TOKEN(ACTION)
CHECK		TOKEN(CHECK)
CONSTRAINT		TOKEN(CONSTRAINT)
ENFORCED		TOKEN(ENFORCED)
TEMPORARY		TOKEN(TEMPORARY)
OPTION		TOKEN(OPTION)
CASCADED		TOKEN(CASCADED)
LOCAL		TOKEN(LOCAL)
CAST		TOKEN(CAST)
"-"		TOKEN(OP_SUB)
ISNULL		TOKEN(ISNULL)
IS		TOKEN(IS)
"+"		TOKEN(OP_ADD)
IN		TOKEN(IN)
CASE		TOKEN(CASE)
END		TOKEN(END)
ELSE		TOKEN(ELSE)
EXISTS		TOKEN(EXISTS)
OVER		TOKEN(OVER)
WHEN		TOKEN(WHEN)
THEN		TOKEN(THEN)
"!="		TOKEN(OP_NOTEQUAL)
">"		TOKEN(OP_GREATERTHAN)
"<"		TOKEN(OP_LESSTHAN)
"<="		TOKEN(OP_LESSEQ)
">="		TOKEN(OP_GREATEREQ)
EXTRACT		TOKEN(EXTRACT)
SECOND		TOKEN(SECOND)
MINUTE		TOKEN(MINUTE)
HOUR		TOKEN(HOUR)
DAY		TOKEN(DAY)
MONTH		TOKEN(MONTH)
YEAR		TOKEN(YEAR)
ARRAY		TOKEN(ARRAY)
"["		TOKEN(OP_LBRACKET)
"]"		TOKEN(OP_RBRACKET)
TRUE		TOKEN(TRUE)
FALSE		TOKEN(FALSE)
IF		TOKEN(IF)
"."		TOKEN(OP_POINT)
"*"		TOKEN(OP_MUL)
"/"		TOKEN(OP_DIVIDE)
"%"		TOKEN(OP_MOD)
"^"		TOKEN(OP_XOR)
ENUM		TOKEN(ENUM)
BINARY		TOKEN(BINARY)
CHARACTER		TOKEN(CHARACTER)
CHAR		TOKEN(CHAR)
VARCHAR		TOKEN(VARCHAR)
TEXT		TOKEN(TEXT)
TINYTEXT		TOKEN(TINYTEXT)
MEDIUMTEXT		TOKEN(MEDIUMTEXT)
LONGTEXT		TOKEN(LONGTEXT)
NATIONAL		TOKEN(NATIONAL)
NCHAR		TOKEN(NCHAR)
INT		TOKEN(INT)
INTEGER		TOKEN(INTEGER)
SMALLINT		TOKEN(SMALLINT)
BIGINT		TOKEN(BIGINT)
REAL		TOKEN(REAL)
FLOAT		TOKEN(FLOAT)
DOUBLE		TOKEN(DOUBLE)
PRECISION		TOKEN(PRECISION)
DECIMAL		TOKEN(DECIMAL)
DEC		TOKEN(DEC)
NUMERIC		TOKEN(NUMERIC)
BOOLEAN		TOKEN(BOOLEAN)
-?[0-9]+"."[0-9]* |
"."[0-9]* {
	yylval->fval = atof(yytext);
	return SQL_FLOATLITERAL;
	}

-?[0-9]+ {
	yylval->ival = atol(yytext);
	return SQL_INTLITERAL;
	}

\"[^\"\n]+\" {
	std::string s(yytext);
	yylval->sval = strdup(s.substr(1, s.size()-1).c_str());
	return SQL_STRINGLITERAL;
	}

[A-Za-z][A-Za-z0-9_]* {
	yylval->sval = strdup(yytext);
	return SQL_IDENTIFIER;
	}

\' {
	BEGIN singlequotedstring; strbuf = std::stringstream{}; strbuf << '\'';
	}

<singlequotedstring>\'\' {
	strbuf << '\'';
	}

<singlequotedstring>[^']* {
	strbuf << yytext;
	}

<singlequotedstring>\' {
	BEGIN 0; 
	strbuf << '\'';
	yylval->sval = strdup(strbuf.str().c_str());
	return SQL_STRINGLITERAL;
	}

<singlequotedstring><<EOF>> {
	return 0;
	}

[ \t\n]+ {
	}
. {
	return 0;
	}

%%
