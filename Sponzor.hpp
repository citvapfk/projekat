#ifndef SPONZOR_H_INCLUDED
#define SPONZOR_H_INCLUDED

class Sponzor: public Kompanija
{
protected:
    string nacinReklame;
    int duzinaSaradnje;
public:
    Sponzor() : Kompanija() {};

    void setNacinReklame(string nr) { nacinReklame = nr;};
    string getNacinReklame() { return nacinReklame; }
    void setDuzinaSaradnje(int d){duzinaSaradnje = d;}
    int getDuzinaSaradnje() {return duzinaSaradnje;}
};

#endif // SPONZOR_H_INCLUDED
