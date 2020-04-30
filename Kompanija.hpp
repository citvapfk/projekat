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
};

#endif // KOMPANIJA_HPP_INCLUDED
