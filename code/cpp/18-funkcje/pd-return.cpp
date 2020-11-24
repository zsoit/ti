/*
JAKUB ACHTELIK III TI
napisz program znajdujacy najwieksza liczbe z 3 podanych liczb
zbuduj to za pomoca funkcji warunku if, zmiennej typu float
funkcja ma nazywac maxi

*/
#include <iostream>
#include <cstdio>
using namespace std;

float maxi(float A, float B, float C)
{
    //1.TAK
    if(A>B){
        /*1.1-TAK*/
        if(A>C){
            return  A;
        }
        //1.1-NIE
        else{
            //1.2-TAK
            if(C>B){
                return C;
            }
            //1.2-NIE
            else{
                return B;
            }

        }
    }
    //2.NIE
    else{
        //2.1-TAK
        if(B>C){
            return B;
        }
        //2.1-NIE
        else{
            //2.2-TAK
            if(C>A){
                return C;
            }
            //2.2 -NIE
            else{
                return A;
            }
        }
    }

}
int main()
{
    float a,b,c;
    cout<<"Podaj pierwsza liczbe: ";cin>>a;
    cout<<"Podaj druga liczbe: ";cin>>b;
    cout<<"Podaj trzecia liczbe: ";cin>>c;
    cout<<"Najwieksza liczba to: "<<maxi(a,b,c);

    cin.ignore();
    return 0;
}