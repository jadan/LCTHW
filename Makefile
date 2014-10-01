all:
	cc -Wall -g ex3.c -o ex3
	cc -Wall -g ex4.c -o ex4
	cc -Wall -g ex5.c -o ex5
	cc -Wall -g ex6.c -o ex6
	cc -Wall -g ex8.c -o ex8
	cc -Wall -g ex9.c -o ex9
	cc -Wall -g ex10.c -o ex10
	cc -Wall -g ex11.c -o ex11
	cc -Wall -g ex15.c -o ex15
	cc -Wall -g ex16.c -o ex16
	cc -Wall -g ex16ec.c -o ex16ec
	cc -Wall -g ex17.c -o ex17
	cc -Wall -g ex18.c -o ex18
	cc -Wall -g -c -o object.o object.c
	cc -Wall -g ex19.c object.o -o ex19

clean:
	rm -rf *dSYM
	rm -rf ex3
	rm -rf ex4
	rm -rf ex5
	rm -rf ex6
	rm -rf ex8
	rm -rf ex9
	rm -rf ex10
	rm -rf ex11
	rm -rf ex15
	rm -rf ex16
	rm -rf ex16ec
	rm -rf ex17
	rm -rf ex18
	rm -rf ex19
	rm -rf object.o


