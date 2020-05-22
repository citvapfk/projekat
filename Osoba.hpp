#ifndef OSOBA_H_INCLUDED
#define OSOBA_H_INCLUDED
#include "Pol.hpp"


class Osoba
{
protected:
    string ime;
    string prezime;
    pol poll;
    string datumRodjenja;
    double saldo;

public:
    Osoba()
    {
        ime = "";
        prezime = "";
        poll = musko;
        datumRodjenja = "";
        saldo = 0;
    }
    Osoba(string i, string p, pol po, string dat, double sal)
    {
        ime = i;
        prezime = p;
        poll = po;
        datumRodjenja = dat;
        saldo = sal;
    }
    Osoba(const Osoba &o)
    {
        ime = o.ime;
        prezime = o.prezime;
        poll = o.poll;
        datumRodjenja = o.datumRodjenja;
        saldo = o.saldo;
    }

    string getIme() { return ime; }
    void setIme(string i) { ime = i; }

    string getPrezime() { return prezime; }
    void setPrezime(string p) { prezime = p; }

    double getSaldo() { return saldo; }
    void setSaldo(double s) { saldo = s;}

    void povecajSaldo(double iznos)
    {
        saldo = saldo + iznos;
    }

    void smanjiSaldo(double iznos)
    {
        saldo = saldo - iznos;
    }

    friend ostream &operator<<(ostream &izlaz, const Osoba &o)
    {
        izlaz << "Osoba: " << endl;
        izlaz << "Ime: " << o.ime << endl;
        izlaz << "Prezime: " << o.prezime << endl;
        if (o.poll == musko)
        {
            izlaz << "Pol: musko" << endl;
        }
        if (o.poll == zensko)
        {
            izlaz << "Pol: zensko" << endl;
        }
        izlaz << "Datum rodjenja: " << o.datumRodjenja << endl;
        izlaz << "Saldo: " << o.saldo << " dinara" << endl;
        return izlaz;
    }

    virtual void predstaviSe()
    {
        cout << "Zovem se " << ime << " " << prezime << endl;
    };

    virtual double bonus() { return 0; }
};

#endif // OSOBA_H_INCLUDED
