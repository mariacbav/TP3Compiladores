all:
	clear
	flex lex.l
	bison -dy -Wno-yacc translate.y 
	gcc lex.yy.c y.tab.c -o myparser