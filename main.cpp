#include "reservoir.h"
#include "Vanne.h"
#include "Pompe.h"
#include "moteur.h"
#include <iostream>
using namespace std;
/*
#define MAX13 120
#define MAX2 90
*/
int main(){
	
	Vanne VT12, VT23, V13, V12, V23;
	Reservoir Tank1(MAX13, "Tank1");
	Reservoir Tank2(MAX2, "Tank2");
	Reservoir Tank3(MAX13, "Tank2");
	Moteur M1(Tank1);
	Moteur M2(Tank2);
	Moteur M3(Tank3);
	
	cout << Tank1.get_capacite()<<endl;
	cout << Tank2.get_capacite()<<endl;
	
	Tank1.vidange();
	
	cout << Tank1.get_capacite()<<endl;
	
	VT12.power();
	Tank1.equilibre_res(VT12, VT23, Tank2, Tank3);
	cout << Tank1.get_capacite()<<endl;
	cout << Tank2.get_capacite()<<endl;
	
	int i;
	if (i=6, i>0, i--){
		M1.alimentation();
		M2.alimentation();
		M3.alimentation();
		
		Tank1.equilibre_res(VT12, VT23, Tank2, Tank3);
		
	cout << "1:" <<Tank1.get_capacite()<<endl;
	cout << "2:" <<Tank2.get_capacite()<<endl;
	cout << "3:" <<Tank3.get_capacite()<<endl;
		
	}
	
	cout <<Tank1.get_nom();
	
	//cout << M1.get_capacite();
	
}
