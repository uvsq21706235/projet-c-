run: all
	./exec
	
all: autentification.o
	g++ TEST.cpp autentification.o -o exec
	
autentification.o: autentification.cpp autentification.h
	g++ -c autentification.cpp

clean:
	rm -rf *.o
	rm -rf *.gch
