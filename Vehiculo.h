#pragma once
#include <iostream>

class Vehiculo
{
protected:
    std::string marca;
    std::string modelo;
public:
    Vehiculo(std::string marc, std::string mod) : marca(marc), modelo(mod) {}
    virtual double calcularAutonomia() = 0;
    virtual ~Vehiculo(){};

    virtual std::ostream& imprimir(std::ostream& os)
    {
        os << "Vehículo genérico: " << std::endl;
        os << marca << std::endl;
        os << modelo << std::endl;
    }

    friend std::ostream& operator<<(std::ostream &os, Vehiculo&v )
    {
        return v.imprimir(os);
    }

    std::string getMarca(){ return marca; }
    std::string getModelo() { return modelo; }
    void setMarca(std::string &marc){ marca = marc; }
    void setModelo(std::string &mod) { modelo = mod; }
};
