
#include <iostream>
#include <cstdio>
using namespace std;
int main() {
int a, b; //a - dzielna, b- dzielnik
int k = 0; //krotnosc;

cout<<"Podaj dzielna:";cin>>a;
cout<<"Podaj dzielnik:";cin>>b;
if(b==0){
    cout<<"Nie wolno dzielic przez zero!";
}
else{
    while(a>=b){
        a=a-b;
        k++;
    }
}
cout<<"a/b wynosi "<<k;




cin.ignore();
return 0;

}