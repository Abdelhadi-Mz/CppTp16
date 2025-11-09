#include <iostream>
#include <vector>
#include "GestionnaireTri.h"
#include "TriCroissant.h"
#include "TriDecroissant.h"
#include "TriParLongueur.h"

void afficherVecteur(const std::vector<std::string>& data) {
    for (const auto& s : data) std::cout << s << " ";
    std::cout << std::endl;
}

int main() {
    std::vector<std::string> mots = {"pomme", "banane", "kiwi", "ananas", "cerise"};

    TriCroissant triCroissant;
    TriDecroissant triDecroissant;
    TriParLongueur triLongueur;

    GestionnaireTri gestionnaire(&triCroissant);
    gestionnaire.trier(mots);
    std::cout << "Tri croissant : ";
    afficherVecteur(mots);

    gestionnaire.setStrategie(&triDecroissant);
    gestionnaire.trier(mots);
    std::cout << "Tri decroissant : ";
    afficherVecteur(mots);

    gestionnaire.setStrategie(&triLongueur);
    gestionnaire.trier(mots);
    std::cout << "Tri par longueur : ";
    afficherVecteur(mots);

    return 0;
}
