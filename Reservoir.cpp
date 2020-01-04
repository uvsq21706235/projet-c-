#include "Reservoir.h"
#include <iostream>
using namespace std;


class Reservoir{
	
private:


public:

		
	Reservoir(int c){
		etat = true;
		//capacite = c;
		primaire = Pompe(1);
		secondaire = Pompe(0);
	}
	
		//permet de vider le reservoir
	void vidange(){
		etat = false;
	}
	
		//getter de la classe
	bool get_etat(){
		return etat;
	}
	
		//retourne l'etat de la pompe primaire
	int get_etat_pompe_primaire(){
		return primaire.getEtatPompe;
	}
	
		//retourne l'etat de la pompe secondaire
	int get_etat_pompe_secondaire(){
		return secondaire.getEtatPompe;
	}
	
		// destructeur de la classe Reservoir
	~Reservoir(){
		delete[] primaire;
		delete[] secondaire;
	}
	
};
