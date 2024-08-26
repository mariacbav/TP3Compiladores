%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "translate.tab.h"

void yyerror(char*);
extern int yylineno; 
char *yytext;
int countn=1;

#ifdef _MSC_VER
#define strdup _strdup
#endif

%}

%option noyywrap
%option yylineno
%x COMMENT_LINE
%x COMMENT_BLOCK

/* Definições regulares */
DIGITO          [0-9]
DIGITOS         {DIGITO}+
LETRA           [A-Za-z]
IDENTIFIER      {LETRA}({LETRA}|{DIGITO}|"_")*
UNSNUMERO       -?{DIGITO}+
UNSQUEBRADO     -?{DIGITO}+(\.{DIGITO}+)
%%
"unsNumero"         { strcpy(yylval.nd_obj.name,(yytext));return INT; }
"unsQuebrado"       { strcpy(yylval.nd_obj.name,(yytext));return FLOAT; }
"outroTrem"         { strcpy(yylval.nd_obj.name,(yytext));return STRING; }
"montoadoDeTrem"    { strcpy(yylval.nd_obj.name,(yytext));return MATRIX; }
"trem"              { strcpy(yylval.nd_obj.name,(yytext));return ARRAY; }
"temNadaNao"        { strcpy(yylval.nd_obj.name,(yytext));return VOID; }
"eh"                { strcpy(yylval.nd_obj.name,(yytext));return ASSIGN; }
"poFala"            { strcpy(yylval.nd_obj.name,(yytext));return INPUT; }
"mostraAi"          { strcpy(yylval.nd_obj.name,(yytext));return OUTPUT; }
"esseTrem"          { strcpy(yylval.nd_obj.name,(yytext));return IF; }
"ouEsseTrem"        { strcpy(yylval.nd_obj.name,(yytext));return ELIF; }
"ouEsseTremAqui"    { strcpy(yylval.nd_obj.name,(yytext));return ELSE; }
"escolheAi"         { strcpy(yylval.nd_obj.name,(yytext));return SWITCH; }
"repete"            { strcpy(yylval.nd_obj.name,(yytext));return FOR; }
"repeteAi"          { strcpy(yylval.nd_obj.name,(yytext));return WHILE; }
"poPara"            { strcpy(yylval.nd_obj.name,(yytext));return BREAK; }
"poI"               { rstrcpy(yylval.nd_obj.name,(yytext));eturn CONTINUE; }
"igualzin"          { strcpy(yylval.nd_obj.name,(yytext));return EQ; }
"maisUmCadin"       { strcpy(yylval.nd_obj.name,(yytext));return INCREMENT; }
"menosUmCadin"      { strcpy(yylval.nd_obj.name,(yytext));return DECREMENT; }
"juntaOsTrem"       { strcpy(yylval.nd_obj.name,(yytext));return CONCAT; }
"cadeOce"           { strcpy(yylval.nd_obj.name,(yytext));return SUBSTRING; }
"trenzao"           { strcpy(yylval.nd_obj.name,(yytext));return CASE_UP; }
"trenzin"           { strcpy(yylval.nd_obj.name,(yytext));return CASE_DOWN; }
"emPedacin"         { strcpy(yylval.nd_obj.name,(yytext));return STRING_DIV; }
"ajeitaAi"          { strcpy(yylval.nd_obj.name,(yytext));return SORT; }
"retornaAi"         { strcpy(yylval.nd_obj.name,(yytext));return RETURN; }
"tamain"            { strcpy(yylval.nd_obj.name,(yytext));return LEN; }
"seFo"              { strcpy(yylval.nd_obj.name,(yytext));return CASE; }
"logoAli"           { strcpy(yylval.nd_obj.name,(yytext));return AT; }

{UNSQUEBRADO}       { strcpy(yylval.nd_obj.name,(yytext));return FLOAT_LITERAL; }
{UNSNUMERO}         { strcpy(yylval.nd_obj.name,(yytext));return INT_LITERAL; }
\"([^\"\\\n]|\\.)*\" { strcpy(yylval.nd_obj.name,(yytext));return STRING_LITERAL; }
{IDENTIFIER}\.trem {  yylval.sval = strdup(yytext); return VECTOR_DECLARATION; } /*TERIA QUE TER ? strcpy(yylval.nd_obj.name,(yytext));*/
{IDENTIFIER}        { yylval.sval = strdup(yytext); return IDENTIFIER; } /*TERIA QUE TER ? strcpy(yylval.nd_obj.name,(yytext));*/

"<="                { strcpy(yylval.nd_obj.name,(yytext));return LE; }
">="                { strcpy(yylval.nd_obj.name,(yytext));return GE; }
"!="                { strcpy(yylval.nd_obj.name,(yytext));return NE; }
"<"                 { strcpy(yylval.nd_obj.name,(yytext));return LT; }
">"                 { strcpy(yylval.nd_obj.name,(yytext));return GT; }
":"                 { strcpy(yylval.nd_obj.name,(yytext));return COLON; }
"%"                 { strcpy(yylval.nd_obj.name,(yytext));return PERCENT; }
"\""                { strcpy(yylval.nd_obj.name,(yytext));return MARKS; }
"&"                 { strcpy(yylval.nd_obj.name,(yytext));return ADD; }
"."                 { strcpy(yylval.nd_obj.name,(yytext));return DOT; }
"+"                 { strcpy(yylval.nd_obj.name,(yytext));return PLUS; }
"-"                 { strcpy(yylval.nd_obj.name,(yytext));return MINUS; }
"*"                 { strcpy(yylval.nd_obj.name,(yytext));return MULTIPLY; }
"/"                 { strcpy(yylval.nd_obj.name,(yytext));return DIVIDE; }
"("                 { strcpy(yylval.nd_obj.name,(yytext));return LPAREN; }
")"                 { strcpy(yylval.nd_obj.name,(yytext));return RPAREN; }
"{"                 { strcpy(yylval.nd_obj.name,(yytext));return LBRACE; }
"}"                 { strcpy(yylval.nd_obj.name,(yytext));return RBRACE; }
"["                 { strcpy(yylval.nd_obj.name,(yytext));return LBRACKET; }
"]"                 { strcpy(yylval.nd_obj.name,(yytext));return RBRACKET; }
";"                 { strcpy(yylval.nd_obj.name,(yytext));return SEMICOLON; }
","                 { strcpy(yylval.nd_obj.name,(yytext));return COMMA; }

"//"                { BEGIN COMMENT_LINE; }
"/*"                { BEGIN COMMENT_BLOCK; }

<COMMENT_LINE>[^'\n']*  { /* Ignorar comentário de linha */ }
<COMMENT_LINE>\n        { BEGIN INITIAL; }

[ \t]+                { /* Ignorar espaços em branco */ }
\n                    { countn++;}
.                     { printf("Caracter ilegal: %c\n", yytext[0]); }
%%

int test_lexer_main(int argc, char **argv) {
    int token;
    while ((token = yylex())) {
        switch (token) {
            case INT: printf("Token: INT\n"); break;
            case FLOAT: printf("Token: FLOAT\n"); break;
            case STRING: printf("Token: STRING\n"); break;
            case MATRIX: printf("Token: MATRIX\n"); break;
            case VOID: printf("Token: VOID\n"); break;
            case ASSIGN: printf("Token: ASSIGN\n"); break;
            case INPUT: printf("Token: INPUT\n"); break;
            case OUTPUT: printf("Token: OUTPUT\n"); break;
            case IF: printf("Token: IF\n"); break;
            case ELIF: printf("Token: ELIF\n"); break;
            case ELSE: printf("Token: ELSE\n"); break;
            case SWITCH: printf("Token: SWITCH\n"); break;
            case FOR: printf("Token: FOR\n"); break;
            case WHILE: printf("Token: WHILE\n"); break;
            case BREAK: printf("Token: BREAK\n"); break;
            case CONTINUE: printf("Token: CONTINUE\n"); break;
            case EQ: printf("Token: EQ\n"); break;
            case INCREMENT: printf("Token: INCREMENT\n"); break;
            case DECREMENT: printf("Token: DECREMENT\n"); break;
            case CONCAT: printf("Token: CONCAT\n"); break;
            case SUBSTRING: printf("Token: SUBSTRING\n"); break;
            case CASE_UP: printf("Token: CASE_UP\n"); break;
            case CASE_DOWN: printf("Token: CASE_DOWN\n"); break;
            case STRING_DIV: printf("Token: STRING_DIV\n"); break;
            case SORT: printf("Token: SORT\n"); break;
            case FLOAT_LITERAL: printf("Token: FLOAT_LITERAL (%s)\n", yytext); break;
            case INT_LITERAL: printf("Token: INT_LITERAL (%s)\n", yytext); break;
            case STRING_LITERAL: printf("Token: STRING_LITERAL (%s)\n", yytext); break;
            case IDENTIFIER: printf("Token: IDENTIFIER (%s)\n", yytext); break;
            case VECTOR_DECLARATION: printf("Token: VECTOR_DECLARATION (%s)\n", yytext); break;
            case PLUS: printf("Token: PLUS\n"); break;
            case MINUS: printf("Token: MINUS\n"); break;
            case MULTIPLY: printf("Token: MULTIPLY\n"); break;
            case DIVIDE: printf("Token: DIVIDE\n"); break;
            case LPAREN: printf("Token: LPAREN\n"); break;
            case RPAREN: printf("Token: RPAREN\n"); break;
            case LBRACE: printf("Token: LBRACE\n"); break;
            case RBRACE: printf("Token: RBRACE\n"); break;
            case LBRACKET: printf("Token: LBRACKET\n"); break;
            case RBRACKET: printf("Token: RBRACKET\n"); break;
            case SEMICOLON: printf("Token: SEMICOLON\n"); break;
            case COMMA: printf("Token: COMMA\n"); break;
            case COLON: printf("Token: COLON\n"); break;
            case LT: printf("Token: LT\n"); break;
            case GT: printf("Token: GT\n"); break;
            case LE: printf("Token: LE\n"); break;
            case GE: printf("Token: GE\n"); break;
            case NE: printf("Token: NE\n"); break;
            default: printf("Token: UNKNOWN (%d)\n", token); break;
        }
    }
    return 0;
}

