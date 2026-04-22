#include <iostream>
#include <memory>

#include "Vehiculo.h"
#include "VehiculoElectrico.h"
#include "VehiculoFamiliar.h"

int main()
{

    VehiculoFamiliar toyota = {"Toyota", "Avensis", 40};
    std::cout<<toyota;

    VehiculoElectrico tesla = {"Tesla", "base", 45};
    std::cout <<"Autonomía: " << tesla.calcularAutonomia() <<std::endl;
    ++tesla;
    std::cout<<tesla<<std::endl;

    return 0;
}