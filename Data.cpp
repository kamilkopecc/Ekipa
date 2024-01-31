//
// Created by kamil on 29.01.2024.
//
#include "Data.h"
#include <iostream>

using namespace std;

Data::Data()
{
    m_nDzien='\0';
    m_nMiesiac='\0';
    m_nRok='\0';
}

void Data::Ustaw(int d, int m, int r)
{
    m_nDzien=d;
    m_nMiesiac=m;
    m_nRok=r;
}

int Data::Dzien()const
{
    return m_nDzien;
}
int Data::Miesiac()const
{
    return m_nMiesiac;
}
int Data::Rok()const
{
    return m_nRok;
}

void Data::Wypisz()const
{
    cout<<m_nDzien<<"-"<<m_nMiesiac<<"-"<<m_nRok;
}
void Data::Wpisz()
{
    cout<<"Podaj dzien: \n";
    cin>>m_nDzien;
    cout<<"Podaj miesiac: \n";
    cin>>m_nMiesiac;
    cout<<"Podaj rok: \n";
    cin>>m_nRok;
}

void Data::Koryguj()
{
    //TODO
}

bool Data::Porownaj(const Data &wzor) const
{
    //TODO
}