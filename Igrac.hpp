#ifndef IGRAC_H_INCLUDED
#define IGRAC_H_INCLUDED



class Igrac: public Osoba
{
protected:
    string sport;
    double plata;
    string pozicija;
    int brPoena;
    int brPobeda;
public:
    Igrac() : Osoba(), sport(""), plata(0), pozicija(""), brPoena(0), brPobeda(0) {}
    Igrac(string i, string p, pol po, string dat, double sal, string sprt, double plt, string poz, int poena, int pobeda):Osoba(i, p, po, dat, sal), sport(sprt), plata(plt), pozicija(poz), brPoena(poena), brPobeda(pobeda){};

    int getBrPobeda(){return brPobeda;}

    double getPlata() { return plata;}
    void setPlata(double p) {plata = p;}


    void predstaviSe(){
        cout<<"Ja sam igrac, ";
        Osoba::predstaviSe();
        cout<<"Moj sport je "<<sport<<endl;
        cout<<"Moja pozicija je "<<pozicija<<endl;
        cout <<"Moja plata je " << plata << " dinara" << endl;
        cout <<"Saldo na mom racunu je " << saldo << " dinara" << endl;
        // cout<<"Igram za "<<tim.getIme()<<endl;
    }

    void ispisiSaldoNaRacunu() {
         cout << ime << " " << prezime << " Saldo: " << saldo << endl;
    }


    double bonus(){
        //igrac za svaku pobedu dobija bonus od 100 evra, i za svaki poen jos 10 evra
        return brPoena*10+brPobeda*100;
    }

};

#endif // IGRAC_H_INCLUDED
