#ifndef KOMPANIJA_HPP_INCLUDED
#define KOMPANIJA_HPP_INCLUDED

class Kompanija
{
protected:
    string ime;
    string delatnost;
    string adresa;
public:
    Kompanija(){
        ime="";
        delatnost="";
        adresa="";
    }
    Kompanija(string i, string d, string a){
        ime=i;
        delatnost=d;
        adresa=a;
    }

    friend ostream& operator<<(ostream& izlaz, const Kompanija& k){
        izlaz<<"Kompanija: "<<endl;
        izlaz<<"Ime: "<<k.ime<<endl;
        izlaz<<"Delatnost: "<<k.delatnost<<endl;
        izlaz<<"Adresa: "<<k.adresa<<endl;
        return izlaz;
    }
};

#endif // KOMPANIJA_HPP_INCLUDED
