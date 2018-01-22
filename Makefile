Queue: main.o mame.o crqu.o enqu.o dequ.o disp.o init.o
	gcc -o Queue main.o mame.o crqu.o enqu.o dequ.o disp.o init.o

init.o: init.c header.h declaration.h
	gcc -c  init.c header.h declaration.h
main.o: main.c header.h declaration.h
	gcc -c  main.c header.h declaration.h
mame.o: mame.c header.h declaration.h
	gcc -c  mame.c header.h declaration.h
enqu.o: enqu.c header.h declaration.h
	gcc -c  enqu.c header.h declaration.h
dequ.o: dequ.c header.h declaration.h
	gcc -c  dequ.c header.h declaration.h
crqu.o: crqu.c header.h declaration.h
	gcc -c  crqu.c header.h declaration.h
disp.o: disp.c header.h declaration.h
	gcc -c  disp.c header.h declaration.h

clean:
	rm *.o
	rm ./Queue
