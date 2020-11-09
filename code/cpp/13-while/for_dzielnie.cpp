
#include <iostream>
#include <cstdio>
using namespace std;
int main() {
int a, b, k;

cout<<"Podaj dzielna: ";cin>>a;
cout<<"Podaj dzielnik: ";cin>>b;
if(b==0){
    cout<<"Nie wolno dzielic przez zero!";
}
else{
    for(k=0;a>=b;k++){
        a=a-b;
    }
}
cout<<"a/b wynosi "<<k;

cin.ignore();
return 0;

}