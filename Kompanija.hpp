#ifndef KOMPANIJA_HPP_INCLUDED
#define KOMPANIJA_HPP_INCLUDED

class Kompanija
{
protected:
    string ime;
    string delatnost;
    string adresa;
    double saldo;
public:
    Kompanija(){
        ime="";
        delatnost="";
        adresa="";
        saldo=0;
    }
    Kompanija(string i, string d, string a, double s){
        ime=i;
        delatnost=d;
        adresa=a;
        saldo=s;
    }

    void setSaldo(double s){saldo=s;}
    double getSaldo(){return saldo;}

    friend ostream& operator<<(ostream& izlaz, const Kompanija& k){
        izlaz<<"Kompanija: "<<endl;
        izlaz<<"Ime: "<<k.ime<<endl;
        izlaz<<"Delatnost: "<<k.delatnost<<endl;
        izlaz<<"Adresa: "<<k.adresa<<endl;
        return izlaz;
    }

    double povecajSaldo(double iznos) {
        saldo = saldo + iznos;
    }

    double smanjiSaldo(double iznos) {
        saldo = saldo - iznos;
    }
};

#endif // KOMPANIJA_HPP_INCLUDED
