// //sporsod 8 liczb [pdanych przez uzytkownika wyszuka te ktore sa podizlene przez 3 i obliczyc ich sume
#include <iostream>
#include <cstdio>

using namespace std;
int main()
{
    int liczba;
    int suma=0;
    int i=1;

    while(i<=8){

            cout<<i<<". Podaj liczbe: "; cin>>liczba;

            if(liczba%3==0)
            {
            suma += liczba;
            }
            i++;
    }
    cout<<"suma liczb podzielnych przez 3 to: "<<suma<<endl;
    cin.ignore();
    return 0;
}


