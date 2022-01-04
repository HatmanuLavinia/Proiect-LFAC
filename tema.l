%{
#include <stdio.h>
#include "y.tab.h"
%}
%option noyywrap
%%
"int"|"float"|"char"|"string" {return TIP;}
"begin_progr" {return BGIN;}
"end_progr" {return END;}
"const" {return CONST;}
"if" {return IF;}
"else" {return ELSE;}
"while" {return WHILE;}
"for" {return FOR;}
"class" {return CLASS;}
"private"|"protected"|"public" {return CLASS_SPEC;}
"true"|"false" {return BOOL_VAR;}
"<" {return LESSOP;}
"<=" {return LESSEQOP;}
">" {return GROP;}
">=" {return GREQOP;}
"+" {return PLUSOP;}
"-" {return MINUSOP;}
"*" {return STAROP;}
"/" {return SLASHOP;}
"&&" {return ANDOP;}
"||" {return OROP;}
"!" {return NEG_OP;}
":=" {return ASSIGN;}
[0-9]+ {return NR;}
"{" {return LB;}
"}" {return RB;}
EVAL {return EVAL;} 
PRINT {return PRINT;} 
[_a-zA-Z][_a-zA-Z0-9]* {return ID;}
[ \t] ;
\n {yylineno++;}
. {return yytext[0];}
