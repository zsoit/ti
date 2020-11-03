#include <iostream>
#include <cstdio>
using namespace std;
int main(){
int poczatek, koniec, i;

cout<<"Podaj zakres początkowy: ";
cin>>poczatek;

cout<<"Podaj zakres koncowy: ";
cin>>koniec;

i = poczatek;
while(i<=koniec){

    if(i%2==0){ 
            cout<<i<<". liczba jest parzysta \n";

        }
        else {
            cout<<i<<". liczba jest nieparzysta \n";
        }
    i++;
}

cin.ignore();
return 0;

}

//mapisz proghram ktory bedzie pobieral pewein zakres liczb ktory bedzie przydzielony przez uzytkowniak gdy pobierze zakres ma wysietlic liczby parzystye,
// wykorzytsaj tylko i wylacznie petle whiel i if