#ifndef AFFICHAGETEMPERATURE_H
#define AFFICHAGETEMPERATURE_H

#include <iostream>
#include "Observateur.h"
#include "StationMeteo.h"

class AffichageTemperature : public Observateur {
private:
    StationMeteo* station;
public:
    AffichageTemperature(StationMeteo* s) : station(s) {}
    void mettreAJour() override {
        std::cout << "Temperature actuelle : " << station->getTemperature() << " C" << std::endl;
    }
};

#endif
