#include <iostream>
#include <cstdio>
using namespace std;
int main(){
/*Budowa pętli while
while(warunek){
instrukacja;
}
*/

// int i = 1;
// while(i<=20){
//     cout<<"Jakub Achtelik"<<endl;
//     i++; //wyrazenie modyfikujace
// }
// char znak;
// cout << "Podaj znak: ";
// cin >> znak;

// while(znak!='k'){
//     cout<<"Podaj kolejny znak: ";
//     cin >> znak;

// }
// cout<<"Podales "<<znak<<" wiec koncze: ";


// char znak;
// cout << "Podaj znak: ";
// cin >> znak;

// for( ;znak!='k'; ){
//     cout<<"Podaj kolejny znak: ";
//     cin >> znak;

// }
// cout<<"Podales "<<znak<<" wiec koncze: ";


//pobiera zakres ppcoztakowy, petla while wypisuje liczby calkowite w podanym zakresie
//podaj liczbe: 1; podaj liczbe: 10;

int poczatek, koniec, i;

cout<<"================================ \n";
cout<<"KAZDA LICZBA N+, N- ORAZ 0 \n";
cout<<"================================ \n";

cout<<"Podaj zakres początkowy: ";
cin>>poczatek;

cout<<"Podaj zakres koncowy: ";
cin>>koniec;

cout<<"================================ \n";

i = poczatek;
while(i<=koniec){
    cout<<i<<".to liczba całkowita"<<endl;
    i++;
}

cin.ignore();
return 0;

}
