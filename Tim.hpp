#ifndef TIM_HPP_INCLUDED
#define TIM_HPP_INCLUDED
#include <vector>
#include "Igrac.hpp"
// #include "fajl.hpp"
#include <string>
#include <sstream>
#include <iostream>
#include <stdlib.h>
#include "fstream"

class Tim
{
protected:
    string ime;
    Trener *trener;
    vector<Igrac *> igraci;
    double saldo;

public:
    Tim() {}

    Tim(string i, Trener *t, double s)
    {
        ime = i;
        trener = t;
        saldo = s;
    }

    string getIme() { return ime; }
    void setIme(string i) { ime = i; }
    double getSaldo() { return saldo; }
    Trener *getTrener() { return trener; }
    void setTrener(Trener *t) { trener = t; }
    void setSaldo(double s) { saldo = s; }

    void dodajIgraca(Igrac *i)
    {
        igraci.push_back(i);
    }

    int brojIgraca()
    {
        return igraci.size();
    }

    void obrisiIgraca(int redniBroj)
    {
        igraci.erase(igraci.begin() + redniBroj - 1);
    }

    void ispisIgraca()
    {
        for (auto it = igraci.begin(); it != igraci.end(); it++)
        {
            (*it)->predstaviSe();
        }
    }

    void ispisSaldaIgraca()
    {
        for (auto it = igraci.begin(); it != igraci.end(); it++)
        {
            cout << (*it)->getIme() << " " << (*it)->getPrezime() << " - saldo je " << (*it)->getSaldo() << endl;
        }
    }

    //ispis igraca koji imaju vise od 15 pobeda
    void ispisIgraca15()
    {
        for (auto it = igraci.begin(); it != igraci.end(); it++)
        {
            if ((*it)->getBrPobeda() > 15)
                (*it)->predstaviSe();
        }
    }

    void povecajSaldo(double iznos)
    {
        saldo = saldo + iznos;
    }

    void smanjiSaldo(double iznos)
    {
        saldo = saldo - iznos;
    }

    bool isplatiTreneruPlatu()
    {
        if (saldo < trener->getPlata())
        {
            cout << "Tim " << ime << " nema sredstava da isplati treneru platu" << endl;
            return false;
        }
        smanjiSaldo(trener->getPlata());
        trener->povecajSaldo(trener->getPlata());
        cout << "Isplata je izvrsena \n";
        return true;
    }

    bool isplatiTreneruBonus()
    {
        if (saldo < trener->bonus())
        {
            cout << "Tim " << ime << " nema sredstava da isplati treneru bonus" << endl;
            return false;
        }
        smanjiSaldo(trener->bonus());
        trener->povecajSaldo(trener->bonus());
        cout << "Isplata bonusa od " << trener->bonus() << " je izvrsena \n";
        return true;
    }

    void dodajIgracaIzTxt(string nazivFajla)
    {

        string linija;
        ifstream fajl(nazivFajla);
        if (fajl.is_open())
        {
            while (getline(fajl, linija))
            {

                Igrac *igrac = new Igrac();
                stringstream ss(linija);
                int i = 0;
                while (ss.good())
                {
                    string substr;
                    getline(ss, substr, ',');
                    if (i == 0)
                        igrac->setIme(substr);
                    if (i == 1)
                        igrac->setPrezime(substr);
                    if (i == 3)
                        igrac->setDatumRodjenja(substr);
                    if (i == 4)
                        igrac->setSaldo(atof(substr.c_str()));
                    if (i == 5)
                        igrac->setDatumRodjenja(substr);
                    if (i == 6)
                        igrac->setPlata(atof(substr.c_str()));
                    if (i == 7)
                        igrac->setPozicija(substr);
                    if (i == 8)
                        igrac->setBrPoena(atoi(substr.c_str()));
                    if (i == 9)
                        igrac->setBrPobeda(atoi(substr.c_str()));
                    i++;
                }
                igrac->predstaviSe();
                dodajIgraca(igrac);
            }
            fajl.close();
        }
        else
        {
            cout<<"Fajl ne postoji \n";
            return;
        }
        
    }

    void isplataPlataSvimIgracima()
    {
        for (auto it = igraci.begin(); it != igraci.end(); it++)
        {
            if ((*it)->getPlata() > saldo)
            {
                cout << "Nema dovoljno sredstava na racunu tima za sledecu isplatu \n";
                return;
            }
            cout << (*it)->getIme() << " " << (*it)->getPrezime() << ", saldo je " << (*it)->getSaldo() << endl;
            double plata = (*it)->getPlata();
            cout << "Plata je " << plata << endl;
            (*it)->povecajSaldo(plata);
            smanjiSaldo(plata);
            cout << (*it)->getIme() << " " << (*it)->getPrezime() << ", novi saldo je " << (*it)->getSaldo() << endl;
        }
    }

    void isplataBonusaSvimIgracima()
    {
        for (auto it = igraci.begin(); it != igraci.end(); it++)
        {
            if ((*it)->bonus() > saldo)
            {
                cout << "Nema dovoljno sredstava na racunu tima za sledecu isplati \n";
                return;
            }
            cout << (*it)->getIme() << " " << (*it)->getPrezime() << ", saldo je " << (*it)->getSaldo() << endl;
            double bonus = (*it)->bonus();
            cout << "Bonus je " << bonus << endl;
            (*it)->povecajSaldo(bonus);
            smanjiSaldo(bonus);
            cout << (*it)->getIme() << " " << (*it)->getPrezime() << ", novi saldo je " << (*it)->getSaldo() << endl;
        }
    }

    void ispisiSaldaIgracaUtxt(string nazivFajla)
    {
        ofstream fajl;
        fajl.open(nazivFajla);

        for (auto it = igraci.begin(); it != igraci.end(); it++)
        {
            fajl << (*it)->getIme() << "," << (*it)->getPrezime() << "," << (*it)->getSaldo() << endl;
        }
        fajl.close();
    }
};

#endif // TIM_HPP_INCLUDED
