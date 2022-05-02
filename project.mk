a.exe: cricketmain.o view.o options.o add.o File1.o
	gcc cricketmain.o view.o options.o add.o File1.o

cricketmain.o: cricketmain.c
	gcc -c cricketmain.c

view.o: view.c
	gcc -c view.c

options.o: options.c
	gcc -c options.c

add.o: add.c
	gcc -c add.c

File1.o: File1.c
	gcc -c File1.c