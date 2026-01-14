//-----------------------------------------------------------------------------------//
// Project Name 		: POBJ DEMO C++
// Nom du fichier 		: ClassDemo.cpp
// Date de création 	: 12.03.2024
// Date de modification : 17.12.2025
//
// Auteur 				: Philou (Ph. Bovey)
//
// Description          : 
//
// Remarques :          : 
//----------------------------------------------------------------------------------//
#ifndef USER_H 
#define USER_H 

//-- déclaration lib --// 
#include <string>


class Personnage; 
class user
{
	//-- attributs --// 
	//--- public 
	public:
		//static int demoStatic;*/  
		enum e_MessageUser : int { msg1, msg2, msg3 };
		static short LIM_MAX;
		static short LIM_MIN;

	//-- protected
	protected : 
		float valUser_m; 

	//--- private 
	private : 
		const short LIMIT_MAX_USER; 
		const short LIMIT_MIN_USER; 
		


	//-- constructeur --// 
	//--- public
	public : 
		user(short limitmax, short limitmin); 
	//-- protected

	//--- private 



	//-- méthodes --// 
	//--- public 
	public : 
		void AfficherMsgUser(e_MessageUser codeMsg);
		float GetNumberValue(); 
		void SetNumberValue(float valUser); 
		bool ValiderValUser(float valATester); 

		// -> Amitier -> donner des droits spécifique à objet 
		// -> ici Personnage
		// -> ce prototype doit être déclarer dans la class personnage pour avoir accès au droit privé 
		void FctAmitier(Personnage Slo); 
		


		static void FctDemoStatique(char max, char min); 

		//void FctDemoStatique(short max, short min); 

	//-- protected

	//--- private 



};


#endif // !USER_H 

