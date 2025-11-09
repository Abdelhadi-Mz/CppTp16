#ifndef AFFICHAGEHUMIDITE_H
#define AFFICHAGEHUMIDITE_H

#include <iostream>
#include "Observateur.h"
#include "StationMeteo.h"

class AffichageHumidite : public Observateur {
private:
    StationMeteo* station;
public:
    AffichageHumidite(StationMeteo* s) : station(s) {}
    void mettreAJour() override {
        std::cout << "Humidite actuelle : " << station->getHumidite() << " %" << std::endl;
    }
};

#endif
