/* 
1) Sorties: Un programme qui lit le co�t unitaire d'un produit, la quantit� achet�e et qui affiche le montant de la TPS, de la TVQ et le co�t total apr�s taxes.
2) Les entr�es:
- Le co�t unitaire d'un produit (coutUnitaire):
- La quantit� achet�e (quantiteAchetee):
3) Les donn�es internes:
- TPS (tps): 0.07
- TVQ (tvq): 0.075
4) Traitement : 
- Co�t total avant taxes (coutPartiel): coutPartiel = coutUnitaire * quantiteAchetee
- Montant de la TPS (montantTps): montantTps = coutPartiel * tps 
- Montant de la TVQ (montantTvq): montantTvq = (montantTps + coutPartiel) * tvq
- Co�t total apr�s taxes (coutTotal): coutTotal = coutPartiel + montantTps + montantTvq
*/

#include <iostream>
using namespace std;

int main() {

	// D�claration des variables:

	double const tps = 0.07;
	double const tvq = 0.075;
	double coutUnitaire = 0;
	int quantiteAchetee = 0;
	double coutPartiel = 0;
	double montantTps = 0;
	double montantTvq = 0;
	double coutTotal = 0;

	// Saisie des donn�es:

	cout << "Quelle est la quantite achetee? ";
	cin >> quantiteAchetee;

	cout << "Quel est le cout unitaire du produit? ";
	cin >> coutUnitaire;

	// Traitements:

	coutPartiel = coutUnitaire * quantiteAchetee;
	montantTps = coutPartiel * tps;
	montantTvq = (montantTps + coutPartiel) * tvq;
	coutTotal = coutPartiel + montantTps + montantTvq;

	// Affichage des r�sultats:

	cout << "Le cout avant taxes est de " << coutPartiel << " $" << endl;
	cout << "Le montant de la TPS est de " << montantTps << " $" << endl;
	cout << "Le montant de la TVQ est de " << montantTvq << " $" << endl;
	cout << "Le cout total apr�s taxes est de " << coutTotal << " $" << endl;
	

	return 0;
}