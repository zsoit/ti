//JAKUB ACHTELIK 3TI
#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
char znak; int razy;
cout<<"=========CHOINKA========= \n";
cout<<"Podaj znak: ";cin>>znak;
cout<<"Podaj liczbe drzewek: ";cin>>razy;
cout<<"========================= \n"; cout<<endl;

//LICZBA_DRZEW
int licznik=1;
do{
    //DRZEWO_z_CZTERECH_ELMENTOW
    int y=1;
    while(y<=4) {
        for(int x=1;x<=4-y;x++){
        cout<<" ";
        }
        for(int x=1;x<=y*2-1;x++){
        cout<<znak;
        }
        cout<<endl;
        y++;
    }

licznik++;
}
while(licznik<=razy);
//

//PIEN_DRZEWKA
int a=1;
do{
    for(int b=1;b<=3;b++){
        cout<<" ";
    }
    cout<<znak<<endl;
    a++;
}
while(a<=3);

for(int c=1;c<=7;c++){
    cout<<znak;
}
//
cout<<endl;cout<<endl;cout<<"========================= ";
cin.ignore();

return 0;
}
