#ifndef OBSERVATEUR_H
#define OBSERVATEUR_H

class Observateur {
public:
    virtual void mettreAJour() = 0;
    virtual ~Observateur() {}
};

#endif
