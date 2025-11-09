#ifndef TRIDECROISSANT_H
#define TRIDECROISSANT_H

#include "StrategieTri.h"
#include <algorithm>

class TriDecroissant : public StrategieTri {
public:
    void trier(std::vector<std::string>& data) override {
        std::sort(data.begin(), data.end(), std::greater<std::string>());
    }
};

#endif
