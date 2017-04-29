# Fichero flex a compilar (sin extensión)
SOURCE=procesador
# Ficheros auxiliares en .c
AUX=diccionario.c

$(SOURCE): lex.yy.c $(AUX)
	gcc -o $@ $^ -lfl

lex.yy.c: $(SOURCE).l
	flex $<

clean:
	rm lex.yy.c
