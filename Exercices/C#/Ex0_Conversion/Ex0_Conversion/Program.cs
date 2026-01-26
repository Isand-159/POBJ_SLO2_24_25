// Caneva Ex1 SL228_POBJ
// Conversion C -> C# (console)

using System; // #include <stdio.h>

class Program // Wrapper de class pour C#
{
    static void Main() // int main (void)
    {
        char UserAnswer;
        int ValA, ValB;
        // Variables pour test A et B
        short i;
        short ValB1;
        double ValB2;

        Console.WriteLine("Exercice 1 : Huber Christian"); // printf("Exercice 1 : Huber Christian \n");
        Console.WriteLine("Solution en C a trandformer en C++"); // printf("Solution en C a trandformer en C++ \n");

        do
        {
            Console.WriteLine("Test A ou B, Q pour Quitter"); // printf("Test A ou B, Q pour Quitter \n");
            UserAnswer = Console.ReadKey().KeyChar; // scanf_s("%c%*c", &UserAnswer, 2);
            Console.WriteLine(); // Saut de ligne après ReadKey

            switch (UserAnswer)
            {
                case 'A':
                case 'a':
                    Console.WriteLine("TestA: entrez un nombre entre 1 et 9"); // printf("TestA: entrez un nombre entre 1 et 9 \n");
                    ValA = int.Parse(Console.ReadLine()); // scanf_s("%d%*c", &ValA);

                    if (ValA > 9)
                    {
                        ValA = 9;
                        Console.WriteLine("TestA: ValA limitee a 9"); // printf("TestA: ValA limitee a 9 \n");
                    }

                    if (ValA == 0)
                    {
                        ValA = 1;
                        Console.WriteLine("TestA: ValA forcee a 1"); // printf("TestA: ValA forcee a 1 \n");
                    }

                    if (ValA > 0)
                    {
                        Console.Write("{0} ", ValA); // printf("%d ", ValA);

                        for (i = 0; i < ValA; i++)
                        {
                            Console.Write("*"); // printf ("*");
                        }

                        Console.WriteLine(); // printf("\n");
                    }
                    else
                    {
                        Console.WriteLine("TestA: ValA est negatif !"); // printf("TestA: ValA est negatif ! \n");
                    }
                    break;

                case 'B':
                case 'b':
                    Console.WriteLine("TestB: entrez une valeur entre 0 et 9"); // printf("TestB: entrez une valeur entre 0 et 9 \n");
                    ValB = int.Parse(Console.ReadLine()); // scanf_s("%d%*c", &ValB);

                    if (ValB >= 0 && ValB <= 9)
                    {
                        for (i = 0; i < ValB; i++)
                        {
                            ValB1 = (short)(100 + (10 * i)); // ValB1 = 100 + (10 * i);
                            ValB2 = ValB1 / 10000.0;
                            Console.WriteLine("TestB: i= {0} ValB1 = {1} ValB2 = {2}", i, ValB1, ValB2); // printf("TestB: i= %d ValB1 = %d ValB2 = %lf \n", i, ValB1, ValB2);
                        }
                    }
                    else
                    {
                        Console.WriteLine("TestB: ValB n'est pas entre 0 et 9 !"); // printf("TestB: ValB n'est pas entre 0 et 9 ! \n");
                    }
                    break;
            }

        } while (!(UserAnswer == 'Q' || UserAnswer == 'q'));

    } // return (0);
}