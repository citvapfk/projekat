#include <iostream>

using namespace std;

#include "SportskiObjekat.hpp"
#include "Teretana.hpp"
#include "Bazen.hpp"
#include "Kompanija.hpp"
#include "SportskiCentar.hpp"
#include "Osoba.hpp"
#include "Igrac.hpp"
#include "Trener.hpp"
#include "Rekreativac.hpp"
#include "Sponzor.hpp"
#include "Ugovor.hpp"
#include "Tim.hpp"


int main()
{
    /*SportskiCentar sc;
    cout << "Broj zaposlenih je " << sc.getBrojZaposlenih() << endl;

    Osoba noviZaposleni("Vuk", "Vicentic", musko, "08.05.2003", 0);
    sc.dodajZaposlenog(noviZaposleni);

    cout << "Broj zaposlenih je " << sc.getBrojZaposlenih() << endl;
    cout << "Poslenji zaposleni je  " << sc.getZaposleni(sc.getBrojZaposlenih()-1).getIme() << endl;

    cout << "Saldo na racunu je " << noviZaposleni.getSaldo() << endl;
    noviZaposleni.povecajSaldo(100);
    cout << "Novi saldo na racunu je " << noviZaposleni.getSaldo() << endl;
    */

    //isplata plate treba da smanji saldo na racunu kompanije i da poveca saldo na racunu osobe
    //ovde treba da kompaniji dodamo novi objekat saldo tipa double, i funckionalnost (metodu) na SportskomCentru isplataPlate (Osoba, double)
    // i metod na klasi Osoba uplataclanarine(SporstkiCentar, double )

    /*Rekreativac r("", "", musko, ".", 0, true);
    r.ispisFajla();


    Osoba o("Vuk", "Vicentic", musko, "08.05.2003", 500);
    cout<<o<<endl;
    SportskiObjekat s;
    cout<<s<<endl;
    Kompanija k;
    cout<<k<<endl;

    Bazen b;
    Bazen b2;
    cout<<b2.getBrojObjekata();
    */

    Igrac i("Vuk", "Vicentic", musko, "8.5.2003.", 500, "kosarka", 500, "centar", 378, 29);
    i.predstaviSe();
    cout<<"Ova osoba ima ukupan bonus od "<<i.bonus()<<" evra"<<endl;
    Trener t("Andrea", "Trijkijeri", musko, "3.5.1978.", 800000, "kosarka", 10, 150000, 28);
    t.predstaviSe();
    cout<<"Ova osoba ima ukupan bonus od "<<t.bonus()<<" evra"<<endl;

    Tim tim("Partizan", t);
    tim.dodajIgraca(&i);

    Igrac i2("Ognjen", "Jaramaz", musko, "8.6.2003.", 94689, "kosarka", 12500, "bek", 2489, 29);
    tim.dodajIgraca(&i2);
    cout<<"Tim ima "<<tim.brojIgraca()<<" igraca"<<endl;
    Igrac i3("Vanja", "Marinkovic", musko, "2.6.2003.", 70000, "kosarka", 7500, "bek", 1200, 12);
    tim.dodajIgraca(&i3);
    //ispis igraca ce prikazati sva 3 igraca: i, i2 i i3

    cout<<"Broj igraca je "<<  tim.brojIgraca() <<endl;
    cout<<"Svi igraci u timu su"<<endl;
    tim.ispisIgraca();
    cout<<endl;

    cout<<"Svi igraci u timu sa vise od 15 pobeda su"<<endl;
    tim.ispisIgraca15();
    cout<<endl;

    tim.obrisiIgraca(3);
    //ovaj ispis ce prikazati samo prva 2 jer smo treceg igraca izbrisali
    cout<<"Broj igraca je "<<  tim.brojIgraca() <<endl;
    cout<<"Svi igraci u timu posle brisanja jednog igraca"<<endl;
    tim.ispisIgraca();
}
