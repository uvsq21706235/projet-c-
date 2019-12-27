#include "Reservoir.h"
#include <iostream>
using namespace std;


class Reservoir{
	
private:


public:

		
	Reservoir(int c){
		etat = true;
		//capacite = c;
		primaire = new Pompe(1);
		secondaire = new Pompe(0);
	}
	
		//permet de vider le reservoir
	void vidange(){
		etat = false;
	}
	
		//getter de la classe
	bool get_etat(){
		return etat;
	}
	
	int get_etat_pompe(){
	}
	
		// destructeur de la classe Reservoir
	~Reservoir(){}
	
};
