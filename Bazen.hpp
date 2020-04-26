#ifndef BAZEN_H_INCLUDED
#define BAZEN_H_INCLUDED

class Bazen: public SportskiObjekat
{
protected:
    double duzina;
    double sirina;
    double dubina;
    double temperaturaVode;
public:
    Bazen():SportskiObjekat(0, false, false, ""), duzina(0), sirina(0), dubina(0), temperaturaVode(0) {};
    Bazen(int br, bool otv, bool izn, string rv, double duz, double sir, double dub, double temp):SportskiObjekat(br, otv, izn, rv), duzina(duz), sirina(sir), dubina(dub), temperaturaVode(temp) {};
    Bazen(const Bazen& b):SportskiObjekat(b), duzina(b.duzina), sirina(b.sirina), dubina(b.dubina), temperaturaVode(b.temperaturaVode){};
    Bazen(const SportskiObjekat& s, double duz, double sir, double dub, double temp):SportskiObjekat(s), duzina(duz), sirina(sir), dubina(dub), temperaturaVode(temp){};

    double getDuzina(){return duzina;}
    void setDuzina(double d){duzina = d;}
};

#endif // BAZEN_H_INCLUDED
