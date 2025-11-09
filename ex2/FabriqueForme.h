#ifndef FABRIQUEFORME_H
#define FABRIQUEFORME_H

#include <string>
#include "Forme.h"
#include "Cercle.h"
#include "Carre.h"
#include "Triangle.h"

class FabriqueForme {
public:
    static Forme* creerForme(const std::string& type) {
        if (type == "cercle") return new Cercle();
        if (type == "carre") return new Carre();
        if (type == "triangle") return new Triangle();
        return nullptr;
    }
};

#endif
