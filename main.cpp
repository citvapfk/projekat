#include <iostream>

using namespace std;

#include "SportskiObjekat.hpp"
#include "Teretana.hpp"
#include "Bazen.hpp"
#include "Kompanija.hpp"
#include "Trener.hpp"
#include "Igrac.hpp"
#include "Tim.hpp"
#include "SportskiCentar.hpp"
#include "Osoba.hpp"
#include "Rekreativac.hpp"
#include "Sponzor.hpp"
#include "Ugovor.hpp"


void NapraviSportskiCentar()
{
    cout << endl
         << "Sportski centar:\n"
         << "Sportski centar se sastoji od bazena, teretane, zaposlenih, i rekreativaca\n";


    /// pravimo bazen
    cout   << "Bazen: \n";
    cout<< "Broj gledalaca: ";
    int brojGledalaca;
    cin>>brojGledalaca;
    cout<< "Otvorenost (da-1/ne-0): ";
    bool otvorenost;
    cin>>otvorenost;
    cout<< "Iznajmljivanje (da-1/ne-0): ";
    bool iznajmljivanje;
    cin>>iznajmljivanje;
    cout<< "Radno vreme: ";
    string radnoVreme;
    cin>>radnoVreme;
    cout<< "Duzina (m): ";
    double duzina;
    cin>>duzina;
    cout<<"Sirina (m): ";
    double sirina;
    cin>>sirina;
    cout<<"Dubina (m): ";
    double dubina;
    cin>>dubina;
    cout<<"Temperatura vode (C): ";
    double temperaturaVode;
    cin>>temperaturaVode;
    Bazen bazen(brojGledalaca, otvorenost, iznajmljivanje, radnoVreme, duzina, sirina, dubina, temperaturaVode);


    /// pravimo teretanu
    cout<<"Teretana: \n";
    cout<< "Broj gledalaca: ";
    int brojGledalaca2;
    cin>>brojGledalaca2;
    cout<< "Otvorenost (da-1/ne-0): ";
    bool otvorenost2;
    cin>>otvorenost2;
    cout<< "Iznajmljivanje (da-1/ne-0): ";
    bool iznajmljivanje2;
    cin>>iznajmljivanje2;
    cout<< "Radno vreme: ";
    string radnoVreme2;
    cin>>radnoVreme2;
    cout<< "Tusevi (da-1/ne-0): ";
    bool tusevi;
    cin>>tusevi;
    cout<< "Broj sprava: ";
    int sprave;
    cin>>sprave;
    Teretana teretana(brojGledalaca2, otvorenost2, iznajmljivanje2, radnoVreme2, tusevi, sprave);


}

Tim* NapraviTim() {
    Tim* tim;
    cout<<"Tim: \n";
    cout<<"Ime: ";
    string ime;
    cin>>ime;
    tim->setIme(ime);
    return tim;
}

void NapraviSponzora() {}

int main()
{
    Tim* tim;

    int broj;
    do
    {
        cout << endl
             << "Sportski centar:\n"
             << " 1 - Napravi sportski centar\n"
             << " 2 - Napravi tim\n"
             << " 3 - Napravi sponzora\n"
             << " 4 - Kraj programa\n"
             << " Upisite zeljeni broj: ";
        cin >> broj;

        switch (broj)
        {
        case 1:
            NapraviSportskiCentar();
            break;
        case 2:
            tim=NapraviTim();
            cout<<"Napravljen je tim: "<<tim->getIme()<<endl;
            break;
        case 3:
            NapraviSponzora();
            break;
        case 4:
            cout << "Kraj programa\n";
            break;
        default:
            cout << "Greska\n"
                 << "Probajte opet\n";
            break;
        }

    }
    while (broj !=4);


}
