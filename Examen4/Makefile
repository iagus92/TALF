simplon:	simplon.tab.c simplon.lex.c
	gcc -o simplon simplon.tab.c lex.yy.c -lm
simplon.tab.c:	simplon.y
	bison -dv simplon.y
simplon.lex.c:	simplon.l
	flex simplon.l
clean:
	rm  simplon.tab.c simplon.tab.h simplon.output lex.yy.c simplon
