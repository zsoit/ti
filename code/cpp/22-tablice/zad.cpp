/*
Napisz program ktory za pomopca liczb rzecziwtyvch i za pomoca tablicy wykona podstaowe dzilania arytmetyczne jak dodawanie mnozenie 
dwie lioczby z klalwiatury, wszytskie zmienne typu double , sami
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{

    double tab[5];
    cout<<"Podaj pierwsza liczbe: ";cin>>tab[0]; cin.ignore();
    cout<<"Podaj druga liczbe (rozna od zera): ";cin>>tab[1]; cin.ignore();
    tab[2]=(tab[0]+tab[1]);
    tab[3]=(tab[0]-tab[1]);
    tab[4]=(tab[0]*tab[1]);
    tab[5]=(tab[0]/tab[1]);

    cout<<"Podane liczby to: "<<tab[0]<<" i "<<tab[1]<<endl;
    cout<<"Suma wynosi: "<<tab[2]<<endl;
    cout<<"Roznica wynosi: "<<tab[3]<<endl;
    cout<<"Iloczyn wynosi: "<<tab[4]<<endl;
    cout<<"Iloraz  wynosi: "<<tab[5]<<endl;
    cout<<"Nacisnij ENTER aby zakonczyc"<<endl;
    getchar();
    return 0;
}