/*
1) Les sorties: 
On veut conna�tre la hauteur d'un �difice de <<n>> �tages
2) Les entr�es:
Le nombre d'�tages (nbrEtages)
3) Les donn�es internes: 
La hauteur du rez-de-chauss�e (hautRez): hautRez = 6m
La hauteur d'un �tage (hautUnEtage): hautUnEtage = 4m
4) Les traitements:
La hauteur totale de l'�difice (hautTotale) : hautTotale = hautUnEtage * nbrEtages + hautRez
*/

#include <iostream>
using namespace std;

int main() {

	int nbrEtages = 0;
	double const hautRez = 6;
	double const hautUnEtage = 4;
	double hautTotale = 0;

	// Saisie des donn�es:

	cout << "Combien d'etages y a-t-il? ";
	cin >> nbrEtages;

	// Traitements:

	hautTotale = hautUnEtage * nbrEtages + hautRez;

	// Affichage des r�sultats:

	cout << "La hauteur totale de l'edifice est de " << hautTotale << " m" << endl;


	return 0;
}