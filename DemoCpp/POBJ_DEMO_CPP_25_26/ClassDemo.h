//-----------------------------------------------------------------------------------//
// Nom du projet 		: POBJ DEMO C++
// Nom du fichier 		: ClassDemo.cpp
// Date de création 	: 21.11.2023
// Date de modification : xx.xx.20xx
//
// Auteur 				: Philou (Ph. Bovey)
//
// Description          : 
//
// Remarques :          : 
//----------------------------------------------------------------------------------//
#ifndef CLASSE_DEMO_H 
#define CLASSE_DEMO_H

#include <string>

// passage par référence en C //
void Convertir(int valAConv, char* binaire);

void Convertir(int valAConv, char (&binaire)[100]);


#endif // !CLASSE_DEMO_H 

