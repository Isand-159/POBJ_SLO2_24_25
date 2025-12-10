/*----------------------------------------------------------------------------------
// Projet Name 			: POBJ_DemoCPP_25_26
// File Name 			: couteau.h
// Creation Date 		: 01.12.2025
// Modification Date	: xx.xx.20xx
//
// Author 				: Philou (Ph. Bovey)
//
// Version				: 0.1
//
// Description          : demo for SLO2's team
//						-> construction de la class couteau 
//
// Remarks				:
//----------------------------------------------------------------------------------*/
#ifndef COUTEAU_H
#define COUTEAU_H 

//-- librairies standard --// 
#include <string>

//-- librairies personnelles --// 
#include "Armes.h"

class couteau : public arme
{
	//-- attributs 

	//-- constructeur - destructeur 
	public : 
		couteau(); 
		couteau(std::string nomCouteau, char degatCouteau);
		~couteau(); 

	//-- méthode 
	public : 
		char Frapper();
};



#endif // !COUTEAU_H
