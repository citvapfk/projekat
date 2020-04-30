#ifndef OSOBA_H_INCLUDED
#define OSOBA_H_INCLUDED

enum poll {musko, zensko};

class Osoba
{
protected:
    string ime;
    string prezime;
    poll pol;
    string datumRodjenja;
    double saldo;
public:
    Osoba(){
        ime="";
        prezime="";
        pol=musko;
        datumRodjenja="";
        saldo=0;
    }
    Osoba(string i, string p, poll po, string dat, double sal){
        ime=i;
        prezime=p;
        pol=po;
        datumRodjenja=dat;
        saldo = sal;
    }
    Osoba(const Osoba& o){
        ime=o.ime;
        prezime=o.prezime;
        pol=o.pol;
        datumRodjenja=o.datumRodjenja;
        saldo = o.saldo;
    }

    string getIme() {return ime;}
    double getSaldo() {return saldo;}

    double povecajSaldo(double iznos) {
        saldo = saldo + iznos;
    }

    double smanjiSaldo(double iznos) {
        saldo = saldo - iznos;
    }

};

#endif // OSOBA_H_INCLUDED
