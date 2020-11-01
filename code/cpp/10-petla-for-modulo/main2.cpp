#include <iostream>
#include <cstdio>
using namespace std;
int main(){

    for(int i=1;i<=20;i++){

        cout<<i<<endl;
        //% - reszta z dzielenia modulo
        if(i%3!=0){ //reszta z dzielnia przez 3 jest rozna od zera 
            cout<<" - nie jest podzielne przez 3";
            cout<<endl;

        }

    }


getchar();
return 0;
}