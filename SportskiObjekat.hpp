#ifndef SPORTSKIOBJEKAT_H_INCLUDED
#define SPORTSKIOBJEKAT_H_INCLUDED

class SportskiObjekat
{
protected:
    int brGledalaca;
    bool otvorenost;
    bool iznajmljivanje;
    string radnoVreme;
    static int brojObjekata;
public:
    SportskiObjekat(int br, bool otv, bool izn, string rv){
        brGledalaca=br;
        otvorenost=otv;
        iznajmljivanje=izn;
        radnoVreme=rv;
        brojObjekata++;
    }
    SportskiObjekat(){
        brGledalaca=0;
        otvorenost=false;
        iznajmljivanje=false;
        radnoVreme="";
        brojObjekata++;
    }
    SportskiObjekat(const SportskiObjekat& s){
        brGledalaca=s.brGledalaca;
        otvorenost=s.otvorenost;
        iznajmljivanje=s.iznajmljivanje;
        radnoVreme=s.radnoVreme;
        brojObjekata++;
    }

    int getBrGledalaca(){return brGledalaca;}
    bool getOtvorenost(){return otvorenost;}
    bool getIznajmljivanje(){return iznajmljivanje;}
    void setBrGledalaca(int b){brGledalaca=b;}
    void setOtvorenost(int o){otvorenost=o;}
    void setIznajmljivanje(int i){iznajmljivanje=i;}
    int getBrojObjekata(){return brojObjekata;}

    friend ostream& operator<<(ostream& izlaz, const SportskiObjekat& s){
        izlaz<<"Sportski objekat: "<<endl;
        izlaz<<"Broj gledalaca: "<<s.brGledalaca<<endl;
        if(s.otvorenost){izlaz<<"Otvorenost: da"<<endl;}
        if(!s.otvorenost){izlaz<<"Otvorenost: ne"<<endl;}
        if(s.iznajmljivanje){izlaz<<"Iznajmljivanje: da"<<endl;}
        if(!s.iznajmljivanje){izlaz<<"Iznajmljivanje: ne"<<endl;}
        izlaz<<"Radno vreme: "<<s.radnoVreme<<endl;
        return izlaz;
    }
};

int SportskiObjekat::brojObjekata=0;

#endif // SPORTSKIOBJEKAT_H_INCLUDED
