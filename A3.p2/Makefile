
Main: Main.c finding_divisors.o string_find.o substring.o
	gcc Main.c -o Main finding_divisors.o string_find.o substring.o

finding_divisors.o: finding_divisors.c finding_divisors.h
	gcc -c finding_divisors.c

string_find.o: string_find.c string_find.h
	gcc -c string_find.c

substring.o: substring.c substring.h
	gcc -c substring.c


Clean:
	rm *.o