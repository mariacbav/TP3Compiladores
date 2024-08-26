%{
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>

extern int yylineno;
extern FILE *yyin;
int yyparse();
void yyerror(const char *s);
extern int yylex();
extern char *yytext;

//Funções da symTable:
void add(char);
void insert_type();
int search(char *);
void insert_type();
void insert_name();

//Estrutura da symTable:
struct dataType {
    char * id_name;
    char * data_type;
    char * type;
    int line_no;
} symbol_table[40];

int count=0;

//Manipulação da symTable:
int q;
char type[10];
char name[20];
char function_name[20];
char matrix_name[20];
extern int countn;

%}

%union {
    int ival;
    float fval;
    char *sval;
}

%token <ival> INT FLOAT STRING VOID MATRIX RETURN UNSNUMERO CASE
%token <ival> ASSIGN INPUT OUTPUT IF ELIF ELSE SWITCH FOR WHILE BREAK CONTINUE
%token <ival> EQ INCREMENT DECREMENT CONCAT SUBSTRING CASE_UP CASE_DOWN STRING_DIV SORT ARRAY
%token <fval> FLOAT_LITERAL
%token <ival> INT_LITERAL
%token <sval> STRING_LITERAL IDENTIFIER VECTOR_DECLARATION
%token PLUS MINUS MULTIPLY DIVIDE LPAREN RPAREN LBRACE RBRACE LBRACKET RBRACKET SEMICOLON COMMA COLON LT GT LE GE NE MARKS PERCENT ADD DOT LEN AT

%left PLUS MINUS
%left MULTIPLY DIVIDE
%left LT GT LE GE EQ NE
%right ASSIGN
%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE

%start program

%%
program:
    declaration_list
    ;

declaration_list:
    declaration_list declaration
    | declaration
    ;

declaration:
    function_declaration
    ;

variable_declaration:
    type_specifier  IDENTIFIER {strcpy(name,$2); add('V');}  SEMICOLON 
    |type_specifier IDENTIFIER {strcpy(name,$2); add('V');} ASSIGN  expression SEMICOLON
    ;

function_declaration:
    type_specifier IDENTIFIER {strcpy(function_name , $2); add('F');} LPAREN  parameter_list RPAREN compound_statement 
    ;

bracket:
    LBRACKET INT_LITERAL RBRACKET
    ;

array_declaration:
    type_specifier VECTOR_DECLARATION {add('A');} bracket SEMICOLON
    |type_specifier IDENTIFIER {strcpy(matrix_name, $2);} DOT MATRIX {add('M');} bracket bracket SEMICOLON
    ;

type_specifier:
    INT { insert_type(); }
    | FLOAT { insert_type(); }
    | STRING { insert_type(); } 
    | VOID { insert_type(); }
    ;

parameter_list:
    parameter_list COMMA parameter
    | parameter
    | /* vazio */
    ;

parameter:
    type_specifier IDENTIFIER
    ;

compound_statement:
    LBRACE statement_list RBRACE
    ;

statement_list:
    statement_list statement
    | /* vazio */
    ;

statement:
    expression_statement
    | compound_statement
    | selection_statement
    | iteration_statement
    | put_statement
    | array_str_statement SEMICOLON
    | return_statement
    | variable_declaration
    | array_declaration
    
    ;

put_statement:
    out
    |in
    ;

array_str_statement:
    len 
    |acess
    |search
    |concat
    |array_sort
    |str 
    ;


str:
    |IDENTIFIER ASSIGN IDENTIFIER LBRACKET INT_LITERAL COLON INT_LITERAL RBRACKET
    |IDENTIFIER DOT case
    |STRING_DIV str_id
    ;

array_sort:
    IDENTIFIER DOT SORT
    ;

concat: 
    CONCAT LPAREN IDENTIFIER COMMA IDENTIFIER RPAREN
    ;


search:
    SUBSTRING LPAREN factor COMMA IDENTIFIER RPAREN
    ;

case:
    CASE_DOWN
    |CASE_UP
    ;

str_id:
    LPAREN STRING_LITERAL COMMA IDENTIFIER RPAREN
    ;

len:
    IDENTIFIER DOT LEN 
    ;

acess:
    IDENTIFIER bracket
    |IDENTIFIER bracket bracket
    ;

expression_statement:
    expression SEMICOLON
    ;

selection_statement:
    IF LPAREN expression RPAREN compound_statement %prec LOWER_THAN_ELSE
    | IF LPAREN expression RPAREN compound_statement elif_list ELSE compound_statement
    | SWITCH LPAREN IDENTIFIER RPAREN LBRACE case_list RBRACE
    ;

case_list: 
    CASE LPAREN literal RPAREN COLON statement_list BREAK SEMICOLON case_list
    |/*vazio*/
    ;

elif_list:
    ELIF LPAREN expression RPAREN compound_statement elif_list
    | /* vazio */
;


iteration_statement:
    WHILE LPAREN expression RPAREN compound_statement
    | FOR LPAREN expression_statement expression_statement expression RPAREN compound_statement
    ;

return_statement:
    RETURN expression SEMICOLON
    ;

expression:
    IDENTIFIER ASSIGN expression
    | simple_expression
    ;

simple_expression:
    additive_expression relational_operator additive_expression
    | additive_expression
    ;

relational_operator:
    LT
    | GT
    | LE
    | GE
    | EQ
    | NE
    ;

additive_expression:
    additive_expression PLUS term
    | additive_expression MINUS term
    | term
    ;

term:
    term MULTIPLY factor
    | term DIVIDE factor
    |increment
    ;


increment:
    IDENTIFIER INCREMENT 
    |IDENTIFIER DECREMENT
    | factor
    ;

factor:
    LPAREN expression RPAREN
    | IDENTIFIER
    | literal 
    ;

literal:
     INT_LITERAL
    | FLOAT_LITERAL
    | STRING_LITERAL
    ;

out:
    OUTPUT LPAREN STRING_LITERAL RPAREN SEMICOLON
    | OUTPUT LPAREN STRING_LITERAL COMMA address_list RPAREN SEMICOLON
    ;

in:
   INPUT LPAREN percent_list  COMMA address_list RPAREN SEMICOLON
    ;

percent_list:
    PERCENT type_specifier percent_list
    |/*vazio*/

address_list:
    AT IDENTIFIER address_list
    |/*vazio*/

%%

int main(int argc, char **argv) {

    // Verificação dos argumentos da linha de comando:
    if (argc != 2) {
        fprintf(stderr, "Uso: %s <arquivo de entrada>\n", argv[0]);
        return 1;
    }

    // Abertura do arquivo especificado pelo usuário:
    yyin = fopen(argv[1], "r");
    if (!yyin) {
        fprintf(stderr, "Erro ao abrir o arquivo %s\n", argv[1]);
        return 1;
    }

    // Variáveis para leitura e contagem de linhas:
    char line[1024]; 
    int line_number = 1;

    // Impressão do programa fonte com números de linha:
    printf("Programa fonte:\n");
    while (fgets(line, sizeof(line), yyin)) {
        printf("%3d: %s", line_number++, line);
    }
    printf("\n");

    // Volta ao início do arquivo
    rewind(yyin);

    // Chamada ao analisador sintático gerado pelo Bison
    int result = yyparse();


    // Fechamento do arquivo de entrada:
    if (fclose(yyin) != 0) {
        fprintf(stderr, "Erro ao fechar o arquivo %s\n", argv[1]);
        return 1;
    }

    // Mensagem de saída dependendo do resultado do parsing
    if (result == 0) {
        printf("Programa sintaticamente correto\n");
        printf("\n\n");
	    printf("\nSYMBOL   DATATYPE   TYPE   LINE NUMBER \n");
	    printf("_______________________________________\n\n");
	    int i=0;
	    for(i=0; i<count; i++) {
		    printf("%s\t%s\t%s\t%d\t\n", symbol_table[i].id_name, symbol_table[i].data_type, symbol_table[i].type, symbol_table[i].line_no);
	}
	for(i=0;i<count;i++) {
		free(symbol_table[i].id_name);
		free(symbol_table[i].type);
	}

    printf("\n\n");
    } else {
        printf("Programa sintaticamente incorreto\n");
        printf("\n\n");
    }

    // Retorno do resultado do parsing
    return result;
}
void insert_type() {
    strcpy(type, yytext);
}
void insert_name(){
    strcpy(name,yytext);
}

void add(char c) {
  q=search(yytext);
  if(!q) {
    if(c == 'A') {
         symbol_table[count].id_name=strdup(yytext);        
         symbol_table[count].data_type=strdup(type);     
         symbol_table[count].line_no=countn;    
         symbol_table[count].type=strdup("Array        ");
         count++;  
    }else if(c == 'M') {
         symbol_table[count].id_name=strdup(matrix_name);
         symbol_table[count].data_type=strdup(yytext);
         symbol_table[count].line_no=countn;
         symbol_table[count].type=strdup("Matrix       ");   
         count++;  
    }else if(c == 'V') {
         symbol_table[count].id_name=strdup(name);
         symbol_table[count].data_type=strdup(type);
         symbol_table[count].line_no=countn;
         symbol_table[count].type=strdup("Variable");   
         count++;  
    }else if(c == 'F') {
         symbol_table[count].id_name=strdup(function_name);
         symbol_table[count].data_type=strdup(type);
         symbol_table[count].line_no=countn;
         symbol_table[count].type=strdup("Function");   
         count++;  
    }
  }
}
int search(char *type) { 
    int i; 
    for(i=count-1; i>=0; i--) {
        if(strcmp(symbol_table[i].id_name, type)==0) {   
            return -1;
            break;  
        }
    } 
    return 0;
}
// Declaração externa para a variável yyin usada pelo Flex/Bison
extern FILE *yyin;

// Variável externa para número de linha, geralmente fornecida pelo analisador
extern int yylineno;

// Função de erro do Bison para reportar erros de parsing
void yyerror(const char *s) {
    fprintf(stderr, "Erro proximo a linha %d: %s\n", yylineno, s);
}