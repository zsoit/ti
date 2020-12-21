#include <iostream>
#include <cstdio>

using namespace std;
void petla (string A, string B, int C ){
    
    for (int i=1; i<=C; i++){
        cout<<i<<". " <<A<<" "<<B<<endl;
    }


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