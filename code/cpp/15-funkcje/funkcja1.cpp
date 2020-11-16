#include <iostream>
#include <cstdio>
using namespace std;
 // Budowa funkcji 
    // typ_wyniku nazwa funkcji (zestaw paramterow formlanych)
    // {wnetrzne funkcjji;}
    float srednia_arytmetyczna(float a, float b)//typ_wyniku nazwa funkcji(parametry formalne)
    {
        return (a+b)/2;//wnetrze funkcji
    }
int main()
{
    float x, y; //zmienne-lokalne
    cout<<"Podaj dwie liczby: ";
    cin>>x;
    cin>>y;
    cout<<"srednia arytmetyczna liczb: ";
    cout<<srednia_arytmetyczna(x,y);//wywowlanie funkcji


getchar();
return 0;

}