#ifndef CARRE_H
#define CARRE_H

#include "Forme.h"

class Carre : public Forme {
public:
    void afficher() const override {
        std::cout << "Forme : Carre" << std::endl;
    }
};

#endif
