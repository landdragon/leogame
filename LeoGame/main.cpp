#include <iostream>

using namespace std;

void main()
{
	char * deplacement = new char[8];

	while (strcmp (deplacement,"quitter") != 0 )
	{
		cout << "ou voulez vous aller ?" << endl << "(haut, bas, gauche, droite, quitter)" << endl;
		cin >> deplacement;
		cout << endl << endl;
	}
	delete (deplacement);
	return;
}