/*
Pondération du travail de session : pondTravailSession = 0.4
Note du travail de session : noteTravailSession 
Résultat du travail de session : resultatTravailSession = pondTravailSession * noteTravailSession
Pondération de l'examen intra :pondExamIntra = 0.25
Note de l'examen intra : noteExamIntra
Résultat de l'examen intra: resultatExamIntra = pondExamIntra * noteExamIntra
Pondération de l'examen final : pondExamFinal = 0.35
Note de l'examen final : noteExamFinal
Résultat de l'examen final : resultatExamFinal = pondExamFinal * noteExamFinal
résultat finale : resultatFinal = resultatTravailSession + resultatExamIntra + resultatExamFinal 
*/

#include <iostream>
using namespace std;

int main() {

	float const pondTravailSession = 0.4;
	float noteTravailSession = 0;
	float resultatTravailSession = 0;
	float const pondExamIntra = 0.25;
	float noteExamIntra = 0;
	float resultatExamIntra = 0;
	float const pondExamFinal = 0.35;
	float noteExamFinal = 0;
	float resultatExamFinal = 0;
	float resultatFinal = 0;

	cout << "Quel est la note du travail de session? ";
	cin >> noteTravailSession;

	resultatTravailSession = pondTravailSession * noteTravailSession;

	cout << "Le resultat du travail de session est de " << resultatTravailSession << " %" << endl;

	cout << "Quel est la note de l'examen intra? ";
	cin >> noteExamIntra;

	resultatExamIntra = pondExamIntra * noteExamIntra;

	cout << "Le resultat de l'examen intra est de " << resultatExamIntra << " %" << endl;

	cout << "Quel est la note de l'examen final? ";
	cin >> noteExamFinal;

	resultatExamFinal = pondExamFinal * noteExamFinal;

	cout << "Le resultat de l'examen final est de " << resultatExamFinal << " %" << endl;

	resultatFinal = resultatTravailSession + resultatExamIntra + resultatExamFinal;

	cout << "le resultat final est de " << resultatFinal << " %" << endl;

	return 0;
}