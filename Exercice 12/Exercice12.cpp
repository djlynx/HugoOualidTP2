/*
		Analyse:
1) Les sorties:
- Un programme qui détermine le montant du pourboire d’un serveur dans un restaurant
2) Les entrées :
- Le montant de la facture (montantFacture)
3) Les données internes:
- Le taux du pourboire (tauxPourb): tauxPourb = 0.15
4) Les traitements:
- Total du pourboire (totalPourb): totalPourb = tauxPourb * montantFacture
*/

#include <iostream>
using namespace std;

int main() {

	double const tauxPourb = 0.15;
	double montantFacture = 0;
	double totalPourb = 0;

	cout << "Quel est le montant de la facture? ";
	cin >> montantFacture;

	if (montantFacture > 1) {

		totalPourb = tauxPourb * montantFacture;

		cout << "Le total du pourboire est de " << totalPourb << " $" << endl;
	}

	else {

		cout << "Va pleurer dans ta cuisine lul" << endl;
	}




}