/*
1) Les sorties:
- Un programme qui lui permettra d'�valuer le montant total de ses d�penses pour un mois, ainsi que le montant d'argent qu'elle pourra attribuer � ses loisirs et au superflu.
- Le programme devra aussi lire le montant de ses ch�ques de paye
2) Les entr�es:
- Les d�penses pour la nourriture et les produits m�nagers (depensesNour)
- Les d�penses courantes (depensesCour)
- Le montant de la carte de transport en commun (montantTransport)
- Le montant du loyer (montantLoyer)
- Le montant total des factures mensuelles (montantFacture)
- Le montant des ch�ques de paye (montantCheque)
3) Les donn�es internes: 
- D�penses pour la nourriture et les produits m�nagers / d�penses courantes  X  4
- Montant de la carte de transport en commun / montant du loyer / montant total des factures mensuelles  X  1
- Le montant des ch�ques de paye (montantCheque)  X  2
4) Les traitements:
- Les d�penses hebdomadaires pour un mois (depensesHebdo): depensesHebdo = (depensesNour + depensesCour ) * 4
- Les d�penses mensuelles (depensesMens): depensesMens = (montantTransport + montantLoyer + montantFacture) 
- Le total des gains: totalGain = montantCheque * 2
- Le total des d�penses (totalDepenses): totalDepenses = depensesHebdo + depensesMens 
- Les b�n�fices (benefices): benefices = totalGain - totalDepenses
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

	// Saisie des donn�es:

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

	// Affichage des r�sultats:

	cout << "Les depenses hedomadaires pour un mois sont de " << depensesHebdo << " $" << endl;

	cout << "Les depenses mensuelles sont de " << depensesMens << " $" << endl;

	cout << "Le total des gains est de " << totalGains << " $" << endl;

	cout << "Le total des depenses est de " << totalDepenses << " $" << endl;

	cout << "Les benefices sont de " << benefices << " $" << endl;


	return 0;
}