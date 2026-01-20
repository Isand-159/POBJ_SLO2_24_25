// Caneva Ex1 SL228_POBJ
// Conversion C -> C# (console)

using System;

class Program
{
    static void Main(string[] args)   // C : int main(void)
    {
        char UserAnswer;
        int ValA, ValB;
        short i;
        short ValB1;
        double ValB2;

        Console.WriteLine("Exercice 1 : Huber Christian ");   // C : printf(...)
        Console.WriteLine("Solution en C a trandformer en C++ "); // C : printf(...)

        do
        {
            Console.WriteLine("Test A ou B, Q pour Quitter "); // C : printf(...)

            string input = Console.ReadLine();                // C : scanf_s("%c%*c", &UserAnswer, 2)
            UserAnswer = (input != null && input.Length > 0) ? input[0] : '\0'; // récupération du char

            switch (UserAnswer)
            {
                case 'A':
                case 'a':
                    Console.WriteLine("TestA: entrez un nombre entre 1 et 9 "); // C : printf(...)

                    if (!int.TryParse(Console.ReadLine(), out ValA))            // C : scanf_s("%d%*c", &ValA)
                        ValA = 0;

                    if (ValA > 9)
                    {
                        ValA = 9;
                        Console.WriteLine("TestA: ValA limitee a 9 ");          // C : printf(...)
                    }
                    if (ValA == 0)
                    {
                        ValA = 1;
                        Console.WriteLine("TestA: ValA forcee a 1 ");           // C : printf(...)
                    }
                    if (ValA > 0)
                    {
                        Console.Write(ValA + " ");                              // C : printf("%d ", ValA)

                        for (i = 0; i < ValA; i++)
                        {
                            Console.Write("*");                                 // C : printf("*")
                        }

                        Console.WriteLine();                                    // C : printf("\n")
                    }
                    else
                    {
                        Console.WriteLine("TestA: ValA est negatif ! ");        // C : printf(...)
                    }
                    break;

                case 'B':
                case 'b':
                    Console.WriteLine("TestB: entrez une valeur entre 0 et 9 "); // C : printf(...)

                    if (!int.TryParse(Console.ReadLine(), out ValB))             // C : scanf_s("%d%*c", &ValB)
                        ValB = -1;

                    if (ValB >= 0 && ValB <= 9)
                    {
                        for (i = 0; i < ValB; i++)
                        {
                            ValB1 = (short)(100 + (10 * i));                    // cast short (C# obligatoire)
                            ValB2 = ValB1 / 10000.0;

                            Console.WriteLine(                                   // C : printf(...)
                                "TestB: i= {0} ValB1 = {1} ValB2 = {2}",
                                i, ValB1, ValB2);
                        }
                    }
                    else
                    {
                        Console.WriteLine("TestB: ValB n'est pas entre 0 et 9 ! "); // C : printf(...)
                    }
                    break;
            }

        } while (!(UserAnswer == 'Q' || UserAnswer == 'q'));

        // C : return(0)
    }
}
