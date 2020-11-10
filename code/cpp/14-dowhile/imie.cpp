#include <iostream>
#include <cstdio>
using namespace std;
int main() {

string imie,nazwisko;
int i;

cout<<"Podaj imie: ";
cin>>imie;

cout<<"Podaj nazwisko: ";
cin>>nazwisko;

cout<<"Podaj liczbe razy: ";
cin>>i;

do
{
    cout<<imie<<" "<<nazwisko<<endl;
    i--;
}
while(i>=1);

cin.ignore();
return 0;

}