#ifndef REKREATIVAC_H_INCLUDED
#define REKREATIVAC_H_INCLUDED
#include "fstream"

void citajTxt(string Rekreativac)
{
    string linija;
    ifstream fajl (Rekreativac);
    if (fajl.is_open())
    {
        while ( getline (fajl,linija) )
        {
            cout << linija << '\n';
        }
        fajl.close();
    }

    else
        cout << "Neuspesno otvoren fajl";

}

class Rekreativac: public Osoba
{
protected:
    bool clan;
    SportskiCentar centar;
public:
    Rekreativac(string i, string p, poll po, string dat, double sal, bool cl, SportskiCentar c):Osoba(i, p, po, dat, sal), clan(cl), centar(c){};

    void ispisFajla(){
        citajTxt("Rekreativac.txt");
    }

    void predstaviSe(){
        Osoba::predstaviSe();
    }

    int bonus(){
        return Osoba::bonus();
    }

    void isplataClanarine(){
        smanjiSaldo(2000);
        centar.povecajSaldo(2000);
    }
};



#endif // REKREATIVAC_H_INCLUDED
