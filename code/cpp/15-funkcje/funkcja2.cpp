#include <iostream>
#include <cstdio>
using namespace std;

    int obwod(int a, int b)
    {
        return (2*a+2*b);
    }

    int pole(int a, int b){
        return (a*b);
    }

int main()
{
    int x, y;
    cout<<"Podaj liczbe a :  ";cin>>x;
    cout<<"Podaj liczbe b : ";cin>>y;
    cout<<"Obwód wynosi: "; cout<<obwod(x,y)<<endl;
    cout<<"Pole wynosi: "; cout<<pole(x,y);


getchar();
return 0;

}