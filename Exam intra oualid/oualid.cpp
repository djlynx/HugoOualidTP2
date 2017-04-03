#include <iostream>
using namespace std;


int main() {

	int nbGroupes = 0;
	int nbCours = 0;
	int nbEleves = 0;
	int numGroupe = 0;
	int numEleve = 0;
	double noteParCours = 0;
	double moyAuxCours = 0;
	double sommeNotes = 0;
	double sommeMoyEleve = 0;
	double moyenneGroupe = 0;


	cout << "Nombre de groupes? ";
	cin >> nbGroupes;

	cout << "Groupe ";
	cin >> numGroupe;

	if (numGroupe == 1) {

		cout << "nombre de cours? ";
		cin >> nbCours;

		cout << "nombre d'eleves? ";
		cin >> nbEleves;


		for (int b = 1; b <= nbEleves; b++) {

			cout << " eleve No ";
			cin >> numEleve;

			cout << "note au cours No 1? ";
			cin >> noteParCours;

			cout << "note au cours No 2? ";
			cin >> noteParCours;

			sommeNotes += noteParCours;
			moyAuxCours = sommeNotes / nbCours;

			cout << "moyenne au cours : " << moyAuxCours << endl;

			sommeMoyEleve += moyAuxCours;
			moyenneGroupe = sommeMoyEleve / nbEleves;

		}
	}

	else if (numGroupe == 2) {

		cout << "nombre de cours? ";
		cin >> nbCours;

		cout << "nombre d'eleves? ";
		cin >> nbEleves;

		for (int c = 1; c <= numGroupe; c++) {

			cout << " eleve No ";
			cin >> numEleve;

			cout << "note au cours No 1? ";
			cin >> noteParCours;

			cout << "note au cours No 2? ";
			cin >> noteParCours;

			sommeNotes += noteParCours;
			moyAuxCours = sommeNotes / nbCours;

			cout << "moyenne au cours : " << moyAuxCours << endl;

		}
	}

	else (numGroupe == 3);

		cout << "nombre de cours? ";
	cin >> nbCours;

	cout << "nombre d'eleves? ";
	cin >> nbEleves;


	for (int d = 1; d <= nbEleves; d++) {

		cout << " eleve No ";
		cin >> numEleve;

		cout << "note au cours No 1? ";
		cin >> noteParCours;

		cout << "note au cours No 2? ";
		cin >> noteParCours;

		cout << "note au cours No 3? ";
		cin >> noteParCours;

		cout << "note au cours No 4? ";
		cin >> noteParCours;

		sommeNotes += noteParCours;
		moyAuxCours = sommeNotes / nbCours;

		cout << "moyenne au cours : " << moyAuxCours << endl;
	}
}

	

