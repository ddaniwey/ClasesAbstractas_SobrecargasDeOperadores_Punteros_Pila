cmake_minimum_required(VERSION 4.1)
project(VehiculoClassAbstract)

set(CMAKE_CXX_STANDARD 20)

add_executable(VehiculoClassAbstract main.cpp
        Vehiculo.h
        VehiculoFamiliar.h
        VehiculoElectrico.h
        AparcamientoConNodos.h
        Nodo.h
        Aparcamiento.h)
