#ifndef _MOTEUR_H
#define _MOTEUR_H

#include "Pompe.h"
#include <iostream>
using namespace std;

class Reservoir{
	
private:

	bool etat; //true si le reservoir est plein, false sinon
	//int capacite;
	Pompe primaire;
	Pompe secondaire;

public:

		// constructeur de la classe Reservoir qui prend en argument la capacité du reservoir
		// et qui créé les deux pompes associées au moteur en appelant le constructeur
		// la variable etat est à true si le reservoir est plein, false sinon
	Reservoir(int c);
	
		//retourne l'etat du reservoir
	bool get_etat();
	
		//retourne l'etat de la pompe primaire
	int get_etat_pompe_primaire();
	
		//retourne l'etat de la pompe secondaire
	int get_etat_pompe_secondaire();
	
		//permet de vider le reservoir
	void vidange();
	
		//destructeur de la classe Reservoir
	~Reservoir();
	
};

#endif
