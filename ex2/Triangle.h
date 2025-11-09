#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Forme.h"

class Triangle : public Forme {
public:
    void afficher() const override {
        std::cout << "Forme : Triangle" << std::endl;
    }
};

#endif
