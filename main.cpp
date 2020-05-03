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

    Rekreativac r("", "", musko, ".", 0, true);
    r.ispisFajla();
}
