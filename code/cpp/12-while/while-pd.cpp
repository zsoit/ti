
//za pomoca for i while prosze napsiac program ktory bedzie pobieral znka z klawiatury i bedzie wypisal okreala liczbe razy przez uzytkowia 
#include <iostream>
#include <cstdio>
using namespace std;
int main (){
    string email;
    int i, razy;

    cout<<"Podaj swoj email: ";
    cin>>email;

    cout<<"Podaj liczbe powtorzen: ";
    cin>>razy;

    i=1;
    while(i<=razy){
        cout<<email<<endl;
        i++;
    }  

    cin.ignore();
    return 0;
}