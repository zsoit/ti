//napisz program obliczajacy pole kwadratu o podanej dlugosci bobu, w wypadkupodania przez uzytkownika niewlasciwych wartosci (ijemne lub zero) program opiwnien prosic o podanie wlasnicwej wartosci 
#include <iostream>
#include <cstdio>
using namespace std;
int main() {

int a,i;
cout<<"Podaj dlugosc boku kwadratu: ";cin>>a;
    for(i=0;a<=0;i++){
        cout<<"Bledne dane! Podaj ponownie  dlugosc boku kwadratu: ";cin>>a;
    }
cout<<"Pole kwadratu wynosi "<<a*a;

cin.ignore();
return 0;

}