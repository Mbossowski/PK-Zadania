#pragma once

template <class T>
class Kolejka
{
   private:
        T tab[10];
        int zajetosc;
        bool pelna;

   public:
        Kolejka();

        void wloz(const T In);

        T wez();

        int ile_elem();

        bool czyPusta();

        bool czyPelna();

        void drukuj();

};

