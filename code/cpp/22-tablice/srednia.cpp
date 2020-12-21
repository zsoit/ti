/*
SREDNIA
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{

    float liczby[3];
    cout<<"Podaj trzy liczby: "<<endl;
    cin>>liczby[0];
    cin>>liczby[1];
    cin>>liczby[2];
    cout<<"Średnia arytmetyczna podanych wynosi: "<<endl;
    cout<<(liczby[0]+liczby[1]+liczby[2])/3.0<<endl;
    getchar();
    return 0;
}