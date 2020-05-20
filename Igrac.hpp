#ifndef IGRAC_H_INCLUDED
#define IGRAC_H_INCLUDED

class Igrac: public Osoba
{
protected:
    string sport;
    int plata;
    string pozicija;
    int brPoena;
    int brPobeda;
    Tim tim;
public:
    Igrac(string i, string p, poll po, string dat, double sal, string sprt, int plt, string poz, int poena, int pobeda, Tim t):Osoba(i, p, po, dat, sal), sport(sprt), plata(plt), pozicija(poz), brPoena(poena), brPobeda(pobeda), tim(t){};

    int getBrPobeda(){return brPobeda;}

    void predstaviSe(){
        cout<<"Ja sam igrac, ";
        Osoba::predstaviSe();
        cout<<"Moj sport je "<<sport<<endl;
        cout<<"Moja pozicija je "<<pozicija<<endl;
        cout<<"Igram za "<<tim.getIme()<<endl;
    }


    int bonus(){
        //igrac za svaku pobedu dobija bonus od 100 evra, i za svaki poen jos 10 evra
        return brPoena*10+brPobeda*100;
    }

    void isplataPlate(){
        povecajSaldo(plata+bonus());
        tim.smanjiSaldo(plata+bonus());
    }
};

#endif // IGRAC_H_INCLUDED
