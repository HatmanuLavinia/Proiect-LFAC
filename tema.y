%{
#include <stdio.h>
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
%}
%token ID TIP BGIN END ASSIGN NR CONST
%token IF ELSE WHILE FOR CLASS CLASS_SPEC
%token BOOL_VAR LESSOP LESSEQOP GROP GREQOP PLUSOP MINUSOP STAROP SLASHOP 
%token ANDOP OROP NEG_OP LB RB PRINT EVAL
%start progr
%%
progr: declaratii bloc {printf("program corect sintactic\n");}
     ;

declaratii :  declaratie ';'
	   | declaratii declaratie ';'
	   ;
declaratie : TIP ID '(' lista_param ')'
           | TIP ID '(' ')'
           | CONST TIP list_const
           | TIP list_id
           ;
list_id : ID
          | list_id ',' ID
          ;
list_const: ID ASSIGN NR
          | list_const ',' ID ASSIGN NR
          ;
lista_param : param
            | lista_param ','  param 
            ;
            
param : TIP ID
      ; 
      
/* bloc */
bloc : BGIN list END  
     ;
     
/* lista instructiuni */
list :  statement ';' 
     | list statement ';'
     ;

/* instructiune */
statement: ID ASSIGN ID
         | ID ASSIGN NR  		 
         | ID '(' lista_apel ')'
         ;
        
lista_apel : element
           | lista_apel ',' element
           ;
element : NR
        | ID
        ;
%%
int yyerror(char * s){
printf("eroare: %s la linia:%d\n",s,yylineno);
}

int main(int argc, char** argv){
yyin=fopen(argv[1],"r");
yyparse();
} 
