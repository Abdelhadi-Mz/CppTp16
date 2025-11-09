#include <iostream>
#include "Configuration.h"

int main() {
    Configuration* config1 = Configuration::getInstance();
    Configuration* config2 = Configuration::getInstance();

    if (config1 == config2) {
        std::cout << "Singleton fonctionne : une seule instance." << std::endl;
    }

    config1->afficherParametres();

    config2->setCheminFichier("nouveau_config.txt");
    config2->setUtilisateur("user1");
    config2->setMotDePasse("abcd");

    std::cout << "\nApres modification via config2:" << std::endl;
    config1->afficherParametres();

    return 0;
}
