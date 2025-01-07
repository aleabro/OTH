%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

extern int yylineno;
void yyerror (const char *s) ;
int yylex();
int vars[256];



// Declare functions
void print_token(int token);
void add_variable(char *name, int value);
int get_variable_value(char *name);
%}

%define parse.error verbose

%union {
    double num;
    char *st;
    char op;
    
}

%token <num> NUM BINARY ROMAN
%token <st> STR IDENTIFIER FUNC KEYWORD DATA_TYPE
%token <op> OPERATOR
//%token <fn> FUNCTION
%token WHETHER THEN OTHERWISE WHEN LET FROM TO STEP



%type <num> TERM 
//%type <str> statement

%right '='
%left  minus add
%left  '*' '/'
%right '^'
%start START
%%
START: START TERM ';' { printf("R: %f\n", $2); }
     | %empty

TERM: TERM minus TERM { $$ = $1 - $3; }
    | TERM add TERM { $$ = $1 + $3; }
    | TERM '*' TERM { $$ = $1 * $3; }
    | TERM '/' TERM { $$ = $1 / $3; }
    | TERM '^' TERM { $$ = pow($1, $3); }
    | IDENTIFIER '=' TERM   { $$ = $3; vars[(int)$1[0]] = $3; }
    | NUM /* default action: $$ = $1 */
    | IDENTIFIER { $$ = vars[(int)$1[0]]; }
    


%%

int main(void) {
    yyparse();
    return 0;
}

// Simple symbol table
void add_variable(char *name, int value) {
    // This is a simplified symbol table
    printf("Adding variable: %s = %d\n", name, value);
}

int get_variable_value(char *name) {
    // For simplicity, just return a dummy value
    printf("Getting value of variable: %s\n", name);
    return 42;
}

void yyerror (const char *s) {
  printf("Error in line %d: %s\n", yylineno, s);
}