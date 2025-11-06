#include <iostream>
#include "BrazoRobotico.h"

int main() {
    BrazoRobotico br(0,0,0);
    std::cout << "Posicion inicial: (" << br.getX() << ", " << br.getY()
              << ", " << br.getZ() << ")\n";

    br.mover(10.5, -2.0, 3.25);
    std::cout << "Sujetando? " << (br.estaSujetando() ? "si" : "no") << "\n";

    br.coger();
    std::cout << "Sujetando? " << (br.estaSujetando() ? "si" : "no") << "\n";

    br.mover(0,0,1);
    br.soltar();

    return 0;
}

