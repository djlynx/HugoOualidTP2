/*
1) Les sorties: 
On veut connaître la hauteur d'un édifice de <<n>> étages
2) Les entrées:
Le nombre d'étages (nbrEtages)
3) Les données internes: 
La hauteur du rez-de-chaussée (hautRez): hautRez = 6m
La hauteur d'un étage (hautUnEtage): hautUnEtage = 4m
4) Les traitements:
La hauteur totale de l'édifice (hautTotale) : hautTotale = hautUnEtage * nbrEtages + hautRez
*/

#include <iostream>
using namespace std;

int main() {

	int nbrEtages = 0;
	double const hautRez = 6;
	double const hautUnEtage = 4;
	double hautTotale = 0;

	// Saisie des données:

	cout << "Combien d'etages y a-t-il? ";
	cin >> nbrEtages;

	// Traitements:

	hautTotale = hautUnEtage * nbrEtages + hautRez;

	// Affichage des résultats:

	cout << "La hauteur totale de l'edifice est de " << hautTotale << " m" << endl;


	return 0;
}