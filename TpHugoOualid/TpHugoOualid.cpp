#include <iostream>
using namespace std;

#include <conio.h>  // pour _kbhit() et _getch()
#include <time.h>  // pour time(int)
#include <stdlib.h>  // pour srand(int) et rand()
#include "RockUtiles.h"
// pour la gestion de l'�cran

// declaration de variable
const int nbLigne = 30;
const int debutLigne = 0;
const int nbColonne = 70;
const int debutColonne = 0;
int valTouche;
int direction;
int posX = 0;
int posY = 0;

// Partie I
// --------
void afficherTerrain(int nbLignes, int nbColonnes);
int recupererTouche();
int calculerDirectionTouche(int touche);
void positionAleatoire(int nbLignes, int nbColonnes, int &posX, int &posY);
void deplacerSerpentI(int direction, int &posX, int &posY);

// Partie II
// ---------
int saisirNiveau();
void creerSouris(int nbLignes, int nbColonnes,
	int sourisX[], int sourisY[], int nbSouris);
void afficherSouris(int sourisX[], int sourisY[], int nbSouris);
void deplacerSerpentII(int direction, int serpentX[], int serpentY[],
	int &tailleSerpent,
	int sourisX[], int sourisY[], int &nbSouris);
/* ou
*/
void deplacerSerpentII(int direction, int serpentX[], int serpentY[],
	int &indiceTete, int &indiceQueue,
	int sourisX[], int sourisY[], int &nbSouris);
bool testerCollision(int x, int y, int sourisX[], int sourisY[], int &nbSouris);


// Partie III (BONUS)
// ------------------
void deplacerSouris(int sourisX[], int sourisY[], int nbSouris);
void placerMurs(int nbLignes, int nbColonnes, int nbMurs);




//  fonction principale
//  -------------------
int main()
{

	srand((unsigned int)time(NULL));
	resetPalette();
	positionAleatoire(nbLigne, nbColonne, posX, posY);
	afficherTerrain(nbLigne, nbColonne);
	valTouche = 0;


	do
	{
		valTouche = recupererTouche();
		//cout << valTouche << endl;
		direction = calculerDirectionTouche(valTouche);
		//cout << direction << endl;
		deplacerSerpentI(direction, posX, posY);
		Sleep(500);
	} while (valTouche != 27);
}




// ************
// * PARTIE I *
// ************
void afficherTerrain(int nbLignes, int nbColonnes)
/*
T�che: afficher le contour du terrain
Param�tres: le nombre de lignes et de colonnes du terrain rectangulaire
*/
{
	setDimensionFenetre(0, 0, nbColonnes + 1, nbLignes + 1);
	cadre(0, 0, nbColonnes, nbLignes, BACKGROUND_GREEN);
}

int recupererTouche()
/*
T�che: tester si le joueur a appuy� sur une touche
Retour: retourner le code ASCII de la touche press�e, -1 sinon
*/
{
	// 
	//	utiliser la fonction _kbhit() de conio.h qui retourne une valeur non
	//
	//		nulle si une touche a �t� press�e
	//  � compl�ter
	if (_kbhit != 0)
	{
		return _getch();
	}
	else
	{
		return -1;
	}
}

int calculerDirectionTouche(int touche)
/*
T�che: calculer la direction correspondant � une touche ou -1
Param�tre: le code d'une touche (w, a, s ou d ou bien fleche haut, bas , gauche, droite)
Retour: la direction qui correspond � la touche
(0: droite, 1: gauche, 2: haut, 3: bas)
*/
{


	if (valTouche == 'd' || valTouche == 'D')
	{
		direction = 0;
	}
	else if (valTouche == 'a' || valTouche == 'A')
	{
		direction = 1;
	}
	else if (valTouche == 'w' || valTouche == 'W')
	{
		direction = 2;
	}
	else if (valTouche == || valTouche == 119)
	{
		direction = 3;
	}
	else
	{
		direction = -1;
	}

	return direction;
}

void positionAleatoire(int nbLignes, int nbColonnes, int &posX, int &posY)
/*
T�che: calculer une position al�atoire sur le terrain
Param�tres: les dimensions du terrain en entr�e et les coordonn�es de la
position al�atoire en sortie
*/
{

	posX = debutColonne + 1 + rand() % (nbColonnes - 2);
	posY = debutLigne + 1 + rand() % (nbLignes - 2);
	gotoXY(posX, posY);

}

void deplacerSerpentI(int direction, int &posX, int &posY)
/*
T�che: d�placer le serpent d'une seule case dans la direction donn�e. Le
serpent est � l'�cran avant l'appel et au retour de la fonction
Param�tres: la direction du serpent en entr�e, et la position du serpent en
entr�e / sortie
*/
{
	gotoXY(posX, posY);
	cout << '$';

	while (_kbhit == 0 && valTouche != 27)
	{
		switch (direction)
		{
		case(0):
			cout << posX++ << endl;
			break;
		case(1):
			cout << posX-- << endl;
			break;
		case(2):
			cout << posY++ << endl;
			break;
		case(3):
			cout << posY-- << endl;
			break;
		}
		gotoXY(posX, posY);
		cout << char(178);
		Sleep(500);
	}

}



