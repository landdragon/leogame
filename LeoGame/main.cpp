#include <iostream>
#include <windows.h> 

using namespace std;

void main()
{
	char * deplacement = new char[8];
	bool EstCeQueJeContinue = true;
	int map1[9][9] =  { { 0,0,0,0,0,0,0,0,0 },
						{ 0,0,0,0,0,0,0,0,0 },
						{ 0,0,0,0,0,0,0,0,0 },
						{ 0,0,0,0,0,0,0,0,0 },
						{ 0,0,0,0,0,0,0,0,0 },
						{ 0,0,0,0,0,0,0,0,0 },
						{ 0,0,0,0,0,0,0,0,0 },
						{ 0,0,0,0,0,0,0,0,0 },
						{ 0,0,0,0,0,0,0,0,0 } };
	int x = 1;
	int y = 7;


	

	while (EstCeQueJeContinue)
	{
		cout <<"x : "<< x << " , y : " << y <<endl <<endl;

		cout << "ou voulez vous aller ?" << endl << "(haut, bas, gauche, droite, quitter)" << endl;
		cin >> deplacement;

		if (strcmp(deplacement, "haut") == 0)
		{
			if (x > 0)
			{
				x--;
				cout << "vous montez d'une case";
			}
			else
			{
				cout << "un magicien vous crie dans les oreilles :";
				Sleep(1000);
				cout << " VOUS NE PASSEREZ...";
				Sleep(1000);
				cout << " PAS !!!";
			}
		}
		else if (strcmp(deplacement, "bas") == 0)
		{
			if (x < 8)
			{
				x++;
				cout << "vous descendez d'une case";
			}
			else
			{
				cout << "un magicien vous crie dans les oreilles :";
				Sleep(1000);
				cout << " VOUS NE PASSEREZ...";
				Sleep(1000);
				cout << " PAS !!!";
			}
		}
		else if (strcmp(deplacement, "gauche") == 0)
		{
			if (y > 0)
			{
				y--;
				cout << "vous bougez vers la gauche";
			}
			else
			{
				cout << "un magicien vous crie dans les oreilles :";
				Sleep(1000);
				cout << " VOUS NE PASSEREZ...";
				Sleep(1000);
				cout << " PAS !!!";
			}
		}
		else if (strcmp(deplacement, "droite") == 0)
		{
			if (y < 8)
			{
				y++;
				cout << "vous bougez vers la droite";
			}
			else
			{
				cout << "un magicien vous crie dans les oreilles :";
				Sleep(1000);
				cout << " VOUS NE PASSEREZ...";
				Sleep(1000);
				cout << " PAS !!!";
			}
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