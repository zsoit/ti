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
   cout<<"srednia arytmetyczna liczb 2.7 i 5  =";
   cout<<srednia_arytmetyczna(2.7,5);//wywowlanie funkcji


getchar();
return 0;

}