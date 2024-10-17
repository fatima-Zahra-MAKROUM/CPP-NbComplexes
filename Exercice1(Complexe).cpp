#include "Complexe.h"
#include <iostream>
using namespace std;

int main() {
    // Création de deux nombres complexes 
    Complexe* z1 = new Complexe(3, 2);  // 3 + 2i
    Complexe* z2 = new Complexe(1, 4);  // 1 + 4i

    // Affichage des nombres complexes
    std::cout << "z1: ";
    z1->afficher();

    std::cout << "z2: ";
    z2->afficher();

    // Addition de deux nombres complexes
    Complexe* z3 = *z1 + *z2;
    std::cout << "z1 + z2: ";
    z3->afficher();

    // Soustraction de deux nombres complexes
    Complexe* z4 = *z1 - *z2;
    std::cout << "z1 - z2: ";
    z4->afficher();

    // Multiplication de deux nombres complexes
    Complexe* z5 = *z1 * *z2;
    std::cout << "z1 * z2: ";
    z5->afficher();

    // Division de deux nombres complexes
    Complexe* z6 = *z1 / *z2;
    std::cout << "z1 / z2: ";
    z6->afficher();

    // Addition d'un nombre complexe avec un scalaire
    Complexe* z7 = *z1 + 2.0;
    std::cout << "z1 + 2.0: ";
    z7->afficher();

    // Soustraction d'un nombre complexe avec un scalaire
    Complexe* z8 = *z1 - 2.0;
    std::cout << "z1 - 2.0: ";
    z8->afficher();

    // Multiplication d'un nombre complexe avec un scalaire
    Complexe* z9 = *z1 * 2.0;
    std::cout << "z1 * 2.0: ";
    z9->afficher();

    // Division d'un nombre complexe par un scalaire
    Complexe* z10 = *z1 / 2.0;
    std::cout << "z1 / 2.0: ";
    z10->afficher();

    // Conjugaison du premier complexe
    Complexe* z11 = z1->conjugue();
    std::cout << "Conjugue de z1: ";
    z11->afficher();

    // Modulo du premier complexe
    std::cout << "Modulo de z1: " << z1->modulo() << std::endl;

    // Libération de la mémoire
    delete z1;
    delete z2;
    delete z3;
    delete z4;
    delete z5;
    delete z6;
    delete z7;
    delete z8;
    delete z9;
    delete z10;
    delete z11;

    return 0;
}
