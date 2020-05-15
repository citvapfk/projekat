#ifndef TRENER_H_INCLUDED
#define TRENER_H_INCLUDED

class Trener: public Osoba
{
protected:
    string sport;
    int staz;
    int plata;
    int brPobeda;
public:
    Trener():Osoba(), sport(""), staz(0), plata(0), brPobeda(0){};
    Trener(string i, string p, poll po, string dat, double sal, string sprt, int stz, int plt, int pob):Osoba(i, p, po, dat, sal), sport(sprt), staz(stz), plata(plt), brPobeda(pob){};


    void predstaviSe(){
        cout<<"Ja sam trener, ";
        Osoba::predstaviSe();
        cout<<"Moj sport je "<<sport<<endl;
        cout<<"Moj ukupni trenerski staz je "<<staz<<" godina"<<endl;
    }

    int bonus(){
        //trener za svaku pobedu dobija bonus od 1000 evra
        return brPobeda*1000;
    }
};

#endif // TRENER_H_INCLUDED
