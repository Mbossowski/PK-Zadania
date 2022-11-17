#include "Kolejka.h"
#include <iostream>

template <class T>
Kolejka<T>::Kolejka() : zajetosc(0), pelna(false)
{

};

template <class T>
void Kolejka<T>::wloz(const T In)
{
    if(!pelna)
    {
        tab[zajetosc] = In;
        zajetosc++;
        if(zajetosc==10)
        {
            pelna=true;
        }

        return;
    }
    else
    {
        std::cout << "An attempt to increase the full queue was aborted. Program terminated";
        exit(420);
    }
};

template <class T>
T Kolejka<T>::wez()
{

    if(zajetosc>0)
    {
        T buffor = tab[0];
        for(int i = 0; i<zajetosc; i++)
        {
            tab[i] = tab[i+1];
        }
        zajetosc--;
        if(pelna)
        {
            pelna= false;
        }
        return buffor;
    }
    else
    {
        std::cout << "An attempt to shrink an empty queue was aborted. Program terminated";
        exit(404);
    }
};

template <class T>
int Kolejka<T>::ile_elem()
{
    return zajetosc;
}

template <class T>
bool Kolejka<T>::czyPusta()
{
    if(zajetosc>0)
        return false;
    else
        return true;
}

template <class T>
bool Kolejka<T>::czyPelna()
{
    return pelna;
}

template <class T>
void Kolejka<T>::drukuj()
{
    for(int i = 0; i<zajetosc; i++)
    {
        std::cout << tab[i] << std::endl;
    }
}
