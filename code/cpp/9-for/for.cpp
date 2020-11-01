#include <iostream>
#include <cstdio>
using namespace std;
int main(){ 
/* składania petli for

for(instrukacja_poczatkowa;warunek_sterujacy,intrukcja_kroku(wyrazenieni_modyfikujace))
{
    instrukcja;
}


istrukcja_pocztkowa-instrukcja,ktora wykonana jest przed pierwszym obiegiem petli
warunek_sterujacy-wyrazenie, ktorego logiczna wartosc jest badana przed kazdym obiegiem petli
instrukcja_kroku-instrukcja wykonana po kazdym przebiegu petli, czyli tak zawny licznik petli



i++; i=i+1
*/

/*przyklad1

for(int i=1;i<=10;i++){
    cout<<"Jakub Achtelik \n";
}





/*przyklad2

for(int i=1; i<=20;i++){
    cout<<i<<endl;

}

*/

//napisz program ktory bedzie o pobranie zakresu poczatkowrgo i koncowego liczb calkowitych i za pomoca petli for

cout<<"Podaj zakres poczatkowy : ";
int poczatek; cin>>poczatek;

cout<<"Podaj zakres koncowych: ";
int koniec; cin>>koniec;

for(int i=poczatek;i<=koniec;i++){
    cout<<i<<endl;

}


getchar();
return 0;

}