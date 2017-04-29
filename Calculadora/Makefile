# Fichero flex a compilar (sin extensión)
SOURCE=calc
# Ficheros auxiliares en .c
AUX=diccionario.c

$(SOURCE): lex.yy.c $(SOURCE).tab.c $(AUX)
	gcc -o $@ $^ -lm

lex.yy.c: $(SOURCE).l
	flex $<

$(SOURCE).tab.c $(SOURCE).tab.h: $(SOURCE).y
	bison -d $< 

clean:
	rm lex.yy.c $(SOURCE).tab.c $(SOURCE).tab.h $(SOURCE)
