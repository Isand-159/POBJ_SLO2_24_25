#include "Moto.h"                  // Inclusion de Moto

Moto::Moto(const std::string& marque,
           const std::string& modele,
           int annee,
           int kilometrage,
           int cylindree)
    : Vehicule(marque, modele, annee, kilometrage), // Appel constructeur parent
      cylindree(cylindree)          // Initialise la cylindrée
{
}

void Moto::afficher() const {      // Affichage spécifique moto
    std::cout << "[Moto] ID " << id
              << " | " << marque << " " << modele
              << " | Annee: " << annee
              << " | " << kilometrage << " km"
              << " | " << cylindree << " cc"
              << std::endl;
}
