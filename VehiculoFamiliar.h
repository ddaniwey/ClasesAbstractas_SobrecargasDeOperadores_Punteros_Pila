#pragma once
#include <iostream>

class VehiculoFamiliar : public Vehiculo {
private:
double combustible;
public:
    VehiculoFamiliar(std::string mod, std::string marc, double comb): Vehiculo(mod, marc), combustible(comb) {}
    double calcularAutonomia() override
    {
        return combustible * 2;
    }

    std::ostream& imprimir(std::ostream& os) override
    {
        os << "Vehículo Familiar: " << std::endl;
        os << "Marca: " << marca << std::endl;
        os << "Modelo: " << modelo << std::endl;
        os << "Combustible: "<< combustible << std::endl;
    }

};