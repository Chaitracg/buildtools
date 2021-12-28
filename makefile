Basic_codes.exe: main.o big2.o big3.o sumof2.o fact.o rev.o palindrome.o fibonacci.o sort.o
	gcc -o Basic_codes.exe main.o big2.o big3.o sumof2.o fact.o rev.o palindrome.o fibonacci.o sort.o
main.o: main.c
	gcc -c main.c
big2.o: big2.c
	gcc -c big2.c
big3.o: big3.c
	gcc -c big3.c
sumof2.o: sumof2.c
	gcc -c sumof2.c
fact.o: fact.c
	gcc -c fact.c
rev.o: rev.c
	gcc -c rev.c
palindrome.o: palindrome.c
	gcc -c palindrome.c
fibonnaci.o: fibonnaci.c
	gcc -c fibonnnaci.c
sort.o: sort.c
	gcc -c sort.c
clean:
	rm -rf *.o

