/*#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	//ouverture en ecriture du fichier
	// ios::app permet de spécifier l'ecriture en fin de fichier
   ofstream monFlux("user.txt", ios::app);

   

	if(monFlux)  //On teste si tout est OK
	{
    //Tout est OK, on peut utiliser le fichier
		cout <<endl << "tout est OK" << endl << endl;
	}
else
{
    cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
}
   return 0;
}

*/
#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include "autentification.h"
using namespace std; 
/*
int main()
{
	bool logged = false;
	string user = "root";
	string password = "rot";
	
	string tmp = user + " " + password;
	
   ifstream fichier("user.txt");

   if(fichier)
   {
      //L'ouverture s'est bien passée, on peut donc lire

      string ligne; //Une variable pour stocker les lignes lues

      while(getline(fichier, ligne)) //Tant qu'on n'est pas à la fin, on lit
      {
		  if (ligne == tmp){
			cout << ligne << endl;
			cout << "vous êtes maintenant connectés en tant que " << user << endl << endl;
			logged = true;
			break;
		 }
      }
      if (!logged)
		cout << "identifiant ou mot de passe incorrect" <<endl << endl;
   }
   else
   {
      cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl;
   }

   return 0;
}*/
int main(){
	string user;
	string password;
	
	autentification (user, password);
	
	return 0;
}
