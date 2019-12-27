#include "Pompe.h"
#include <iostream>
using namespace std;

class Pompe{
	
private:

public:

		//constructeur de la classe pompe qui prend en argument l'état initial de la pompe
	Pompe (int e){
		etat = e;
	}
	
		//permet d'activer ou de desactiver la pompe
	power(){
		etat = 1-etat;
	}
	
		//permet de déclancher une panne
	panne(){
		etat = -1;
	}
	
	
		//destructeur de la classe Pompe
	~Pompe(){}
	
	
};
