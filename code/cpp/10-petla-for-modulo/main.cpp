/*napisz program ktory za pomoca petli for bedzie pobieral twoaje znawsko i mie
i bedzie qwysitelal okreslona liczbe razy*/

#include <iostream>
#include <cstdio>
using namespace std;
int main(){

    int razy;
    string imie, nazwisko;
        cout<<"Podaj imie i nazwisko: ";
        cin>>imie;

        cout<<"Podaj nazwisko: ";
        cin>>nazwisko;

        cout<<"Podaj liczbe razy: ";
        cin>>razy;

        for(int i=1;i<=razy;i++){
        cout<<imie<<" "<<nazwisko<<endl;

        }


getchar();
return 0;
}