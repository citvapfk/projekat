#ifndef REKREATIVAC_H_INCLUDED
#define REKREATIVAC_H_INCLUDED
#include "fajl.hpp"

class Rekreativac: public Osoba
{
protected:
    bool clan;
    SportskiCentar centar;
public:
    Rekreativac(string i, string p, pol po, string dat, double sal, bool cl, SportskiCentar c):Osoba(i, p, po, dat, sal), clan(cl), centar(c){};

    void ispisFajla(){
        citajTxt("Rekreativac.txt");
    }

    void predstaviSe(){
        Osoba::predstaviSe();
    }

    double bonus(){
        return Osoba::bonus();
    }

    void isplataClanarine(double iznos){
        smanjiSaldo(iznos);
        centar.povecajSaldo(iznos);
    }
};



#endif // REKREATIVAC_H_INCLUDED
