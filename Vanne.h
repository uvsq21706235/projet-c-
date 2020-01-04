#ifndef _VANNE_H
#define _VANNE_H

#include <iostream>
using namespace std;

class Vanne{
	friend class Reservoir;
	
private:
		// etat égal à 1 si la vanne est fermée, à 0 si la vanne est ouverte,
	int etat;

public:
	
		// constructeur de la classe Vanne 
	Vanne();
	
		// permet d'ouvrir et de fermer la vanne
	void power();
	
		
	
		// destructeur de la classe Vanne
		
	~Vanne();
};

#endif
