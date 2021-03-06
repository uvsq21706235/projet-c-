#include "Moteur.h"
#include <iostream>
using namespace std;

		//constructeur de la classe Moteur
	Moteur::Moteur(Reservoir &res){
		origine = &res;
	}
	
		//changement du reservoir d'origine
	void Moteur::set_reservoir(Reservoir &res){
		origine = &res;
	}
	
		//alimentation du moteur
	void Moteur::alimentation(){
		origine->capacite -= 6;
		if (origine->capacite < 0) origine->capacite = 0;
		
	}
	
		//destructeur de la classe Moteur
	Moteur::~Moteur(){}
