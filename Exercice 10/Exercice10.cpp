/*
1) Les sorties:
- Un programme qui lui permettra d'évaluer le montant total de ses dépenses pour un mois, ainsi que le montant d'argent qu'elle pourra attribuer à ses loisirs et au superflu.
- Le programme devra aussi lire le montant de ses chèques de paye
2) Les entrées:
- Les dépenses pour la nourriture et les produits ménagers (depensesNour)
- Les dépenses courantes (depensesCour)
- Le montant de la carte de transport en commun (montantTransport)
- Le montant du loyer (montantLoyer)
- Le montant total des factures mensuelles (montantFacture)
- Le montant des chèques de paye (montantCheque)
3) Les données internes: 
- Dépenses pour la nourriture et les produits ménagers / dépenses courantes  X  4
- Montant de la carte de transport en commun / montant du loyer / montant total des factures mensuelles  X  1
- Le montant des chèques de paye (montantCheque)  X  2
4) Les traitements:
- Les dépenses hebdomadaires pour un mois (depensesHebdo): depensesHebdo = (depensesNour + depensesCour ) * 4
- Les dépenses mensuelles (depensesMens): depensesMens = (montantTransport + montantLoyer + montantFacture) 
- Le total des gains: totalGain = montantCheque * 2
- Le total des dépenses (totalDepenses): totalDepenses = depensesHebdo + depensesMens 
- Les bénéfices (benefices): benefices = totalGain - totalDepenses
*/

#include <iostream>
using namespace std;

int main() {

	double depensesNour;
	double depensesCour;
	double montantTransport;
	double montantLoyer;
	double montantFacture;
	double montantCheque;
	double depensesHebdo;
	double depensesMens;
	double totalGains;
	double totalDepenses;
	double benefices;

	// Saisie des données:

	cout << "Quelles sont les depenses hebdomadaires pour la nourriture et les produits menagers? ";
	cin >> depensesNour;

	cout << "Quelles sont les depenses hebdomadaires courantes? ";
	cin >> depensesCour;

	cout << "Quel est le montant mensuel de la carte de transport en commun? ";
	cin >> montantTransport;

	cout << "Quel est le montant mensuel du loyer? ";
	cin >> montantLoyer;

	cout << "Quel est le montant total des factures mensuelles? ";
	cin >> montantFacture;

	cout << "Quel est le montant des cheques de paye? ";
	cin >> montantCheque;

	// Traitements:

	depensesHebdo = (depensesNour + depensesCour) * 4;

	depensesMens = (montantTransport + montantLoyer + montantFacture);

	totalGains = montantCheque * 2;

	totalDepenses = depensesHebdo + depensesMens;

	benefices = totalGains - totalDepenses;

	// Affichage des résultats:

	cout << "Les depenses hedomadaires pour un mois sont de " << depensesHebdo << " $" << endl;

	cout << "Les depenses mensuelles sont de " << depensesMens << " $" << endl;

	cout << "Le total des gains est de " << totalGains << " $" << endl;

	cout << "Le total des depenses est de " << totalDepenses << " $" << endl;

	cout << "Les benefices sont de " << benefices << " $" << endl;


	return 0;
}