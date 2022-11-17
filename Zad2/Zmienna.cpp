#include "Zmienna.h"
#include <iostream>

template <class T>
void Zmienna<T>::Input(const T In)
{
    Var = In;
}

template <class T>
void Zmienna<T>::Display()
{
    std::cout << Var << std::endl;
}
