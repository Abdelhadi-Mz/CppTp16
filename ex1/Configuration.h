#ifndef CONFIGURATION_H
#define CONFIGURATION_H

#include <iostream>
#include <string>

class Configuration {
private:
    std::string cheminFichier;
    std::string utilisateur;
    std::string motDePasse;
    static Configuration* instance;
    Configuration() : cheminFichier("config.txt"), utilisateur("admin"), motDePasse("1234") {}
    Configuration(const Configuration&) = delete;
    Configuration& operator=(const Configuration&) = delete;

public:
    static Configuration* getInstance() {
        if (instance == nullptr) {
            instance = new Configuration();
        }
        return instance;
    }

    void setCheminFichier(const std::string& chemin) { cheminFichier = chemin; }
    void setUtilisateur(const std::string& user) { utilisateur = user; }
    void setMotDePasse(const std::string& mdp) { motDePasse = mdp; }

    void afficherParametres() const {
        std::cout << "Chemin fichier : " << cheminFichier << std::endl;
        std::cout << "Utilisateur : " << utilisateur << std::endl;
        std::cout << "Mot de passe : " << motDePasse << std::endl;
    }
};

Configuration* Configuration::instance = nullptr;

#endif
