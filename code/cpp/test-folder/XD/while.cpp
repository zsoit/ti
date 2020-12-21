#include <iostream>
#include <cstdio>

using namespace std;
void petla (string A, string B, int C ){
    int i=1;
    do{
        cout<<i<<". " <<A<<" "<<B<<endl;
        i++;
    }
    while (i<=C);

}
int main()
{

    string imie, nazwisko;
    int razy;
    cout<<"Podaj imie: ";
    cin>>imie;
    cout<<"Podaj nazwisko: ";
    cin>>nazwisko;
    cout<<"Podaj ile razy: ";
    cin>>razy;
    petla(imie,nazwisko,razy);


    getchar();
    return 0;
}