#include <iostream>
#include <cstdio>

using namespace std;
int main()
{

    int poczatek, koniec;
    cout<<"Podaj zakres poczatkowy: "; cin>>poczatek;
    cout<<"Podaj zakres koncowy:  "; cin>>koniec;
    int i=poczatek;
    do{
        if(i%7==0){
            cout<<"Liczba "<<i<<" jest podzielna przez 7"<<endl;
        }
        i++;
    }
    while(i<=koniec);

    getchar();
    return 0;
}