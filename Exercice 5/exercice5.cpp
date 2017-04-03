/*
Longueur du bloc rectangulaire: longueurBloc
Largeur du block rectangulaire: largeurBloc
Profondeur du bloc rectangulaire: profondeurBloc
Volume du bloc rectangulaire: volumeBloc = longueurBloc * largeurBloc * profondeurBloc
*/

#include <iostream>
using namespace std;

int main() {
	
	float longueurBloc = 0;
	float largeurBloc = 0;
	float profondeurBloc = 0;
	float volumeBloc = 0;

	cout << "Quelle est la longueur du bloc? ";
	cin >> longueurBloc;

	cout << "Quelle est la largeur du bloc? ";
	cin >> largeurBloc;

	cout << "Quelle est la profondeur du bloc? ";
	cin >> profondeurBloc;

	volumeBloc = longueurBloc * largeurBloc * profondeurBloc;

	cout << "Le volume du bloc rectangulaire est de: " << volumeBloc << " " << endl;

	return 0;
}