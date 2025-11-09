#ifndef TRICROISSANT_H
#define TRICROISSANT_H

#include "StrategieTri.h"
#include <algorithm>

class TriCroissant : public StrategieTri {
public:
    void trier(std::vector<std::string>& data) override {
        std::sort(data.begin(), data.end());
    }
};

#endif
