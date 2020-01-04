#include "autentification.h"

bool login (const string &user, const string &password)
{
	string tmp = user + " " + password;
	
	//ouverture du fichier user.txt en mode lecture
	ifstream fichier("user.txt");

	if(fichier)
	{
		//L'ouverture s'est bien passée, on peut donc lire

		string ligne; //Une variable pour stocker les lignes lues

		while(getline(fichier, ligne)) //Tant qu'on n'est pas à la fin, on lit
		{
			if (ligne == tmp){
			//cout << ligne << endl;
			cout << endl << "vous êtes maintenant connectés en tant que " << user << endl << endl;
			return true;
			}
		}	
		
		cout << endl << "identifiant ou mot de passe incorrect" <<endl << endl;
    }
	else
	{
		cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl;
	}
	return false;
}

bool autentification(string &user, string &password)
{
	cout << "entrer l'identifiant: ";
	cin >> user;
	cout << "entrer le mot de passe: ";
	cin >> password;
	
	return login (user, password);
}
