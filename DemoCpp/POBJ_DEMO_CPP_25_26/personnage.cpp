//-----------------------------------------------------------------------------------//
// Nom du projet 		: POBJ DEMO C++
// Nom du fichier 		: personnage.cpp
// Date de création 	: 26.11.2025
// Date de modification : 08.12.2025
//
// Auteur 				: Philou (Ph. Bovey)
//
// Description          : 
//
// Remarques :          : 
//----------------------------------------------------------------------------------//

//-- librairie standard --//
#include <iostream>
#include <exception>

//-- libraire personnelle --// 
#include "personnage.h"
#include "Armes.h"
#include "couteau.h"; 
#include "user.h"

/* ----------------------------------------------------------------------------------
// Methode Name			: Personnage 
// input parameters		: 
// output parameters	:
// reference parameters : 
// descrription			: constructeur
---------------------------------------------------------------------------------- */
Personnage::Personnage()
{
	vie = 100; 
	monArme = NULL; 

	
}

/* ----------------------------------------------------------------------------------
// Methode Name			: Personnage
// input parameters		:
// output parameters	:
// reference parameters :
// descrription			: constructeur surcharger
---------------------------------------------------------------------------------- */
Personnage::Personnage(int valCommencement)
{
	vie = valCommencement;
	monArme = new couteau("poignard", 30);
	monArme = new arme("demo", 0, 100); 
}

 

/* ----------------------------------------------------------------------------------
// Methode Name			: Personnage
// input parameters		:
// output parameters	:
// reference parameters :
// descrription			: constructeur surcharger
---------------------------------------------------------------------------------- */
void Personnage::AfficherVie()
{
	std::cout << Personnage::vie << std::endl; 
	std::cout << vie << std::endl; 

	Attaquer(); 
	this->Attaquer(); 
}


/* ----------------------------------------------------------------------------------
// Methode Name			: Personnage
// input parameters		:
// output parameters	:
// reference parameters :
// descrription			: constructeur surcharger
---------------------------------------------------------------------------------- */
Personnage::~Personnage()
{
	vie = 0; 
	if (suppressionArme == false)
		delete monArme; 
}


/* ----------------------------------------------------------------------------------
// Methode Name			: Attaquer
// input parameters		:
// output parameters	:
// reference parameters :
// descrription			: 
---------------------------------------------------------------------------------- */
int Personnage::Attaquer()
{
	//-- gestion exception --//
	if (monArme == NULL)
	{
		throw std::bad_alloc(); 
	}
	
	return 0; 
}


/* ----------------------------------------------------------------------------------
// Methode Name			: SubirAttaque
// input parameters		: 
// output parameters	:
// reference parameters : attaquant -> personnage
// descrription			:
---------------------------------------------------------------------------------- */
void Personnage::SubirAttaque(Personnage attaquant)
{




}


/* ----------------------------------------------------------------------------------
// Methode Name			: SupprimerArme
// input parameters		:
// output parameters	:
// reference parameters : 
// description			: 
// remark				: attention, le pointeur ne sera pas supprimer, mais le lien 
//						  sera libéré !!! 
---------------------------------------------------------------------------------- */
bool Personnage::SupprimerArme()
{
	//-- supprimer l'instance lié à l'arme 
	delete monArme;

	//-- info au personnage -> true = plus d'arme --// 
	suppressionArme = true;

	//--  --// 
	return true; 
}

/* ----------------------------------------------------------------------------------
// Methode Name			: ChoisirArme
// input parameters		:
// output parameters	:
// reference parameters :
// descrription			:
---------------------------------------------------------------------------------- */
void Personnage::ChoisirArme()
{
	monArme = new couteau("suisse", 1); 
}



