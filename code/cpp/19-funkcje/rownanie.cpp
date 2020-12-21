#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;
void wyswietl_uklad(float a, float b, float c, float d, float e, float f){
    cout<<"Rozwiazujemy uklad: "<<endl;
    cout<<a<<" * x + "<<b<<" * y = "<<c<<endl;
    cout<<d<<" * x + "<<e<<" * y = "<<f<<endl;
}
float wyznacznik(float a, float b, float c, float d){
    return a*d-b*c;
}
void rozwiazanie(float g, float x, float y){
    if(g!=0){
        cout<<"uklad ma dokladnie jedno rozwiazanie ";
        cout<<"x = "<<x/g<<" ,y = "<<y/g;
    }
    else{
        if(x!=0 || y!=0){
            cout<<"Uklad nie ma rozwiazan ";
        }
        else{
            cout<<"Uklad ma nieskonczenie wiele rozwiazan ";
        }
    }
}
int main(){

    float a1,a2,b1,b2,c1,c2;
    cout<<"Podaj wspolczynniki rownania pierwszego: "<<endl;
    cin>>a1>>b1>>c1;
    cout<<"Podaj wspolczynniki rownania drugiego: "<<endl;
    cin>>a2>>b2>>c2;
    wyswietl_uklad(a1,b1,c1,a2,b2,c2);
    rozwiazanie(wyznacznik(a1,b1,a2,b2), wyznacznik(c1,b1,c2,b2), wyznacznik(a1, c1,a2,c2));

    cin.ignore();
    return 0;

}
