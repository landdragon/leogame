#include <iostream>

using namespace std;

void main()
{
	char * deplacement = new char[8];
	bool EstCeQueJeContinue = true;


	while (EstCeQueJeContinue)
	{
		cout << "ou voulez vous aller ?" << endl << "(haut, bas, gauche, droite, quitter)" << endl;
		cin >> deplacement;

		if (strcmp(deplacement, "haut") == 0)
		{
			cout << "vous montez d'une case";
		}
		else if (strcmp(deplacement, "bas") == 0)
		{
			cout << "vous descendez d'une case";
		}
		else if (strcmp(deplacement, "gauche") == 0)
		{
			cout << "vous bougez vers la gauche";
		}
		else if (strcmp(deplacement, "droite") == 0)
		{
			cout << "vous bougez vers la droite";
		}
		else if (strcmp(deplacement, "quitter") == 0)
		{
			EstCeQueJeContinue = false;
		}
		else
			cout << "veuillez ecrire l'un des choix dans la liste";

			cout << endl << endl;
	}


	delete (deplacement);
	return;
}