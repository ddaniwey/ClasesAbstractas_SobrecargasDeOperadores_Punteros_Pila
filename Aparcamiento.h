#pragma once
#include <iostream>
#include <vector>
#include <memory>

template <typename T>
class Aparcamiento
{
private:
    std::vector<std::shared_ptr<T>> array;

public:
    // Aparcamiento(): array(nullptr) {}

    void push(std::shared_ptr<T> v)
    {
        if (array.size() <= 1)
        {
           //  std::cout<<"Tamaño: "<<array.size()<<std::endl;
            array.push_back(v);
        } else
        {
            std::cout<<"Aparcamiento completo!!"<<std::endl;
        }

    }

    void eliminar(std::shared_ptr<T> v)
    {
        for (int i = 0; i < array.size(); i++)
        {
            if (array[i] == v)
            {
                array.erase(array.begin() + i);
                return;
            }
        }
    }
    auto getArray(){ return array; }
};