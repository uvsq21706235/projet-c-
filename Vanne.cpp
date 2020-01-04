#include "Vanne.h"
#include <iostream>
using namespace std;

		// constructeur de la classe Vanne 
	Vanne::Vanne(){
		etat = 0;
	}
	
	void Vanne:: power(){
		etat = 1-etat;
	}
	
		// destructeur de la classe Vanne
		
	Vanne::~Vanne(){}

