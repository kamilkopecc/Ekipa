//
// Created by kamil on 29.01.2024.
//

#ifndef EGZAMIN_PRZYGOTOWANIE_DATA_H
#define EGZAMIN_PRZYGOTOWANIE_DATA_H


class Data {
private:
    int m_nDzien;
    int m_nMiesiac;
    int m_nRok;
public:
    Data(void);

    void Ustaw(int d, int m, int r);

    int Dzien()const;
    int Miesiac()const;
    int Rok()const;

    void Wypisz()const;

    void Wpisz();

    void Koryguj();

    bool Porownaj(const Data &wzor)const;
};


#endif //EGZAMIN_PRZYGOTOWANIE_DATA_H
