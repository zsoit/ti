/*
Delta za pomoca funkcji:
Ax+2+Bc+C=0

*/
#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;

float delta(float a, float b, float c){
    return b*b-4*a*c;
}
void dwa(float A,float B, float delta){
    float x1=(-B-sqrt(delta))/(2*A);
    float x2=(-B+sqrt(delta))/(2*A);
    cout<<"Rownianie posiada dwa rozwiazania!! \n";
    cout<<"x2="<<x2<<"  x2="<<x1;
}

float jedno(float a, float b){
    return -b/(2*a);
}

int main()
{
    float a,b ,c,x1,x2;
    cout<<"Rozwiazanie rownania ax^2+bx+c=0 "<<endl;
    cout<<"Podaj a: "; cin>>a;
    cout<<"Podaj b: "; cin>>b;
    cout<<"Podaj c: "; cin>>c;
    if(a==0){
        cout<<"Rownianie liniowe posiada jedno rozwiazanie"<<jedno(b,a);
    }
    // else{
        float d=delta(a,b,c);
        if(d<0){
            cout<<"Rownianie nie posiada rozwiazan";
        }
        if(d==0){
            cout<<"Rownianie posiada jedno rozwiazanie! "<<jedno(a,b);
        }
        if(d>0){
            dwa(a,b,d);
        }
    // }

    cin.ignore();
    return 0;
}