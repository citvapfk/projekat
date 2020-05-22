#ifndef TIM_HPP_INCLUDED
#define TIM_HPP_INCLUDED
#include <vector>
#include "Igrac.hpp"
#include "fajl.hpp"
#include <string>
#include <sstream>
#include <iostream>
#include <stdlib.h>


class Tim
{
protected:
    string ime;
    Trener* trener;
    vector<Igrac*> igraci;
    double saldo;
public:
    Tim(string i, Trener* t, double s)
    {
        ime=i;
        trener=t;
        saldo=s;
    }

    string getIme(){return ime;}
    double getSaldo() {return saldo;}

    void dodajIgraca(Igrac* i)
    {
        igraci.push_back(i);
    }

    int brojIgraca()
    {
        return igraci.size();
    }

    void obrisiIgraca(int redniBroj)
    {
        igraci.erase(igraci.begin()+redniBroj-1);
    }

    void ispisIgraca()
    {
        for (auto it=igraci.begin(); it!=igraci.end(); it++)
        {
            (*it)->predstaviSe();
        }
    }

    //ispis igraca koji imaju vise od 15 pobeda
    void ispisIgraca15()
    {
        for (auto it=igraci.begin(); it!=igraci.end(); it++)
        {
            if((*it)->getBrPobeda()>15)
                (*it)->predstaviSe();
        }
    }

    void povecajSaldo(double iznos) {
        saldo = saldo + iznos;
    }

    void smanjiSaldo(double iznos) {
        saldo = saldo - iznos;
    }

    bool isplatiTreneruPlatu() {
        if (saldo < trener->getPlata()) {
            cout << "Tim " << ime << " nema sredstava da isplati treneru platu" << endl;
            return false;
        }
        smanjiSaldo(trener->getPlata());
        trener->povecajSaldo(trener->getPlata());
        return true;
    }

    bool isplatiTreneruBonus() {
        if (saldo < trener->bonus()) {
            cout << "Tim " << ime << " nema sredstava da isplati treneru bonus" << endl;
            return false;
        }
        smanjiSaldo(trener->bonus());
        trener->povecajSaldo(trener->bonus());
        return true;
    }

    void dodajIgracaIzTxt(string nazivFajla)
    {
        string linija;
        ifstream fajl (nazivFajla);
        if (fajl.is_open())
        {
            while ( getline (fajl,linija) )
            {
                Igrac igrac;
                stringstream ss(linija);
                int i=0;
                while(ss.good()){
                    string substr;
                    getline(ss, substr, ',');
                    if (i == 0) igrac.setIme(substr);
                    if (i == 1) igrac.setPrezime(substr);
                    if (i == 4) igrac.setSaldo(atof(substr.c_str()));
                    if (i == 6) igrac.setPlata(atof(substr.c_str()));
                    i++;
                }
                igrac.predstaviSe();
                dodajIgraca(&igrac);
            }
            fajl.close();
        }
    }

    bool isplataPlataSvimIgracima() {
        for (auto it=igraci.begin(); it!=igraci.end(); it++) {
            double plata = (*it)->getPlata();
            cout << "Plata je" << plata << endl;
            (*it)->povecajSaldo(plata);
             //smanjiSaldo(plata);
             cout << (*it)->getIme() << " " <<  (*it)->getPrezime()  << ", novi saldo je" << (*it)->getSaldo()   << endl;
        }


        return true;
    }


};

#endif // TIM_HPP_INCLUDED
