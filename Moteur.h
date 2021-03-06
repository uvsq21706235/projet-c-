#ifndef _MOTEUR_H
#define _MOTEUR_H

#include "reservoir.h"
#include <iostream>
using namespace std;

class Moteur{
	
private:
	
	Reservoir *origine;

public:

		//constructeur de la classe Moteur
	Moteur(Reservoir &res);
	
		//changement du reservoir d'origine
	void set_reservoir(Reservoir &res);
	
		//alimentation du moteur
	void alimentation();
	
		//destructeur de la classe Moteur
	~Moteur();
	
};

#endif
