all: liboper
	gcc -L . usooper.c -o usooper -loper
oper.o:
	gcc -c oper.c
liboper: oper.o
	ar rc liboper.a oper.o
clean:
	rm -f usooper.txt usooper oper.o liboper.a
