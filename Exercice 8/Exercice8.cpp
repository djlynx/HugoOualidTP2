/*
1) Les sorties:
- Un programme qui fait la conversion de la pression atmosphérique exprimée en kilopascals à celle exprimée en atmosphères.
2) Les entrées : 
- La pression atmosphérique en kilopascals (pressionKilo)
3) Les données internes :
- Formule de conversion d'une atmosphère à kPa: 1 atm = 101 kPa
4) Les traitements:
- La pression atsmophérique en atmosphères (pressionAtm): pressionAtm = 101 * pressionKilo
*/

#include <iostream>
using namespace std;

int main() {
	double pressionKilo = 0;
	double pressionAtm = 0;

	// Saisie des données

	cout << "Quelle est la pression atmospherique en kilopascals? ";
	cin >> pressionKilo;

	// Traitements
	
	pressionAtm = 101 * pressionKilo;

	// Affichage des résultats

	cout << "La pression atmospherique en atmospheres equivaut a " << pressionAtm << endl;


	return 0;
}