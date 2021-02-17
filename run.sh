rm -f main.o
rm -f calc.o
rm -f a.out
clear
gcc -Wall -g -c main.c
gcc -Wall -g -c calc.c -lm

gcc -o a.out main.o calc.o -lm

chmod a+x a.out
./a.out