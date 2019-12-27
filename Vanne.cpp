#include "Vanne.h"
#include <iostream>
using namespace std;

class Vanne{
	
private:

public:
	
		// constructeur de la classe Vanne 
	Vanne();
	
	power(){
		etat = 1-etat;
	}
	
		// destructeur de la classe Vanne
		
	~Vanne(){}
};
