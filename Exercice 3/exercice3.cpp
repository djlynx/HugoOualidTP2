/*
Taux horaire: tauxHoraire
Nombre d'heures travaillées : nbrHeuresTravaillees
Salaire brut d'un employé: salaireBrut = tauxHoraire * nbrHeuresTravaillees
*/


#include <iostream>
using namespace std;

int main() {
	double tauxHoraire = 0;
	double nbrHeuresTravaillees = 0;
	double salaireBrut = 0;

	cout << "Quel est votre taux horaire ? ";
	cin >> tauxHoraire;

	cout << "Combien d'heures avez-vous travaillees ? ";
	cin >> nbrHeuresTravaillees;

	salaireBrut = tauxHoraire * nbrHeuresTravaillees;

	cout << "Votre salaire est de " << salaireBrut << " $" << endl;

	return 0;
}
