//-----------------------------------------------------------------------------------//
// Nom du projet 		: POBJ DEMO C++
// Nom du fichier 		: personnage.h
// Date de création 	: 26.11.2025
// Date de modification : xx.xx.20xx
//
// Auteur 				: Philou (Ph. Bovey)
//
// Description          : 
//
// Remarques :          : 
//----------------------------------------------------------------------------------//
#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include "Armes.h"

class Personnage
{
	//-- visibilité attributs
	public:
		short taille;


	protected:

	private:
		int vie;
		//-- attribut -> association -> pointeur (dynamique) 
		arme* monArme;

		//-- attribut -> composition -> objet (statique) 
		arme monArmepardefaut;

		//-- visibilité méthode
	public:
		//

		//-- constructeur 
		Personnage();	
		Personnage(int valCommencement); 

		// Ne plus comme un constructeur !!!
		//void Personnage(); 

		//-- desctructeur
		~Personnage(); 

		//-- méthode --// 
		void AfficherVie(); 
		
		int Attaquer();
		void SubirAttaque(Personnage attaquant);




	protected:

	private:
}; // A ne pas oublier !!!  


#endif // !PERSONNAGE_H