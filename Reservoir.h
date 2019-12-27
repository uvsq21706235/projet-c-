#ifndef _MOTEUR_H
#define _MOTEUR_H

#include "Pompe.h"
#include <iostream>
using namespace std;

class Reservoir{
	
private:

	bool etat;
	//int capacite;
	Pompe primaire;
	Pompe secondaire;

public:

		// constructeur de la classe Reservoir qui prend en argument la capacité du reservoir
		// et qui créé les deux pompes associées au moteur en appelant le constructeur
		// la variable etat est à true si le reservoir est plein, false sinon
	Reservoir(int c);
	
		//getter de la classe
	bool get_etat();
	int get_etat_pompe();
	
		//permet de vider le reservoir
	void vidange();
	
		//destructeur de la classe Reservoir
	~Reservoir();
	
};

#endif
