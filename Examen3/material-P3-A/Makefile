instr:	instr.tab.c instr.lex.c
	gcc -o instr instr.tab.c lex.yy.c
instr.tab.c:	instr.y
	bison -dv instr.y
instr.lex.c:	instr.l
	flex instr.l
clean:
	rm  instr.tab.c instr.tab.h instr.output lex.yy.c instr