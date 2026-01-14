/*----------------------------------------------------------------------------------
// Projet Name 			: POBJ_DemoCPP_25_26
// File Name 			: Armes.cpp
// Creation Date 		: 01.12.2025
// Modification Date	: xx.xx.20xx
//
// Author 				: Philou (Ph. Bovey)
//
// Version				: 0.1
//
// Description          : demo for SLO2's team
//						-> méthodes lié à la class armes 
//
// Remarks				:
//----------------------------------------------------------------------------------*/

//-- librairies standard --// 
#include <string>

//-- librairies personnelles --// 
#include "Armes.h"

/* ----------------------------------------------------------------------------------
// Methode Name			: arme 
// input parameters		: -
// output parameters	: -
// reference parameters : - 
// descrription			: constructeur
---------------------------------------------------------------------------------- */
arme::arme()
{
	//degats_m = 0; 
	nomArme_m = "pas de nom"; 
}

/* ----------------------------------------------------------------------------------
// Methode Name			: arme
// input parameters		: nom -> objet string / degat -> entier 8bits 
// output parameters	: -
// reference parameters : -
// descrription			: constructeur
---------------------------------------------------------------------------------- */
arme::arme(std::string nom, char degat, int a)
{
	//degats_m = degat; 
	nomArme_m = nom; 
}

/* ----------------------------------------------------------------------------------
// Methode Name			: arme
// input parameters		: -
// output parameters	: -
// reference parameters : -
// descrription			: destructeur
---------------------------------------------------------------------------------- */
arme::~arme()
{

}


/* ----------------------------------------------------------------------------------
// Methode Name			: Frapper
// input parameters		: - 
// output parameters	: -
// reference parameters : -
// descrription			: 
---------------------------------------------------------------------------------- */
char arme::Frapper()
{

	return 0; 
}