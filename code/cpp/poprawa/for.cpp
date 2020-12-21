#include <iostream>
#include <cstdio>

using namespace std;
int main()
{

    int poczatek, koniec, i;
    cout<<"Podaj zakres poczatkowy: "; cin>>poczatek;
    cout<<"Podaj zakres koncowy:  "; cin>>koniec;
    for(i=poczatek;i<=koniec;i++){
        if(i%7==0){
            cout<<"Liczba "<<i<<" jest podzielna przez 7"<<endl;

        }
    }
    getchar();
    return 0;
}