using System;
using System.Collections.Generic;
//using System.Convert; 
using System.Globalization;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

// namespace = englobe tous les fichiers .cs au projet => ici Demo_24_25
namespace Demo_24_25
{
    class Program
    {
        static void Main(string[] args)
        {
            //-- attributs 
            //-- type primaire - Entier

            //-- booléen - taille : 1 octet
            bool testFct = true;            // uniquement keyword "true" ou "false"

            //-- entier numérique
            //-- taille : 1 octet
            //-- non signé 
            byte valByte = 130;             // cast implicte avec la cst numérique 
            byte version = 2;

            //-- signé 
            sbyte valByteSignee = -128;     // cast implicte avec la cst numérique  

            //-- taille : 2 octet 
            //-- non signé 
            ushort valshort = 256;          // cast implicte avec la cst numérique 

            //-- signé 
            short valShortSignee = -255;    // cast implicte avec la cst numérique 

            //-- taille : 4 octes
            //-- non signé 
            uint valInt = 1000;

            //-- signé 
            int valUserInt = -1000;

            //-- taille : 8 octets
            //-- non signé   
            ulong vallong = 1000L;                  // soit utilisation du formt L -> xxxxL
            
            //-- signé 
            long valUserL = (long)-10000;      // soit caster la valeur 
            
            //-- gestion des caractères => 1 seul 
            char demoChar = 'a';          // -> caractère standart 
            demoChar = '\u0061';          // -> caractère unicode 
            demoChar = (char)0x65;        // -> caractère ASCII - table standart 


            //-- tableau d'entier --// 
            int[] tb = new int[10];  

            // type primaire - Reel  
            //-- taille : 8 octets
            float valUserFloat = (float)3.14;
            valUserFloat = 3.14F; 

            //-- 8 octets 
            double demoDouble = 3.14;

            //-- 16 octets 
            decimal demoDec = (decimal)3.14;
            demoDec = 3.14M;                        //-- M pour decimal 

            //-- objets utiles --//
            //-- chaine de caractère --// 
            String message_o = "Demo SLO";
            String msg_RC_LF_o = "\n";
            String infoUser_o;

            //-- touches clavier --//
            ConsoleKeyInfo toucheClavierPressee;


            //-- date --// 
            DateTime years_o = new DateTime(2025, 01, 13);

            //-- préparation message user --// 
            Console.WriteLine(message_o + version + " " + years_o.ToString("yyyy") + msg_RC_LF_o);

            //-- message user pour choix option --// 
            Console.Write("Choisir votre démo [1 à X] : " );

            //-- affichage entier 
            Console.Write(valByte);
            Console.Write("\n");

            //-- affichae entier -> hexa 
            Console.Write(valByte.ToString("x"));
            Console.Write("\n");
            //Console.Write(demoChar.ToString("x"));

            //-- affichae entier -> binaire 
            Console.Write(valByte.ToString("b"));
            Console.Write("\n");

            //-- affichage réel 
            Console.Write(valUserFloat);
            Console.Write("\n");
            Console.Write(valUserFloat.ToString("f1")); 
            Console.Write("\n");


            //-- récupération d'une chaine de caractère --//
            infoUser_o = Console.ReadLine();

            //-- conversion chaîne de caractère en nombre entier --// 

            //-> les fonctions en commentaire ne fonctionnent pas <- PAS trouvé la raison !!! 
            //-> Attention la méthode Parse doit être associé à une class -> type.Parse 
            //valUserInt = int.Parse("4.01", NumberStyles.AllowDecimalPoint);  //=> ne fonctionne pas -> exception 
            //valUser = Convert.ToInt32(infoUser_o);                            => ne fonctionne pas -> exception
            
            valUserInt = Convert.ToInt32(Convert.ToDouble(infoUser_o)); 
            valUserFloat = float.Parse(infoUser_o);

            //-- récupération d'une touche spécfique --//
            //-- message user pour choix option --// 
            Console.Write("Test - appuyer sur n'importe quelle touche : ")

            //-- méthode message console 
            Console.WriteLine("Test !!!");

            //Console.WriteLine(Message);

            Console.Write('\n');

            //-- lecture d'un caractère --// 
            //-- variable --// 
            //ConsoleKey pressedKey; 




            //demoInt = Console.Read();
            //Message = Console.ReadLine();

            ConsoleKeyInfo touche = Console.ReadKey();

            //demoDouble = Convert.ToDouble(Message); 

            //ConsoleKeyInfo


            //-- écriture des tests --// 
            //-> if 
            if (testFct == false)
            { }
            else if (testFct == true) 
            { }
            else 
            { }

            //-> switch 
            switch(touche.Key)
            {
                case ConsoleKey.A :
                    break;

                default:
                    break; 
            
            }

            //-- itération --// 
            //--> while 
            while (touche.Key != ConsoleKey.Escape)
            { }

            //--> do..while 
            do
            {
            } while (touche.Key != ConsoleKey.Escape); 

            for(int index = 0; index < 10 ; index++)
            {
                tb[index] = index; 
            }

            //-- mode lecture seul
            // /!\ attention l'index doit être déclarer dans la boucle
            foreach (int i in tb)
            {
                
            }

            //-- mode lecture écriture 


        }
    }
}
 