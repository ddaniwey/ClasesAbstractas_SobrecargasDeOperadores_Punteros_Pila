#include <iostream>
#include <memory>

#include "Aparcamiento.h"
#include "Vehiculo.h"
#include "VehiculoElectrico.h"
#include "VehiculoFamiliar.h"
#include "AparcamientoConNodos.h"



// PARTE 4 DEL EJERCICIO
int parkingPunteros()
{
    auto renault = std::make_shared<VehiculoElectrico>("Renault", "Captur", 32);
    auto tesla = std::make_shared<VehiculoElectrico>("Tesla", "Base", 40);
    auto mini = std::make_shared<VehiculoElectrico>("Mini", "Cooper", 99);

    Aparcamiento<VehiculoElectrico> parkingElectrico;
    parkingElectrico.push(renault);
    parkingElectrico.push(tesla);
    parkingElectrico.push(mini);

    auto tamano = parkingElectrico.getArray().size();
    auto array = parkingElectrico.getArray();
    for (int i = 0; i < tamano ; i++)
    {
        std::cout<<"Modelo: "<<array[i]->getModelo()<<std::endl;
        std::cout<<"Marca: "<<array[i]->getMarca()<<std::endl;
        std::cout<<"Autonomia: "<<array[i]->calcularAutonomia()<<std::endl;
        std::cout<<"-------------------------------------------"<<std::endl;
    }
    parkingElectrico.eliminar(renault);
    std::cout<<"Vehiculo eliminado"<<std::endl;
    std::cout<<"_____________________"<<std::endl;
    auto tamano2 = parkingElectrico.getArray().size();
    auto array2 = parkingElectrico.getArray();
    for (int i = 0; i < tamano2 ; i++)
    {
        std::cout<<"Modelo: "<<array2[i]->getModelo()<<std::endl;
        std::cout<<"Marca: "<<array2[i]->getMarca()<<std::endl;
        std::cout<<"Autonomia: "<<array2[i]->calcularAutonomia()<<std::endl;
        std::cout<<"-------------------------------------------"<<std::endl;
    }
    return 0;
}


int main()
{
    auto tesla = std::make_shared<VehiculoElectrico>("Tesla", "Base", 40);
    std::cout<<"Calculando autonomía...\n" << tesla->calcularAutonomia()<<" km de autonomía"<<std::endl;
    try
    {
        tesla->consumir(120);
    } catch (std::out_of_range &e)
    {
        std::cout<<"Error, este vehículo no puede realizar el viaje. " << e.what() <<std::endl;
    }

    // ejecutarAparcamientoDeVehiculosFamiliares();
    parkingPunteros();
    return 0;
}

// EXTRA, LO PONGO ABAJO PORQUE NO ES NECESARIO EJECUTARLO PARA LA PRÁTICA
// He conseguido crear una pila de vehiculos, usando un nodo el cual recibe el tipo de vehículos que vamos a meter.
int ejecutarAparcamientoDeVehiculosFamiliares()
{
    VehiculoFamiliar toyota = {"Toyota", "Avensis", 50};
    VehiculoFamiliar duster = {"Dacia", "Duster", 20};
    AparcamientoConNodos<VehiculoFamiliar> aparcamientoCochesRojos;
    aparcamientoCochesRojos.push(toyota);
    aparcamientoCochesRojos.push(duster);
    aparcamientoCochesRojos.mostrarNodos();
    return 0;
}
