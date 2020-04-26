#include <iostream>

using namespace std;

#include "SportskiObjekat.hpp"
#include "Bazen.hpp"


int main()
{
    Bazen b;
    cout<<b.getDuzina()<<endl;
    Bazen b2(0, false, false, "" , 55, 25, 2.6, 18);
    cout<<b2.getDuzina()<<endl;
    Bazen b3(b2);
    b2.setDuzina(50);
    cout<<b3.getDuzina()<<endl;
    Bazen b4(SportskiObjekat(b2),60,30, 3, 23.6);
    cout<<b4.getDuzina();

}
