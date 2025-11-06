#include <iostream>
#include "BrazoRobotico.h"

BrazoRobotico::BrazoRobotico(double x, double y, double z)
    : x(x), y(y), z(z), sujetando(false) {}

double BrazoRobotico::getX() const { return x; }
double BrazoRobotico::getY() const { return y; }
double BrazoRobotico::getZ() const { return z; }
bool BrazoRobotico::estaSujetando() const { return sujetando; }

void BrazoRobotico::mover(double nuevoX, double nuevoY, double nuevoZ) {
    x = nuevoX; y = nuevoY; z = nuevoZ;
    std::cout << "Movido a (" << x << ", " << y << ", " << z << ")\n";
}

void BrazoRobotico::coger() {
    if (!sujetando) { sujetando = true; std::cout << "Objeto cogido\n"; }
    else            { std::cout << "Ya estaba sujetando un objeto\n"; }
}

void BrazoRobotico::soltar() {
    if (sujetando)  { sujetando = false; std::cout << "Objeto soltado\n"; }
    else            { std::cout << "No estaba sujetando nada\n"; }
}

