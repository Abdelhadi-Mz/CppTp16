#include <iostream>
#include "StationMeteo.h"
#include "AffichageTemperature.h"
#include "AffichageHumidite.h"

int main() {
    StationMeteo station;

    AffichageTemperature affichTemp(&station);
    AffichageHumidite affichHumid(&station);

    station.ajouterObservateur(&affichTemp);
    station.ajouterObservateur(&affichHumid);

    station.setDonnees(25.5, 60.0, 1013.0);
    station.setDonnees(26.0, 55.0, 1012.5);

    return 0;
}
