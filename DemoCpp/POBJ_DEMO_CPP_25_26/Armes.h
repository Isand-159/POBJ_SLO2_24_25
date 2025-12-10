/*----------------------------------------------------------------------------------
// Projet Name 			: POBJ_DemoCPP_25_26
// File Name 			: Armes.h
// Creation Date 		: 01.12.2025
// Modification Date	: xx.xx.20xx
//
// Author 				: Philou (Ph. Bovey)
//
// Version				: 0.1
//
// Description          : demo for SLO2's team
//						-> construction de la class Arme 
//
// Remarks				:
//----------------------------------------------------------------------------------*/
#ifndef ARMES_H
#define ARMES_H 

//-- librairies standard --// 
#include <string>

//-- librairies personnelles --// 


//-- déclarations de la class Arme
class arme 
{
    //-- attributs 
    protected : 
        char degatsInflige_m; 
        std::string nomArme_m; 

    //-- constructeur - destructeur 
    public : 
        arme();
        arme(std::string nom, char degat, int a = 10); 
        virtual ~arme(); 

	//-- méthodes
    public :
        virtual char Frapper(); 
};

#endif // !ARMES_H

