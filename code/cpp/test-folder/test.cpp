//napisz prgram liniowy z jedna niewoadmona
#include <iostream>
#include <cstdio>
using namespace std;

    int main(){
        int i, liczba_ocen, dzielnik;
        float ocena, wynik, suma;
        dzielnik =0;
        suma = 0;
        i=1;

        cout<<"Podaj liczbe ocen: ";cin>>liczba_ocen;
        do {
        cout<<i<<". Podaj ocene: ";cin>>ocena;
        suma += ocena;
        i++;
        if(ocena>0){
            ++dzielnik;
        }
        }
        while(i<=liczba_ocen);
        wynik = suma/dzielnik;
        cout<<"Wynik to: "<<wynik;
    }




