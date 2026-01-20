#include "Vehicule.h"              // Inclusion de la déclaration de la classe
#include <stdexcept>               // Pour std::runtime_error

int Vehicule::nextId = 1;          // Initialisation du compteur statique

Vehicule::Vehicule(const std::string& marque,
                   const std::string& modele,
                   int annee,
                   int kilometrage)
    : id(nextId++),                // Génère un ID unique
      marque(marque),              // Initialise la marque
      modele(modele),              // Initialise le modèle
      annee(annee),                // Initialise l'année
      kilometrage(kilometrage)     // Initialise le kilométrage
{
}

Vehicule::~Vehicule() {            // Destructeur virtuel (vide)
}

int Vehicule::getId() const {      // Méthode constante
    return id;                     // Retourne l'identifiant
}

void Vehicule::rouler(int km) {    // Ajoute des kilomètres
    if (km < 0) {                  // Vérifie la validité
        throw std::runtime_error("Kilometrage negatif interdit");
    }
    kilometrage += km;             // Ajoute les kilomètres
}
