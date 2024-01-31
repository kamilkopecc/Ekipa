//
// Created by kamil on 29.01.2024.
//

#include "Ekipa.h"
#include <iostream>
#include <cstring>

Ekipa::Ekipa(long int dl) : dlugosc(dl), aktualne_wypelnienie(0)
{
    tablica = new Pracownik[dlugosc];
}

Ekipa::~Ekipa()
{
    delete[] tablica;
}

void Ekipa::DodajEkipa(const Pracownik& pracownik)
{
    if (aktualne_wypelnienie < dlugosc) {
        tablica[aktualne_wypelnienie++] = pracownik;
    } else {
        std::cout<<"Ekipa jest juz pelna!";
    }
}

void Ekipa::ModyfikujEkipa(int index)
{
    if (index >= 0 && index < aktualne_wypelnienie) {
        std::cout<<"Modyfikujesz pracownika: \n";
        tablica[index].Wypisz();
        std::cout<<"\n";
        tablica[index].Wpisz();
    } else {
        std::cout<<"Podano niepoprawny indeks pracownika";
    }
}

int Ekipa::SprawdzImie(const char *imie)const
{
        for (int i = 0; i < aktualne_wypelnienie; i++) {
            if (strcmp(tablica[i].Imie(), imie) == 0) {
                return i; // Znaleziono pracownika
            }
        }
        return -1; // Nie znaleziono pracownika
}

int Ekipa::SprawdzNazwisko(const char *nazwisko) const
{
    for (int i = 0; i < aktualne_wypelnienie; i++) {
        if (strcmp(tablica[i].Nazwisko(), nazwisko) == 0) {
            return i; // Znaleziono pracownika
        }
    }
    return -1; // Nie znaleziono pracownika
}

void Ekipa::WypiszEkipa() const
{
    for (int i = 0; i < aktualne_wypelnienie; i++) {
        tablica[i].Wypisz();
        std::cout << std::endl;
    }
}