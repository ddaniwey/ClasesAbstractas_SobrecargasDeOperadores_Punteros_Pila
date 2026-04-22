#pragma once
#include <iostream>
class VehiculoElectrico : public Vehiculo
{
private:
    double nivelDeEnergia;
public:
    VehiculoElectrico(std::string marc, std::string mod, double niv): Vehiculo(marc, mod), nivelDeEnergia(niv){}
    double calcularAutonomia() override
    {
        return nivelDeEnergia * 3;
    }
    // ++prefijo
    VehiculoElectrico& operator++()
    {
        nivelDeEnergia = 100;
        return *this;
    }
    // No lo pide pero pongo también el postfijo ++
    VehiculoElectrico operator++(int){ // int para diferenciar del otro
    }

    std::ostream& imprimir(std::ostream& os) override
    {
        os<< "Vehículo Eléctrico: " << std::endl;
        os <<"Marca: "<< marca << std::endl;
        os <<"Modelo: "<< modelo << std::endl;
        os <<"Nivel de energía: "<< nivelDeEnergia <<"%"<< std::endl;
    }
};

