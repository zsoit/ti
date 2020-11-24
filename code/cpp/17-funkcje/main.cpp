//napisz prgram do obliczania odleglosci miedzy dwoma punktami
#include <iostream>
#include <cstdio>
using namespace std;

// // a-b, a>=b;
// // b-a,a<b;
// a
// -a
float punkt(float x){
    if (x>=0)
    {
        return x;
    }
    else{
        return -x;
    }
}
int main()
{
    float a,b;
    cout<<"Podaj pierwszy punkt na osi: ";cin>>a;
    cout<<"Podaj drugi punkt na osi: ";cin>>b;
    cout<<"Odleglosc pomiedzy punktami wynosi: "<<punkt(a-b);


    cin.ignore();
    return 0;
}


