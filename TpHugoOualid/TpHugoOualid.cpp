#include <iostream>
using namespace std;

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "RockUtiles.h"
#include <conio.h>

using namespace std;
//variable
int GrandeurSerpent = 2;
char direction = 'd';
char Terrain[20][30];
int corpsX;
int corpsY;
int corpsComplet;

//fonction
void CreeTerrain();
void DessinerTerrain();
void Random(int &x, int &y);
bool TerrainLibre(int &x, int &y);
void CreeSouris();
bool Serpent(int &x, int &y);
bool Mouvement(int &x, int &y);
void Effacer(int x, int y);
void Passer(int x, int y);
void ToucheClavier(int &x, int &y);
bool Fin(int &x, int &y);

//Debut du programme
int main()
{
	int x = 10, y = 15;
	CreeTerrain();
	CreeSouris();
	DessinerTerrain();
	while (Fin(x, y))
	{
		cout << direction;
		if (_kbhit())
		{
			direction = _getch();
			ToucheClavier(x, y);
		}
		else
			ToucheClavier(x, y);
		if (!Mouvement(x, y))
			break;
		Passer(x, y);
		system("cls");
		DessinerTerrain();

	}
	cout << "End!" << endl;
	return 0;
}
//Limite du terrain
void CreeTerrain()
{
	for (int i = 0; i < 20; i++)
		for (int j = 0; j < 30; j++)
			Terrain[i][j] = ' ';
}
//Cadre du terrain
void DessinerTerrain()
{
	for (int i = 0; i <= 30; i++)
		cout << "- ";
	cout << endl;
	for (int i = 0; i < 20; i++)
	{
		cout << "| ";
		for (int j = 0; j < 30; j++)
			cout << Terrain[i][j] << " ";
		cout << "|" << endl;
	}
	for (int i = 0; i <= 30; i++)
		cout << "- ";
	cout << endl;
}
//Jamais le meme casting
void Random(int &x, int &y)
{
	srand(time(0));
	x = rand() % 10;
	y = rand() % 10;
}

//terrain de possibiliter de mouvement
bool TerrainLibre(int &x, int &y)
{
	if (Terrain[x][y] == ' ')
		return 1;
	return 0;
}
//Creation de la souris
void CreeSouris()
{
PositionSouris:
	int x = 0, y = 0;
	Random(x, y);
	if (TerrainLibre(x, y))
		Terrain[x][y] = 'O';
	else
		goto PositionSouris;
}
//Agrandissement du serpent
bool Serpent(int &x, int &y)
{
	if (Terrain[x][y] == 'O')
	{
		GrandeurSerpent++;
		return 1;
	}
	return 0;
}
//Mouvement du serpent
bool Mouvement(int &x, int &y)
{
	
	clock();
	if (Serpent(x, y))
	{
		Terrain[x][y] = '#';
		CreeSouris();
		return 1;
	}
	if (TerrainLibre(x, y))
	{
		Terrain[x][y] = '#';
		return 1;
	}
	return 0;
}
//Probleme** Suppresion de l'ancien mouvement
void Effacer(int x, int y)
{
	Terrain[x][y] = ' ';
}

void Passer(int x, int y)
{
	Effacer(corpsX, corpsY);
	for (int i = 0; i < GrandeurSerpent; i++)
		corpsX = i;
	for (int j = 0; j < GrandeurSerpent; j++)
		corpsY = j;
	corpsComplet = GrandeurSerpent;
}
//Touche pour faire le mouvement
void ToucheClavier(int &x, int &y)
{
	switch (direction)
	{
	case 'd':
	{
		y++;
		break;
	}
	case 'a':
	{
		y--;
		break;
	}
	case 's':
	{
		x++;
		break;
	}
	case 'w':
	{
		x--;
		break;
	}
	}
}
// Fin du programme
bool Fin(int &x, int &y)
{
	if (Terrain[x][y] == ' ' || 'O') {
		return 1;

	}
	return 0;
}
