#ifndef GARAGE_H
#define GARAGE_H

#include <vector>                  // Pour std::vector
#include <stdexcept>               // Pour std::runtime_error
#include "Vehicule.h"              // Pour stocker des Vehicule*

// Classe Garage : gère tous les véhicules
class Garage {

private:
    std::vector<Vehicule*> vehicules; // Liste polymorphique de véhicules

public:
    // Destructeur → libère la mémoire
    ~Garage();

    // Ajoute un véhicule au garage
    void ajouterVehicule(Vehicule* v);

    // Affiche tous les véhicules
    void afficher() const;

    // Recherche un véhicule par ID
    Vehicule* trouverVehicule(int id) const;
};

#endif
