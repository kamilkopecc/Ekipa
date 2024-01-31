//
// Created by kamil on 29.01.2024.
//

#ifndef EGZAMIN_PRZYGOTOWANIE_PRACOWNIK_H
#define EGZAMIN_PRZYGOTOWANIE_PRACOWNIK_H
#include "Data.h"

class Pracownik {
private:
    char* m_pszImie;
    char* m_pszNazwisko;
    Data m_DataUrodzenia;
public:
    Pracownik(void);
    Pracownik(const char * imie, const char * nazwisko);

    ~Pracownik();

    const char* Imie() const;
    const char* Nazwisko() const;

    void Imie(const char* nowe_imie);
    void Nazwisko(const char* nowe_nazwisko);
    void DataUrodzenia(int nowy_dzien, int nowy_miesiac, int nowy_rok);

    void Wypisz() const;

    void Wpisz();

    bool SprawdzImie(const char* por_imie) const;
    bool SprawdzNazwisko(const char* por_nazwisko) const;
};


#endif //EGZAMIN_PRZYGOTOWANIE_PRACOWNIK_H
