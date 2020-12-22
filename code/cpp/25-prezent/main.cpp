/*
JAKUB ACHTELIK 3TI
PREZENT SWIATECZNY C++
*/
#include <iostream>
#include <cstdio>
using namespace std;
void wstazka(int f, char znak2){
    for(f=1; f<=4;f++){
    cout<<" ";
    }
    for(f=1; f<=8;f++){
    cout<<znak2;
    }

    cout<<endl;

    for(f=0;f<=5;f++){
    cout<<" ";
    }
    for(f=0;f<=3;f++){
    cout<<znak2;
    }

    cout<<endl<<endl;
}
void srodek(int c, char znak2){
    for(c=1;c<=7;c++){
    cout<<" "<<znak2;
    }
    cout<<endl;
}

void trzy_znaki_1 (int a, char znak1){
        for(a=1;a<=4;a++){
        cout<<" "<<znak1;
        a++;
        }

}
void trzy_znaki_2 (int a, char znak1, char znak3){
        for(a=1;a<=4;a++){
        cout<<" "<<znak1;
        a++;
        }
        cout<<" "<<znak3;

}
void gora_dol(int licznik, int a, char znak1,char znak2, char znak3){
    licznik=1;
    do{
        int a;
        trzy_znaki_1(a,znak1);
        cout<<" "<<znak3<<" "<<znak2;
        trzy_znaki_2(a,znak1,znak3);
    cout<<endl;

    licznik++;
    }

    while(licznik<=2);
    }

int main()
{

char znak1,znak2,znak3; int a,c,f,licznik;
cout<<"======PREZENT=====\n";
cout<<"Podaj 1-znak: ";cin>>znak1;
cout<<"Podaj 2-znak: ";cin>>znak2;
cout<<"Podaj 3-znak: ";cin>>znak3;
cout<<endl;

//WSTAZKA
wstazka(f,znak2);

//PIERWSZA_CZESC
gora_dol(licznik,a,znak1,znak2,znak3);

//DRUGA_CZESC - SRODEK
srodek(c,znak2);

//TRZECIA_CZESC
gora_dol(licznik,a,znak1,znak2,znak3);


cin.ignore();

return 0;
}