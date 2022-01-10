/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ID = 258,
    INT = 259,
    BOOL = 260,
    FLOAT = 261,
    BGIN = 262,
    END = 263,
    ASSIGN = 264,
    CLASS = 265,
    ACCESS = 266,
    PLUS = 267,
    MINUS = 268,
    DIV = 269,
    MUL = 270,
    MOD = 271,
    GT = 272,
    LT = 273,
    GEQ = 274,
    LEQ = 275,
    EQ = 276,
    NEQ = 277,
    AND = 278,
    OR = 279,
    ARRAY = 280,
    STRLEN = 281,
    ASSIGN_STR = 282,
    CHAR = 283,
    IF = 284,
    ELSE = 285,
    WHILE = 286,
    FOR = 287,
    ASSIGN_BOOL = 288,
    VAL_FLOAT = 289,
    EVAL = 290,
    RETURN = 291,
    VOID = 292,
    NR = 293,
    STRING = 294,
    IFX = 295
  };
#endif
/* Tokens.  */
#define ID 258
#define INT 259
#define BOOL 260
#define FLOAT 261
#define BGIN 262
#define END 263
#define ASSIGN 264
#define CLASS 265
#define ACCESS 266
#define PLUS 267
#define MINUS 268
#define DIV 269
#define MUL 270
#define MOD 271
#define GT 272
#define LT 273
#define GEQ 274
#define LEQ 275
#define EQ 276
#define NEQ 277
#define AND 278
#define OR 279
#define ARRAY 280
#define STRLEN 281
#define ASSIGN_STR 282
#define CHAR 283
#define IF 284
#define ELSE 285
#define WHILE 286
#define FOR 287
#define ASSIGN_BOOL 288
#define VAL_FLOAT 289
#define EVAL 290
#define RETURN 291
#define VOID 292
#define NR 293
#define STRING 294
#define IFX 295

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 37 "tema.y"

int intval;
char *strval;

#line 142 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
