/*

*/

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    char imie[30];
    cout<<"podaj imie: ";
    cin >> imie;
    for(int i=0; i<30; i++){
        cout<<imie[i]<<endl;
    }
    getchar();
    return 0;
}