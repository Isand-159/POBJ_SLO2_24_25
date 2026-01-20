#ifndef MOTO_H
#define MOTO_H

#include "Vehicule.h"              // Héritage depuis Vehicule

// Classe Moto (hérite de Vehicule)
class Moto : public Vehicule {

private:
    int cylindree;                 // Cylindrée en cm³

public:
    // Constructeur spécifique à Moto
    Moto(const std::string& marque,
         const std::string& modele,
         int annee,
         int kilometrage,
         int cylindree);

    // Affichage spécifique moto
    void afficher() const override;
};

#endif
