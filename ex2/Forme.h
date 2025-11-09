#ifndef FORME_H
#define FORME_H

#include <iostream>
#include <string>

class Forme {
public:
    virtual void afficher() const = 0;
    virtual ~Forme() {}
};

#endif
