// Canevas Ex6 SL228_POBJ CPP 
// Visual Studio 2015
// 11.01.2017 C. Huber

#include <iostream>
using namespace std;



int main (void)
{
	char UserAnswer;
	
	// Variables pour test B
	

	cout << "Exercice 6 : Nom prenom" << endl;
	do {
		cout << "Test A ou B , Q pour Quitter" << endl;
		cin >> UserAnswer;
		
		switch (UserAnswer) {
			case 'A':
			case 'a':
				cout << "TestA: HexUtil" << endl;
				
			break;

			case 'B':
			case 'b':
				cout << "TestB: Figures3D " <<  endl;
				
			break;

			

		} // end switch
	
	} while (!(UserAnswer == 'Q' || UserAnswer == 'q'));

	return (0);
}