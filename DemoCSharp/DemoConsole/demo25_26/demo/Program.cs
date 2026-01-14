namespace demo
{
    internal class Program
    {
        //-- attributs --// 


        //-- méthode --// 
        static void Main(string[] args)
        {
            //-- variable 
            //-- type primaire - Entier
            //-- booléen - taille : 1 octet
            bool varT = true;                                    // uniquement keyword "true" ou "false"

            //-- entier
            //-- taille : 1 octet
            //-- non signé -> 0 à- 255
            byte varB = 10;                                     // cast implicte avec la cst numérique 

            //-- signé (s) -> -128 à 127
            sbyte varBis = -10;                                   // cast implicte avec la cst numérique  

            //-- taille : 2 octet 
            //-- non signé (u)
            ushort varUs = 255;                                    // cast implicte avec la cst numérique 

            //-- signé 
            short VarS;                                   // cast implicte avec la cst numérique 

            //-- taille : 4 octes
            //-- non signé 
            uint varuE;

            //-- signé 
            int varE;

            //-- taille : 8 octets
            //-- non signé  (u) -> L 
            ulong varuL = (ulong)100;
            varuL = 100L;                       // soit utilisation du formt L -> xxxxL

            //-- signé 
            long varL;                                      // soit caster la valeur 

            //-- gestion des caractères => 1 seul 
            char lettre = 'a';                // -> caractère standart 
            char lettrebis = '\u0065';        // -> caractère unicode 
            char lettreHex = (char)0x65;      // -> cast -> caractère ASCII - table standart 


            // type primaire - Reel  
            //-- taille : 4 octets 
            float varF = (float)3.14;        //-- obligation du cast 
            varF = 3.14F;                   //-- format de valeur -> F 

            //-- 8 octets 
            double varD = 14.14;
            varD = 3.14D;                   //-- format de valeur -> D

            //-- 16 octets 
            decimal varDD = 3.14M;          //-- format de valeur -> M 
            varDD = (decimal)3.14;          //-- cast 

            //-- tableau de type primaire --// 
            //-- tableau entier 10 case
            uint[] tbEntier = new uint[10];


            //-- objets utiles --//
            //-- chaine de caractère -> String --// 
            String chaine = "Hello SLO"; 

            String[] weekDays = [ "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" ];

            //-- touches clavier
            //--> ConsoleKey -> énumération 
            //--> ConsoleKeyInfo --//
            //

            //-- date -> DateTime --// 


            //-- console -> message user --// 
            //--> console -> writeline 
            Console.WriteLine(chaine + 2 + " année" + 26);

            //--> console -> write
            Console.Write(varUs);
            Console.Write("\n");
            Console.Write(varUs.ToString("x"));
            Console.Write("\n");
            Console.Write(varD);
            Console.Write("\n");
            Console.Write(varD.ToString("f"));
            Console.Write("\n");

            //-- récupération d'une chaine de caractère --//
            // --> console -> readline -> retour sur un string 
            // --> console -> read -> retour format désiré 
            chaine = Console.ReadLine();

            Console.WriteLine(chaine);

            varE = int.Parse(Console.ReadLine()); 
            Console.Write(varE);



            //-- conversion chaîne de caractère en nombre entier --// 

            //-> les fonctions en commentaire ne fonctionnent pas <- PAS trouvé la raison !!! 
            //-> Attention la méthode Parse doit être associé à une class -> type.Parse 
            //valUserInt = int.Parse("4.01", NumberStyles.AllowDecimalPoint);  //=> ne fonctionne pas -> exception 
            //valUser = Convert.ToInt32(infoUser_o);                            => ne fonctionne pas -> exception

            //valUserInt = Convert.ToInt32(Convert.ToDouble(infoUser_o));
            //valUserFloat = float.Parse(infoUser_o);
            //demoDouble = Convert.ToDouble(Message); 

            ConsoleKeyInfo touchePressee; 

            touchePressee = Console.ReadKey();

            //-- test --// 
            //-> if 
            if (touchePressee.Key == ConsoleKey.F1)
            {
            }
            else if (touchePressee.Key == ConsoleKey.Escape)
            { }
            else
            {
            }

            //-> switch
            switch(touchePressee.Key)
            {
                case ConsoleKey.F1:

                break;


                default:
                break; 
            }


            //-- itération --// 
            //-> tant que
            while (touchePressee.Key != ConsoleKey.Escape)
            { 
            
            }

            //-> faire tant que 
            do
            {

            } while (touchePressee.Key != ConsoleKey.Escape);
            
            
            //--> comptage
            for (int i = 0; i < 10; i++)
            {


            }

            //--> comptage simplifier 
            // /!\ attention paramètre d'entrée qui doit défini à l'intérieur 
            foreach (int element in tbEntier)
            { 
                varE = element;
            }
        }
    }
}
