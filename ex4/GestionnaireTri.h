#ifndef GESTIONNAIRETRI_H
#define GESTIONNAIRETRI_H

#include "StrategieTri.h"
#include <vector>
#include <string>

class GestionnaireTri {
private:
    StrategieTri* strategie;

public:
    GestionnaireTri(StrategieTri* s = nullptr) : strategie(s) {}

    void setStrategie(StrategieTri* s) { strategie = s; }

    void trier(std::vector<std::string>& data) {
        if (strategie)
            strategie->trier(data);
    }
};

#endif
