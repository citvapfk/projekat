#ifndef SPONZOR_H_INCLUDED
#define SPONZOR_H_INCLUDED

class Sponzor: public Kompanija
{
protected:
    string nacinReklame;
public:
    Sponzor() : Kompanija() {};

    void setNacinReklame(string nr) { nacinReklame = nr;};
    string getNacinReklame() { return nacinReklame; }
};

#endif // SPONZOR_H_INCLUDED
