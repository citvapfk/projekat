#ifndef TIM_HPP_INCLUDED
#define TIM_HPP_INCLUDED
#include <vector>

class Tim
{
protected:
    string ime;
    Trener trener;
    vector<Igrac*> igraci;
public:
    Tim(string i, Trener t)
    {
        ime=i;
        trener=t;
    }

    void dodajIgraca(Igrac* i)
    {
        igraci.push_back(i);
    }

    int brojIgraca()
    {
        return igraci.size();
    }

    void obrisiIgraca(int redniBroj)
    {
        igraci.erase(igraci.begin()+redniBroj-1);
    }

    void ispisIgraca()
    {
        for (auto it=igraci.begin(); it!=igraci.end(); it++)
        {
            (*it)->predstaviSe();
        }
    }

    //ispis igraca koji imaju vise od 15 pobeda
    void ispisIgraca15()
    {
        for (auto it=igraci.begin(); it!=igraci.end(); it++)
        {
            if((*it)->getBrPobeda()>15)
                (*it)->predstaviSe();
        }
    }
};

#endif // TIM_HPP_INCLUDED
