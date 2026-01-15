// Caneva Ex1 SL228_POBJ language C++ 
// Visual Studio 2015
// 11.11.2016 C. Huber

#include <iostream>

int main(void)
{
    char UserAnswer;
    int ValA, ValB;
    short i;
    short ValB1;
    double ValB2;

    std::cout << "Exercice 1 : Huber Christian \n";
    std::cout << "Solution en C a trandformer en C++ \n";

    do {
        std::cout << "Test A ou B, Q pour Quitter \n";
        std::cin >> UserAnswer;

        switch (UserAnswer) {
        case 'A':
        case 'a':
            std::cout << "TestA: entrez un nombre entre 1 et 9 \n";
            std::cin >> ValA;

            if (ValA > 9)
            {
                ValA = 9;
                std::cout << "TestA: ValA limitee a 9 \n";
            }
            if (ValA == 0)
            {
                ValA = 1;
                std::cout << "TestA: ValA forcee a 1 \n";
            }
            if (ValA > 0)
            {
                std::cout << ValA << " ";
                for (i = 0; i < ValA; i++)
                {
                    std::cout << "*";
                }
                std::cout << std::endl;
            }
            else
            {
                std::cout << "TestA: ValA est negatif ! \n";
            }
            break;

        case 'B':
        case 'b':
            std::cout << "TestB: entrez une valeur entre 0 et 9 \n";
            std::cin >> ValB;

            if (ValB >= 0 && ValB <= 9)
            {
                for (i = 0; i < ValB; i++) {
                    ValB1 = 100 + (10 * i);
                    ValB2 = ValB1 / 10000.0;
                    std::cout << "TestB: i= " << i
                        << " ValB1 = " << ValB1
                        << " ValB2 = " << ValB2 << std::endl;
                }
            }
            else
            {
                std::cout << "TestB: ValB n'est pas entre 0 et 9 ! \n";
            }
            break;

        } // end switch

    } while (!(UserAnswer == 'Q' || UserAnswer == 'q'));

    return (0);
}