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
