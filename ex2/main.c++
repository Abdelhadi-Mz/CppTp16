#include <iostream>
#include "FabriqueForme.h"

int main() {
    Forme* f1 = FabriqueForme::creerForme("cercle");
    Forme* f2 = FabriqueForme::creerForme("carre");
    Forme* f3 = FabriqueForme::creerForme("triangle");

    if (f1) f1->afficher();
    if (f2) f2->afficher();
    if (f3) f3->afficher();

    delete f1;
    delete f2;
    delete f3;

    return 0;
}
