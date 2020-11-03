//na[pisz prkgram ktory bedzie za pomoca whiel pobieral imie i naziwsko i klase  z klawiatory n anseptnie wypisywal okreala livzbe razy z apmoca while 
#include <iostream>
#include <cstdio>
using namespace std;
int main(){

int i, razy;
string imie, nazwisko, klasa;

cout<<"Podaj imie: ";
cin>>imie;

cout<<"Podaj nazwisko: ";
cin>>nazwisko;

cout<<"Podaj klase: ";
cin>>klasa;

cout<<"Podaj liczbe razy do powtorzenia: ";
cin>>razy;

while(i<=razy){
    cout<<imie<<" "<<nazwisko<<" "<<klasa<<endl;
    i++;
}

cin.ignore();
return 0;

}
