/*
1) Les sorties: 
- Un programme qui permet de lire une température en degré Farenheit et de la convertir en degré Celsius
2) Les entrées: 
- La température en drgré Farenheit (tempFarenheit) 
3) Les données internes : 
- La formule de conversion : C = (F - 32) / 9 * 5
4) Les traitements:
- La température en degré Celcius (tempCelcius): tempCelcius = (tempFarenheit - 32) / 9 * 5
*/

#include <iostream>
using namespace std;

int main() {

	double tempFarenheit = 0;
	double tempCelcius = 0;

	// Saisie des données: 

	cout << "Quelle est la temperature en degre Farenheit? ";
	cin >> tempFarenheit;

	// Traitements:

	tempCelcius = (tempFarenheit - 32) / 9 * 5;

	// Affichage des résultats:

	cout << "La temperature en degre Celcius est de " << tempCelcius << " degres." << endl;
		
		
	return 0;
}