#include <iostream>
#include <cstdio>
using namespace std;
void petlafor (string imie, string nazwisko, int razy ){
    int i=1;
    while(i<=razy){
        cout<<i<<". "<<imie<<" "<<nazwisko<<endl;
        i++;
    }
}

int main()
{
    string Imie, Nazwisko; int Razy;
    cout<<"Podaj imie: ";cin>>Imie;
    cout<<"Podaj nazwisko: "; cin>>Nazwisko;
    cout<<"Podaj liczbe razy: "; cin>>Razy;
    petlafor(Imie,Nazwisko,Razy);
    getchar();
    return 0;
}