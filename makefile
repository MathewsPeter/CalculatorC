
run:compile
	chmod a+x calc
	./calc

compile: clean
	gcc -Wall -g -c main.c
	gcc -Wall -g -c calc.c
	gcc -o calc main.o calc.o -lm

clean:
	rm -f main.o
	rm -f calc.o
	rm -f a.out
	clear