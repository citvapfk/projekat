#ifndef TERETANA_H_INCLUDED
#define TERETANA_H_INCLUDED

class Teretana: public SportskiObjekat
{
protected:
    bool tusevi;
    int sprave;
public:
    Teretana(int br, bool otv, bool izn, string rv, bool tus, int spr):SportskiObjekat(br, otv, izn, rv), tusevi(tus), sprave(spr){}
};

#endif // TERETANA_H_INCLUDED
