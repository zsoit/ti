#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
char znak; int wybor,i,razy;

do
{
    cout<<"WYBIERZ PETLE: \n1) PETLA FOR \n2) PETLA WHILE \n3) PETLA DO WHILE \n";
    cout<<"Ktora petle chcesz wybrac? ";
    cin >> wybor;
    switch (wybor)
    {
        case 1:
        {
            cout <<"==> wybrales petle FOR \n";
            cout<<"Podaj znak: "; cin>>znak;
            cout<<"Podaj liczbe powtorzen: "; cin>>razy;
            cout<<"===="<<endl;
            for(i=0;i<=razy;i++){
                cout<<i<<". "<<znak<<endl;
             }
            cout<<"===="<<endl;
            break;
        }
        case 2:
        {
            cout <<"==> wybrales petle WHILE \n";
            cout<<"Podaj znak: "; cin>>znak;
            cout<<"Podaj liczbe powtorzen: "; cin>>razy;
            cout<<"===="<<endl;
            i=0;
            while(i<=razy){
                cout<<i<<". "<<znak<<endl;
                i++;
             }
            cout<<"===="<<endl;
            break;
        }

        case 3:{
            cout <<"==> wybrales petle DO WHILE \n";
            cout<<"Podaj znak: "; cin>>znak;
            cout<<"Podaj liczbe powtorzen: "; cin>>razy;
            cout<<"===="<<endl;
            i=0;
            do{
                cout<<i<<". "<<znak<<endl;
                i++;
            }
            while(i<=razy);
            cout<<"===="<<endl;
            break;
        }
        default:{
            cout<<"Nieprawny wybór! \n";
            break;
        }
    }
    cout <<"==> Czy chcesz zakonczyc? : t/n? ";
    cin >> znak;
    system ("clear");
}
while (znak != 't' && znak == 'n');
cout<<"==> Dziekuje, zakoczyles dzialanie programu! J.A.\n";
return 0;
} 