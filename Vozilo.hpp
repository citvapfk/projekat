#ifndef VOZILO_HPP_INCLUDED
#define VOZILO_HPP_INCLUDED

class Vozilo
{
protected:
    int brSedista;
    int brTockova;
public:
    Vozilo(){
        brSedista=0;
        brTockova=0;
    }
    Vozilo(int sedista, int tockovi){
        brSedista=sedista;
        brTockova=tockovi;
    }
};

#endif // VOZILO_HPP_INCLUDED
