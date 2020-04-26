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
public:
    Osoba(){
        ime="";
        prezime="";
        pol=musko;
        datumRodjen="";
    }
    Osoba(string i, string p, poll po, string dat){
        ime=i;
        prezime=p;
        pol=po;
        datumRodjenja=dat;
    }
    Osoba(const Osoba& o){
        ime=o.ime;
        prezime=o.prezime;
        pol=o.pol;
        datumRodjenja=o.datumRodjenja;
    }
};

#endif // OSOBA_H_INCLUDED
