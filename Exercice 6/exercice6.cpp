/*
Salaire de base d'un vendeur : salaireBase = 400$
Nombre de véhicules vendus: nbrVehiculesVendus
Commission : commission = 200$
Total de commissions : totalCommissions = commission * nbrVehiculesVendus
Total des ventes du vendeur : totalVentes 
Bonus de vente : bonusVente = 0.05
Le salaire final :   salaireFinal= salaireBase + totalCommissions + bonusVente *totalVentes
*/


#include <iostream>
using namespace std;

int main() {
	
	int const salaireBase = 400;
	int nbrVehiculesVendus = 0;
	int commission = 0;
	int totalCommissions = 0;
	float totalVentes = 0;
	float const bonusVente = 0.05;
	float salaireFinal = 0;

	commission = 200;


	// Total de commissions :

	cout << "Combien de voitures ont ete vendues? ";
	cin >> nbrVehiculesVendus;

	totalCommissions = commission * nbrVehiculesVendus;

	cout << "Quel est votre total de ventes? ";
	cin >> totalVentes;

	// Salaire final

	salaireFinal = salaireBase + totalCommissions + (bonusVente * totalVentes);

	cout << "Votre salaire final est de " << salaireFinal << " $" << endl;

	return 0;
}