//
// Created by kamil on 29.01.2024.
//

#include "Pracownik.h"
#include <cstring>
#include <iostream>

using namespace std;

Pracownik::Pracownik(const char* imie, const char* nazwisko)
{
    m_pszImie = new char[strlen(imie) + 1];
    strcpy(m_pszImie, imie);

    m_pszNazwisko = new char[strlen(nazwisko) + 1];
    strcpy(m_pszNazwisko, nazwisko);
}

Pracownik::Pracownik()
{
    m_pszImie = nullptr;
    m_pszNazwisko = nullptr;
}

Pracownik::~Pracownik()
{
    delete[] m_pszImie;
    delete[] m_pszNazwisko;
}

const char *Pracownik::Imie() const
{
    return m_pszImie;
}

const char *Pracownik::Nazwisko() const
{
    return m_pszNazwisko;
}

void Pracownik::Imie(const char *nowe_imie)
{
    delete[] m_pszImie;
    m_pszImie = new char[strlen(nowe_imie) + 1];
    strcpy(m_pszImie, nowe_imie);
}

void Pracownik::Nazwisko(const char *nowe_nazwisko)
{
    delete[] m_pszNazwisko;
    m_pszNazwisko = new char[strlen(nowe_nazwisko) + 1];
    strcpy(m_pszNazwisko, nowe_nazwisko);
}

void Pracownik::DataUrodzenia(int nowy_dzien, int nowy_miesiac, int nowy_rok)
{
    m_DataUrodzenia.Ustaw(nowy_dzien, nowy_miesiac, nowy_rok);
}

//void Pracownik::Wypisz() const
//{
//    std::cout<<m_pszImie<<" ";
//    std::cout<<m_pszNazwisko<<" ";
//    m_DataUrodzenia.Wypisz();
//}

void Pracownik::Wypisz() const
{
    std::cout << m_pszImie << " ";
    std::cout << m_pszNazwisko << " ";
    m_DataUrodzenia.Wypisz();
}

//void Pracownik::Wpisz()
//{
//    std::cout<<"Podaj imie: ";
//    std::cin>>m_pszImie;
//    std::cout<<"\nPodaj nazwisko: ";
//    std::cin>>m_pszNazwisko;
//    m_DataUrodzenia.Wpisz();
//}

void Pracownik::Wpisz()
{
    std::string temp;

    std::cout << "Podaj imie: ";
    getline(std::cin, temp);
    delete[] m_pszImie;
    m_pszImie = new char[temp.length() + 1];
    strcpy(m_pszImie, temp.c_str());

    std::cout << "Podaj nazwisko: ";
    getline(std::cin, temp);
    delete[] m_pszNazwisko;
    m_pszNazwisko = new char[temp.length() + 1];
    strcpy(m_pszNazwisko, temp.c_str());

    m_DataUrodzenia.Wpisz();
}
bool Pracownik::SprawdzImie(const char* por_imie) const
{
    //TODO
}
bool Pracownik::SprawdzNazwisko(const char* por_nazwisko) const
{
    //TODO
}