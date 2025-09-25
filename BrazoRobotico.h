#ifndef BRAZOROBOTICO_H
#define BRAZOROBOTICO_H

class BrazoRobotico {
private:
    double x, y, z;      
    bool sujetando;      

public:
    
    BrazoRobotico(double x = 0.0, double y = 0.0, double z = 0.0);

    
    double getX() const;
    double getY() const;
    double getZ() const;
    bool estaSujetando() const;

    
    void mover(double nuevoX, double nuevoY, double nuevoZ);
    void coger();
    void soltar();
};

#endif

