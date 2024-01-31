//
// Created by kamil on 29.01.2024.
//

#ifndef EGZAMIN_PRZYGOTOWANIE_EKIPA_H
#define EGZAMIN_PRZYGOTOWANIE_EKIPA_H
#include "Pracownik.h"

class Ekipa {
private:
    Pracownik *tablica;
    long int dlugosc;
    int aktualne_wypelnienie;
public:
    Ekipa(long int dlugosc=0);
    ~Ekipa();

    void DodajEkipa(const Pracownik& pracownik);

    void ModyfikujEkipa(int index);

    int SprawdzImie(const char *imie) const;

    int SprawdzNazwisko(const char *nazwisko) const;

    void WypiszEkipa() const;
};


#endif //EGZAMIN_PRZYGOTOWANIE_EKIPA_H
