#pragma once
#include <iostream>

#include "AparcamientoConNodos.h"

template <class T>
class Nodo
{
private:
    T dato;
    std::shared_ptr<Nodo<T>> siguiente;
public:
    Nodo(T dat): dato(dat), siguiente(nullptr) {}
    std::shared_ptr<Nodo<T>> getSiguiente() { return siguiente; }
    void setSiguiente(std::shared_ptr<Nodo<T>> sig) { siguiente = sig; }
    T getDato(){ return dato; }
};
