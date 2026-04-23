#pragma once
#include <iostream>
#include <memory>
#include "Nodo.h"
template <class T>
class AparcamientoConNodos
{
private:
    std::shared_ptr<Nodo<T>> cabeza;
public:
    AparcamientoConNodos(): cabeza(nullptr){}
    std::shared_ptr<Nodo<T>> getCabeza(){ return cabeza; }

    void push(T &v)
    {
        auto nuevo = std::make_shared<Nodo<T>>(v);
        if (!cabeza)
        {
            cabeza = nuevo;
        } else
        {
            nuevo->setSiguiente(cabeza);
            cabeza = nuevo;
        }
    }
    void pop()
    {
        if (cabeza)
        {
            cabeza = cabeza->getSiguiente();
        }
    }
    T& top()
    {
        return cabeza->getDato();
    }

    void mostrarNodos()
    {
        auto aux = cabeza;
        int contador = 1;
        while (aux != nullptr)
        {
            std::cout<<contador<<".-"<<std::endl;
            std::cout<<aux->getDato().getMarca()<<std::endl;
            std::cout<<aux->getDato().getModelo()<<std::endl;
            std::cout<<"--------------------------"<<std::endl;
            contador++;
            aux = aux->getSiguiente();
        }
    }
};
