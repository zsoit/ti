/*
JAKUB ACHTELIK III TI
napisz program znajdujacy najwieksza liczbe z 3 podanych liczb
zbuduj to za pomoca funkcji warunku if, zmiennej typu float
funkcja ma nazywac maxi

*/
#include <iostream>
#include <cstdio>
using namespace std;

float maxi(float A, float B, float C){
    if(A>B && A>C){
        return A;
    }

    if(B>A && B>C){
        return B;
    }

    if(C>A && C>B){
        return C;
    }
}

int main()
{
    float a,b,c;
    cout<<"Podaj pierwsza liczbe: ";cin>>a;
    cout<<"Podaj druga liczbe: ";cin>>b;
    cout<<"Podaj trzecia liczbe: ";cin>>c;
    cout<<"Najwieksza liczba: "<<maxi(a,b,c);

    cin.ignore();
    return 0;
}