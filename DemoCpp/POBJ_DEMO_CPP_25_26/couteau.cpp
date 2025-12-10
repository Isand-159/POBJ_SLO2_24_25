/*----------------------------------------------------------------------------------
// Projet Name 			: POBJ_DemoCPP_25_26
// File Name 			: couteau.cpp
// Creation Date 		: 01.12.2025
// Modification Date	: xx.xx.20xx
//
// Author 				: Philou (Ph. Bovey)
//
// Version				: 0.1
//
// Description          : demo for SLO2's team
//						-> méthodes lié à la class couteau
//
// Remarks				:
//----------------------------------------------------------------------------------*/

//-- librairies standard --// 
#include <string>

//-- librairies personnelles --// 
#include "couteau.h"

/* ----------------------------------------------------------------------------------
// Methode Name			: couteau
// input parameters		: -
// output parameters	: -
// reference parameters : -
// descrription			: constructeur
---------------------------------------------------------------------------------- */
couteau::couteau()
{
	//degats_m = 0; 
	nomArme_m = "pas de couteau défini"; 
}

/* ----------------------------------------------------------------------------------
// Methode Name			: couteau
// input parameters		: -
// output parameters	: -
// reference parameters : -
// descrription			: constructeur
---------------------------------------------------------------------------------- */
couteau::couteau(std::string nomCouteau, char degatCouteau)
{
	//degats_m = degatCouteau;
	nomArme_m = nomCouteau;
}

/* ----------------------------------------------------------------------------------
// Methode Name			: couteau
// input parameters		: -
// output parameters	: -
// reference parameters : -
// descrription			: destructeur
---------------------------------------------------------------------------------- */
couteau::~couteau()
{

}

/* ----------------------------------------------------------------------------------
// Methode Name			: Frapper
// input parameters		: -
// output parameters	: -
// reference parameters : -
// descrription			:
---------------------------------------------------------------------------------- */
char couteau::Frapper()
{
	return 0; //degats_m; 
}
