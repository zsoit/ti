// //sporsod 8 liczb [pdanych przez uzytkownika wyszuka te ktore sa podizlene przez 3 i obliczyc ich sume
#include <iostream>
#include <cstdio>

using namespace std;
int main()
{
    int liczba;
    int suma=0;

    for(int i=1;i<=8;i++){

            cout<<i<<". Podaj liczbe: "; cin>>liczba;

            if(liczba%3==0)
            {
            suma += liczba;
            }
    }
    cout<<"suma liczb podzielnych przez 3 to: "<<suma<<endl;
    cin.ignore();
    return 0;
}


