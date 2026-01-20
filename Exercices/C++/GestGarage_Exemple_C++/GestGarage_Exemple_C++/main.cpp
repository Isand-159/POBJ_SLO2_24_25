#include "Garage.h"                // Inclusion du garage
#include "Voiture.h"               // Inclusion des voitures
#include "Moto.h"                  // Inclusion des motos
#include <iostream>                // Pour entrées / sorties

int main() {

    Garage garage;                 // Création du garage

    // Ajout d'une McLaren 765LT
    garage.ajouterVehicule(
        new Voiture("McLaren", "765LT", 2022, 8500, 2)
    );

    // Ajout d'une Triumph Street Triple 765 RS
    garage.ajouterVehicule(
        new Moto("Triumph", "Street Triple 765 RS", 2021, 12000, 765)
    );

    // Ajout d'une BMW M3
    garage.ajouterVehicule(
        new Voiture("BMW", "M3", 2018, 60000, 4)
    );

    int choix = -1;                // Variable de menu

    while (choix != 0) {           // Boucle principale
        std::cout << "\n===== GARAGE PRIVE =====\n";
        std::cout << "1. Afficher les vehicules\n";
        std::cout << "2. Faire rouler un vehicule\n";
        std::cout << "0. Quitter\n";
        std::cout << "Choix : ";
        std::cin >> choix;

        try {
            if (choix == 1) {
                garage.afficher(); // Affichage
            }
            else if (choix == 2) {
                int id, km;
                std::cout << "ID du vehicule : ";
                std::cin >> id;
                std::cout << "Kilometres a ajouter : ";
                std::cin >> km;

                Vehicule* v = garage.trouverVehicule(id);
                v->rouler(km);

                std::cout << "Kilometrage mis a jour.\n";
            }
        }
        catch (const std::exception& e) {
            std::cerr << "Erreur : " << e.what() << std::endl;
        }
    }

    return 0;                      // Fin du programme
}

/**************************************************************
 *  RÉSUMÉ C++
 *
 *  ============================================================
 *  STDLIB UTILISÉE
 *  ============================================================
 *
 *  <iostream>
 *  ------------------------------------------------------------
 *  Sert aux entrées / sorties console.
 *
 *  std::cout  → affichage normal
 *
 *      std::cout << "Bonjour" << std::endl;
 *
 *      int km = 12000;
 *      std::cout << "Kilometrage : " << km << " km" << std::endl;
 *
 *      std::string marque = "McLaren";
 *      std::cout << "Voiture : " << marque << std::endl;
 *
 *  std::cin  → lecture clavier
 *
 *      int choix;
 *      std::cin >> choix;
 *
 *      int id, km;
 *      std::cin >> id >> km;   // lectures enchaînées
 *
 *  std::cerr → affichage des erreurs
 *
 *      std::cerr << "Erreur" << std::endl;
 *
 *      catch (const std::exception& e) {
 *          std::cerr << e.what() << std::endl;
 *      }
 *
 *  ============================================================
 *  <string>
 *  ------------------------------------------------------------
 *  std::string = gestion du texte (remplace char*)
 *
 *      std::string marque = "Triumph";
 *      std::string modele = "Street Triple 765 RS";
 *
 *      std::string nom = marque + " " + modele;
 *
 *      nom.size();     // longueur
 *      nom.empty();    // est vide ?
 *
 *  ============================================================
 *  <vector>
 *  ------------------------------------------------------------
 *  std::vector = tableau dynamique
 *
 *      std::vector<int> nombres;
 *      nombres.push_back(10);
 *      nombres.push_back(20);
 *
 *      std::vector<Vehicule*> vehicules;
 *      vehicules.push_back(new Voiture(...));
 *      vehicules.push_back(new Moto(...));
 *
 *  Parcours :
 *
 *      for (Vehicule* v : vehicules) {
 *          v->afficher();
 *      }
 *
 *  ============================================================
 *  <stdexcept> / <exception>
 *  ------------------------------------------------------------
 *  Gestion des erreurs avec exceptions.
 *
 *  Lancer une exception :
 *
 *      if (km < 0) {
 *          throw std::runtime_error("Kilometrage invalide");
 *      }
 *
 *  Attraper une exception :
 *
 *      try {
 *          v->rouler(km);
 *      }
 *      catch (const std::exception& e) {
 *          std::cerr << e.what() << std::endl;
 *      }
 *
 *  ============================================================
 *  CLASSES
 *  ============================================================
 *
 *  Une classe = données + fonctions
 *
 *      class Vehicule {
 *          int kilometrage;
 *          void rouler(int km);
 *      };
 *
 *  ============================================================
 *  FONCTIONS (MÉTHODES)
 *  ============================================================
 *
 *  Fonction appartenant à une classe :
 *
 *      void Vehicule::rouler(int km) {
 *          kilometrage += km;
 *      }
 *
 *  ============================================================
 *  RELATIONS ENTRE CLASSES
 *  ============================================================
 *
 *  Héritage :
 *
 *      class Voiture : public Vehicule { };
 *      class Moto    : public Vehicule { };
 *
 *  → Voiture EST un Vehicule
 *
 *  Agrégation :
 *
 *      class Garage {
 *          std::vector<Vehicule*> vehicules;
 *      };
 *
 *  → Garage CONTIENT des Vehicules
 *
 *  Polymorphisme :
 *
 *      Vehicule* v = new Voiture(...);
 *      v->afficher();   // appelle Voiture::afficher()
 *
 *  ============================================================
 *  CLASSES STATIQUES
 *  ============================================================
 *
 *  Un membre static appartient à la classe, pas à l'objet.
 *
 *      class Vehicule {
 *          static int nextId;
 *      };
 *
 *      int Vehicule::nextId = 1;
 *
 *  Utilisé pour générer des ID uniques.
 *
 *  ============================================================
 *  EXCEPTIONS (RÈGLE IMPORTANTE)
 *  ============================================================
 *
 *  - throw : là où l'erreur est détectée
 *  - catch : là où on sait quoi faire
 *
 *      throw std::runtime_error("Vehicule introuvable");
 *
 **************************************************************/