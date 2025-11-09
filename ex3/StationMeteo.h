#ifndef STATIONMETEO_H
#define STATIONMETEO_H

#include <vector>
#include <algorithm>
#include "Observateur.h"

class StationMeteo {
private:
    std::vector<Observateur*> observateurs;
    float temperature;
    float humidite;
    float pression;

public:
    StationMeteo() : temperature(0), humidite(0), pression(0) {}

    void ajouterObservateur(Observateur* obs) {
        observateurs.push_back(obs);
    }

    void supprimerObservateur(Observateur* obs) {
        observateurs.erase(
            std::remove(observateurs.begin(), observateurs.end(), obs),
            observateurs.end()
        );
    }

    void notifierObservateurs() {
        for (auto obs : observateurs) {
            obs->mettreAJour();
        }
    }

    void setDonnees(float t, float h, float p) {
        temperature = t;
        humidite = h;
        pression = p;
        notifierObservateurs();
    }

    float getTemperature() const { return temperature; }
    float getHumidite() const { return humidite; }
    float getPression() const { return pression; }
};

#endif
