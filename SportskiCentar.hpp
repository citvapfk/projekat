#ifndef SPORTSKICENTAR_H_INCLUDED
#define SPORTSKICENTAR_H_INCLUDED

#include "Osoba.hpp"

class SportskiCentar: public Kompanija
{
protected:
    SportskiObjekat objekti[10];
    Osoba zaposleni[20];
    int brojZaposlenih;
public:

    SportskiCentar(): Kompanija(), objekti({ SportskiObjekat() }), zaposleni({ }), brojZaposlenih(0) {};
    SportskiCentar(string imeKompanije, string delatnost, string adresa, int saldo, SportskiObjekat sportskiObjekti[10], Osoba zaposlenoOsoblje[]):Kompanija(imeKompanije, delatnost, adresa, saldo), objekti(), zaposleni() {
                for (int i = 0; i<10; i++) { objekti[i] = sportskiObjekti[i];}
                for (int i = 0; i<20; i++) { zaposleni[i] = zaposlenoOsoblje[i];}
            };

    int getBrojZaposlenih() { return brojZaposlenih;}
    Osoba getZaposleni(int i) {return zaposleni[i];}

    void dodajZaposlenog(Osoba novi){
        zaposleni[brojZaposlenih++]=novi;
    }





    //SportskiCentar(const SportskiCentar& s):SportskiObjekat(s):Osoba(s);
    //SportskiCentar(const SportskiObjekat& s, const Osoba& o);
};

#endif // SPORTSKICENTAR_H_INCLUDED
