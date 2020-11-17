#include <iostream>
#include <cstdio>
using namespace std;

int suma(int a, int b){
    return (a+b);
}

int roznica(int a, int b){
    return (a-b);
}

int iloczyn(int a, int b){
    return (a*b);
}

int iloraz(int a, int b){
    return (a/b);
}
int main()
{
char znak; int wybor,i,razy,x,y;

do
{
    cout<<"KALKULATOR - WYBIERZ DZIALANIE: \n1) SUMA \n2) ROZNICA \n3) ILOCZYN \n4) ILORAZ \n";
    cout<<"Ktore dzialanie chcesz wybrac? ";
    cin >> wybor;
    switch (wybor)
    {
        case 1:
        {
            cout <<"==> wybrales DODAWANIE \n";
            cout<<"Podaj liczbe a: "; cin>>x;
            cout<<"Podaj liczbe b: "; cin>>y;
            cout<<"Suma wynosi: "<<suma(x,y)<<endl;
            break;
        }
        case 2:
        {
            cout <<"==> wybrales ODEJMOWANIE \n";
            cout<<"Podaj liczbe a: "; cin>>x;
            cout<<"Podaj liczbe b: "; cin>>y;
            cout<<"Roznica wynosi: "<<roznica(x,y)<<endl;
            break;
        }

        case 3:{
            cout <<"==> wybrales MNOZENIE \n";
            cout<<"Podaj liczbe a: "; cin>>x;
            cout<<"Podaj liczbe b: "; cin>>y;
            cout<<"Iloczyn wynosi: "<<iloczyn(x,y)<<endl;
            break;
        }

        case 4:{
            cout<<"==> wybrales DZIELNIE\n";
            cout<<"Podaj liczbe a: "; cin>>x;
            cout<<"Podaj liczbe b: "; cin>>y;
            cout<<"Iloraz wynosi: "<<iloraz(x,y)<<endl;
            break;
        }
        default:{
            cout<<"Nieprawny wybór! \n";
            break;
        }
    }
    cout <<"==> Czy chcesz zakonczyc? : t/n? ";
    cin >> znak;
    system ("cls");
}
while (znak != 't' && znak == 'n');
cout<<"==> Dziekuje, zakoczyles dzialanie programu! J.A.\n";
getchar();
return 0;
} 