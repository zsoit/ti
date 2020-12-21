/*
napisz program znajdujacy najwieksza liczbe z 3 podanych liczb
zbuduj to za pomoca funkcji warunku if, zmiennej typu float
funkcja ma nazywac maxi
*/
#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;
float maxi (float a, float b, float c){
    float max = a;
    if(b>max){
        max=b;
    }
    if(c>max){
        max=c;
    }
    return max;
}
int main(){
    int x, y, z;
    cout<<"Podaj pierwsza liczbe: ";cin>>x;
    cout<<"Podaj druga liczbe: ";cin>>y;
    cout<<"Podaj trzecia liczbe: ";cin>>z;
    cout<<"Najwieksza liczba to "<<maxi(x,y,z);
    cin.ignore();
    return 0;

}
