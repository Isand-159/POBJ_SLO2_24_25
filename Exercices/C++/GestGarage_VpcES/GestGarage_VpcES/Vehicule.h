#ifndef VEHICULE_H                 // Garde d'inclusion (évite double inclusion)
#define VEHICULE_H

#include <string>                  // Pour std::string
#include <iostream>                // Pour std::cout

// Classe abstraite représentant un véhicule générique
class Vehicule {

protected:                         // Accessible par les classes dérivées
    int id;                        // Identifiant unique du véhicule
    std::string marque;            // Marque (McLaren, Triumph, BMW)
    std::string modele;            // Modèle (765LT, Street Triple 765 RS)
    int annee;                     // Année de fabrication
    int kilometrage;               // Kilométrage actuel

    static int nextId;             // Compteur partagé par TOUS les véhicules

public:
    // Constructeur commun à tous les véhicules
    Vehicule(const std::string& marque,   // Marque du véhicule
             const std::string& modele,   // Modèle du véhicule
             int annee,                   // Année
             int kilometrage);            // Kilométrage initial

    // Destructeur virtuel (OBLIGATOIRE en polymorphisme)
    virtual ~Vehicule();

    // Retourne l'identifiant du véhicule
    int getId() const;

    // Ajoute des kilomètres au véhicule
    void rouler(int km);

    // Méthode virtuelle PURE → rend la classe abstraite
    virtual void afficher() const = 0;
};

#endif
