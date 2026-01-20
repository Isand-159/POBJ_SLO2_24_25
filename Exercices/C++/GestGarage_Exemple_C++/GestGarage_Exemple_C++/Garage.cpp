#include "Garage.h"                // Inclusion du header Garage
#include <iostream>                // Pour std::cout

Garage::~Garage() {                // Destructeur du garage
    for (Vehicule* v : vehicules) {// Parcourt tous les véhicules
        delete v;                  // Libère la mémoire
    }
}

void Garage::ajouterVehicule(Vehicule* v) {
    vehicules.push_back(v);        // Ajoute le véhicule au vector
}

void Garage::afficher() const {
    for (Vehicule* v : vehicules) {// Parcourt tous les véhicules
        v->afficher();             // Appel polymorphique
    }
}

Vehicule* Garage::trouverVehicule(int id) const {
    for (Vehicule* v : vehicules) {// Recherche linéaire
        if (v->getId() == id) {    // Compare les IDs
            return v;              // Véhicule trouvé
        }
    }
    throw std::runtime_error("Vehicule introuvable"); // Sinon erreur
}
