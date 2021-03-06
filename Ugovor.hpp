#ifndef UGOVOR_H_INCLUDED
#define UGOVOR_H_INCLUDED

class Ugovor
{
protected:
    Sponzor *sponzor;
    SportskiCentar *sportskiCentar;
    int duzina;
    double iznos;

public:
    Ugovor() {}
    Ugovor(Sponzor *sp, SportskiCentar *sc, int duz, double izn)
    {
        sponzor = sp;
        sportskiCentar = sc;
        duzina = duz;
        iznos = izn;
    };
    double getIznos() { return iznos; }
    void setIznos(double i) { iznos = i; }

    bool realizujUgovor()
    {
        if (sponzor->getSaldo() < iznos)
        {
            cout << "Sponzor nema sredstava da realzuje ugovor" << endl;
            return false;
        }
        sponzor->smanjiSaldo(iznos);
        sportskiCentar->povecajSaldo(iznos);
        cout << "Ugovor je realizovan \n";
        return true;
    }
};

#endif // UGOVOR_H_INCLUDED
