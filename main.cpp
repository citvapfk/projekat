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

SportskiCentar *NapraviSportskiCentar()
{
    cout << endl
         << "Sportski centar:\n";
    cout << "Unesite ime sportskog centra: ";
    string imeCentra;
    cin >> imeCentra;
    cout << "Unesite saldo na racunu sportskog centra: ";
    double saldoCentra;
    cin >> saldoCentra;
    SportskiCentar *sportskiCentar = new SportskiCentar();
    sportskiCentar->setIme(imeCentra);
    sportskiCentar->setSaldo(saldoCentra);
    return sportskiCentar;
}

Tim *NapraviTim()
{
    string imeTima;
    string imeTrenera;
    string prezimeTrenera;
    string datumRodjenjaTrenera;
    string imeIgraca;
    string prezimeIgraca;
    string datumRodjenjaIgraca;
    string pozicijaIgraca;

    Tim *tim = new Tim();
    int broj;
    do
    {

        cout << endl
             << "Tim:\n"
             << " 1 - Unesi ime i saldo tima\n"
             << " 2 - Dodaj trenera\n"
             << " 3 - Dodaj igraca\n"
             << " 9 - Povratak na glavni meni\n"
             << " Upisite zeljeni broj: ";
        cin >> broj;

        switch (broj)
        {
        case 1:
        {
            cout << "Tim: \n";
            cout << "Ime: ";
            cin >> imeTima;
            tim->setIme(imeTima);
            cout << "Saldo: ";
            double saldoTima;
            cin >> saldoTima;
            tim->setSaldo(saldoTima);

            break;
        }
        case 2:
        {

            cout << "Trener: \n";
            cout << "Ime: ";
            cin >> imeTrenera;
            cout << "Prezime: ";
            cin >> prezimeTrenera;
            cout << "Datum rodjenja: ";
            cin >> datumRodjenjaTrenera;
            cout << "Saldo na racunu: ";
            double saldoTrenera;
            cin >> saldoTrenera;
            cout << "Plata: ";
            double plataTrenera;
            cin >> plataTrenera;
            cout << "Broj pobeda: ";
            double brPobedaTrenera;
            cin >> brPobedaTrenera;
            Trener *trener = new Trener(imeTrenera, prezimeTrenera, musko, datumRodjenjaTrenera, saldoTrenera, "kosarka", 2, plataTrenera, brPobedaTrenera);
            tim->setTrener(trener);
            break;
        }
        case 3:
        {
            cout << "Igrac: \n";
            cout << "Ime: ";
            cin >> imeIgraca;
            cout << "Prezime: ";
            cin >> prezimeIgraca;
            cout << "Datum rodjenja: ";
            cin >> datumRodjenjaIgraca;
            cout << "Saldo na racunu: ";
            double saldoIgraca;
            cin >> saldoIgraca;
            cout << "Plata: ";
            double plataIgraca;
            cin >> plataIgraca;
            cout << "Pozicija: ";
            cin >> pozicijaIgraca;
            cout << "Broj poena: ";
            double brPoenaIgraca;
            cin >> brPoenaIgraca;
            cout << "Broj pobeda: ";
            double brPobedaIgraca;
            cin >> brPobedaIgraca;
            Igrac *igrac = new Igrac(imeIgraca, prezimeIgraca, musko, datumRodjenjaIgraca, saldoIgraca, "kosarka", plataIgraca, pozicijaIgraca, brPoenaIgraca, brPobedaIgraca);
            tim->dodajIgraca(igrac);
            break;
        }
        case 9:
        {
            break;
        }
        default:
            cout << "Greska\n"
                 << "Pokusajte ponovo\n";
            break;
        }

    } while (broj != 9);

    return tim;
}

Sponzor *NapraviSponzora()
{
    Sponzor *sponzor = new Sponzor();
    cout << "Sponzor: \n";
    cout << "Unesite ime sponzora: ";
    string imeSponzora;
    cin >> imeSponzora;
    cout << "Saldo na racunu: \n";
    double saldoSponzora;
    cin >> saldoSponzora;
    sponzor->setIme(imeSponzora);
    sponzor->setSaldo(saldoSponzora);
    return sponzor;
}

Ugovor *NapraviUgovor(Sponzor *sponzor, SportskiCentar *sportskiCentar)
{

    if (sponzor == NULL || sportskiCentar == NULL)
    {
        cout << "Morate prvo kreirati sponzora i sportski centar!!!" << endl;
        return NULL;
    }

    cout << "Ugovor: \n";
    cout << "Iznos: \n";
    double iznosUgovora;
    cin >> iznosUgovora;
    Ugovor *ugovor = new Ugovor(sponzor, sportskiCentar, 2, iznosUgovora);
    return ugovor;
}

void prikaziStanjeNaRacunuSporsogCentra(SportskiCentar *sportskiCentar)
{
    if (sportskiCentar == NULL)
    {
        cout << "Morate prvo uneti podatke za sportski centar!!!" << endl;
        return;
    }
    cout << "Stanje na racunu sportskog centra je " << sportskiCentar->getSaldo() << endl;
}

void prikaziStanjeNaRacunuSponzora(Sponzor *sponzor)
{
    if (sponzor == NULL)
    {
        cout << "Morate prvo uneti podatke za sponzor!!!" << endl;
        return;
    }
    cout << "Stanje na racunu spozora je " << sponzor->getSaldo() << endl;
}

void prikaziIznosUgovora(Ugovor *ugovor)
{
    if (ugovor == NULL)
    {
        cout << "Morate prvo uneti podatke za ugovor!!!" << endl;
        return;
    }
    cout << "Iznos ugovora je " << ugovor->getIznos() << endl;
}

void prikaziSaldoNaRacunuTima(Tim *tim)
{
    if (tim == NULL)
    {
        cout << "Morate prvo uneti podatke za tim!!!" << endl;
        return;
    }
    cout << "Stanje na racunu tima je " << tim->getSaldo() << endl;
}

int main()
{
    Tim *tim = NULL;
    Sponzor *sponzor = NULL;
    SportskiCentar *sportskiCentar = NULL;
    Ugovor *ugovor = NULL;

    int broj;
    do
    {
        cout << endl
             << "Dobrodosli u program Vuka Vicentica:\n"
             << " 1 - Napravi sportski centar\n"
             << " 2 - Napravi tim\n"
             << " 3 - Napravi sponzora\n"
             << " 4 - Napravi ugovor izmedju postojaceg sponzora i sportskog centra\n"
             << " 11 - Prikazi saldo na racunu sportskog centra\n"
             << " 12 - Prikazi saldo na racunu sponzora\n"
             << " 13 - Prikazi iznos ugovora\n"
             << " 14 - Prikazi saldo na racunu tima\n"
             << " 21 - Realizuj ugovor\n"
             << " 99 - Kraj programa\n"
             << " Upisite zeljeni broj: ";
        cin >> broj;

        switch (broj)
        {
        case 1:
            sportskiCentar = NapraviSportskiCentar();
            break;
        case 2:
            tim = NapraviTim();
            break;
        case 3:
            sponzor = NapraviSponzora();
            break;
        case 4:
            ugovor = NapraviUgovor(sponzor, sportskiCentar);
            break;
        case 11:
            prikaziStanjeNaRacunuSporsogCentra(sportskiCentar);
            break;
        case 12:
            prikaziStanjeNaRacunuSponzora(sponzor);
            break;
        case 13:
            prikaziIznosUgovora(ugovor);
            break;
        case 14:
            prikaziSaldoNaRacunuTima(tim);
            break;
        case 99:
            cout << "Kraj programa\n";
            break;
        default:
            cout << "Greska\n"
                 << "Probajte opet\n";
            break;
        }

    } while (broj != 99);
}
