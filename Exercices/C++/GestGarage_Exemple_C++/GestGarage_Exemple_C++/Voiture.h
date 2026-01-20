#ifndef VOITURE_H
#define VOITURE_H

#include "Vehicule.h"              // Héritage depuis Vehicule

// Classe Voiture (hérite de Vehicule)
class Voiture : public Vehicule {

private:
    int nbPortes;                  // Nombre de portes

public:
    // Constructeur spécifique à Voiture
    Voiture(const std::string& marque,
            const std::string& modele,
            int annee,
            int kilometrage,
            int nbPortes);

    // Affichage spécifique voiture
    void afficher() const override;
};

#endif
