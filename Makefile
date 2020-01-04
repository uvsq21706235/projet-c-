run: all
	./exec

all: Vanne.o Pompe.o reservoir.o moteur.o
	g++ main.cpp Vanne.o Pompe.o reservoir.o moteur.o -o exec

Vanne.o: Vanne.cpp Vanne.h
	g++ -c Vanne.cpp
	
Pompe.o: Pompe.cpp Pompe.h
	g++ -c Pompe.cpp

reservoir.o: Pompe.o Vanne.o reservoir.cpp reservoir.h
	g++ -c reservoir.cpp 
	
moteur.o: reservoir.o moteur.cpp moteur.h
	g++ -c moteur.cpp
	
clean:
	rm -rf *.o
	rm -rf *.gch
