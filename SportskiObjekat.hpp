#ifndef SPORTSKIOBJEKAT_H_INCLUDED
#define SPORTSKIOBJEKAT_H_INCLUDED

class SportskiObjekat
{
protected:
    int brGledalaca;
    bool otvorenost;
    bool iznajmljivanje;
    string radnoVreme;
public:
    SportskiObjekat(int br, bool otv, bool izn, string rv){
        brGledalaca=br;
        otvorenost=otv;
        iznajmljivanje=izn;
        radnoVreme=rv;
    }
    SportskiObjekat(){
        brGledalaca=0;
        otvorenost=false;
        iznajmljivanje=false;
        radnoVreme="";
    }
    SportskiObjekat(const SportskiObjekat& s){
        brGledalaca=s.brGledalaca;
        otvorenost=s.otvorenost;
        iznajmljivanje=s.iznajmljivanje;
        radnoVreme=s.radnoVreme;
    }
};

#endif // SPORTSKIOBJEKAT_H_INCLUDED