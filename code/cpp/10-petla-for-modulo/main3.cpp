//zakres pocztakowy liczb a nastepnie ma wysisac licxzby parzyste

#include <iostream>
#include <cstdio>
using namespace std;
int main(){

    int poczatek, koniec;

    cout<<"Podaj zakres poczatkowy: ";
    cin>>poczatek;
    cout<<"Podaj zakres koncowy: ";
    cin>>koniec;

    for(int i=poczatek;i<=koniec;i++){

        cout<<i<<endl;
        if(i%2==0){ 
            cout<<"Liczba jest parzysta";
            cout<<endl;

        }
        else {
            cout<<"Liczba jest nieparzysta; \n";
        }

    }


getchar();
return 0;
}