#include "Voiture.h"               // Inclusion de Voiture

Voiture::Voiture(const std::string& marque,
                 const std::string& modele,
                 int annee,
                 int kilometrage,
                 int nbPortes)
    : Vehicule(marque, modele, annee, kilometrage), // Appel constructeur parent
      nbPortes(nbPortes)            // Initialise le nombre de portes
{
}

void Voiture::afficher() const {   // Affichage spécifique voiture
    std::cout << "[Voiture] ID " << id
              << " | " << marque << " " << modele
              << " | Annee: " << annee
              << " | " << kilometrage << " km"
              << " | " << nbPortes << " portes"
              << std::endl;
}
