all: program1

main.o:
	gcc -c main.c

a_functions.o: a_functions.c a.h
	gcc -c a_functions.c

b_functions.o: b_functions.c b.h
	gcc -c b_functions.c

c_functions.o: c_functions.c c.h
	gcc -c c_functions.c

d_functions.o: d_functions.c d.h
	gcc -c d_functions.c
	
program1: main.o a_functions.o b_functions.o c_functions.o d_functions.o
	gcc main.o a_functions.o b_functions.o c_functions.o d_functions.o -o program1
	
install:
	install program1 -t /usr/local/bin

#Lämpligast är att placera programmet i /usr/local/bin
#/usr eftersom katalogen delas mellan användare
#/local/bin eftersom /bin agerar samlingsplats för körbara program

uninstall:
	rm -f /usr/local/bin/program1

clean:
	rm -f *.o program1

program 1: install clean
