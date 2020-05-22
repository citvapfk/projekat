#ifndef FAJL_HPP_INCLUDED
#define FAJL_HPP_INCLUDED
#include "fstream"

void pisiTxt(string nazivFajla, string tekst, char mode='w')
{
    /// fajl je sada objekat klase ofstream
    ofstream fajl;

    /// koristimo metodu open za otvaranja fajla
    /// kao parametar prosledjujemo naziv fajla i njegovu ekstenziju
    if (mode=='a'){
        fajl.open (nazivFajla, ios_base::app);
    }else{
        fajl.open (nazivFajla);
    }

    /// pisanje vrsimo tako sto umesto cout pisemo naziv fajla
    /// koristimo operator <<
    fajl << tekst << endl;

    /// na kraju zatvaramo fajl
    fajl.close();

}

void citajTxt(string nazivFajla)
{
    string linija;
    ifstream fajl (nazivFajla);
    if (fajl.is_open())
    {
        while ( getline (fajl,linija) )
        {
            cout << linija << '\n';
        }
        fajl.close();
    }

    else
        cout << "Neuspesno otvoren fajl";

}
/*int main ()
{
    string nasFajl = "nazivFajla.txt";

    cout<<"Unesite tekst koji hocete da upisete u fajl:"<<endl;
    char ulaz[100];
    cin.getline(ulaz,sizeof(ulaz));

    pisiTxt(nasFajl, ulaz);

    cout<<"\tU fajlu pise: "<<endl;
    citajTxt(nasFajl);
    cout<<endl<<endl;

    string recenica="Ovo cemo dodati u poslednji red fajla...";
    pisiTxt(nasFajl, recenica, 'a');
    cout<<"\tU fajlu posle dodavanja pise: "<<endl;
    citajTxt(nasFajl);


    return 0;
}
*/
#endif // FAJL_HPP_INCLUDED
