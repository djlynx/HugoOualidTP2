/*
1) Les sorties:
- Un programme qui fait la conversion de la pression atmosph�rique exprim�e en kilopascals � celle exprim�e en atmosph�res.
2) Les entr�es : 
- La pression atmosph�rique en kilopascals (pressionKilo)
3) Les donn�es internes :
- Formule de conversion d'une atmosph�re � kPa: 1 atm = 101 kPa
4) Les traitements:
- La pression atsmoph�rique en atmosph�res (pressionAtm): pressionAtm = 101 * pressionKilo
*/

#include <iostream>
using namespace std;

int main() {
	double pressionKilo = 0;
	double pressionAtm = 0;

	// Saisie des donn�es

	cout << "Quelle est la pression atmospherique en kilopascals? ";
	cin >> pressionKilo;

	// Traitements
	
	pressionAtm = 101 * pressionKilo;

	// Affichage des r�sultats

	cout << "La pression atmospherique en atmospheres equivaut a " << pressionAtm << endl;


	return 0;
}