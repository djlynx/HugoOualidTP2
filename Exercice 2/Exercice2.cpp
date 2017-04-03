/* 
1) Sorties: Un programme qui lit le coût unitaire d'un produit, la quantité achetée et qui affiche le montant de la TPS, de la TVQ et le coût total après taxes.
2) Les entrées:
- Le coût unitaire d'un produit (coutUnitaire):
- La quantité achetée (quantiteAchetee):
3) Les données internes:
- TPS (tps): 0.07
- TVQ (tvq): 0.075
4) Traitement : 
- Coût total avant taxes (coutPartiel): coutPartiel = coutUnitaire * quantiteAchetee
- Montant de la TPS (montantTps): montantTps = coutPartiel * tps 
- Montant de la TVQ (montantTvq): montantTvq = (montantTps + coutPartiel) * tvq
- Coût total après taxes (coutTotal): coutTotal = coutPartiel + montantTps + montantTvq
*/

#include <iostream>
using namespace std;

int main() {

	// Déclaration des variables:

	double const tps = 0.07;
	double const tvq = 0.075;
	double coutUnitaire = 0;
	int quantiteAchetee = 0;
	double coutPartiel = 0;
	double montantTps = 0;
	double montantTvq = 0;
	double coutTotal = 0;

	// Saisie des données:

	cout << "Quelle est la quantite achetee? ";
	cin >> quantiteAchetee;

	cout << "Quel est le cout unitaire du produit? ";
	cin >> coutUnitaire;

	// Traitements:

	coutPartiel = coutUnitaire * quantiteAchetee;
	montantTps = coutPartiel * tps;
	montantTvq = (montantTps + coutPartiel) * tvq;
	coutTotal = coutPartiel + montantTps + montantTvq;

	// Affichage des résultats:

	cout << "Le cout avant taxes est de " << coutPartiel << " $" << endl;
	cout << "Le montant de la TPS est de " << montantTps << " $" << endl;
	cout << "Le montant de la TVQ est de " << montantTvq << " $" << endl;
	cout << "Le cout total après taxes est de " << coutTotal << " $" << endl;
	

	return 0;
}