//CHOINKA JAKUB ACHTELIK III TI
#include <iostream>
#include <cstdio>
using namespace std;
int main(){

    char znak; int wiersze;
    cout<<"=========CHOINKA========= \n";
    cout<<"Podaj znak: "; cin>>znak;
    cout<<"Podaj liczbe  wierszy: ";cin>>wiersze;
    cout<<"========================= \n";
    for(int i=1; i<=wiersze; i++){
        cout<<"       "<<znak<<endl;
        cout<<"      "<<znak<<" "<<znak<<endl;
        cout<<"     "<<znak<<"  "<<znak<<" "<<znak<<endl;
        cout<<"   "<<znak<<"  "<<znak<<"  "<<znak<<" "<<znak<<endl;
    }

    cout<<"       "<<znak<<endl;
    cout<<"       "<<znak<<endl;
    cout<<"       "<<znak<<endl;
    cout<<"    "<<znak<<"  "<<znak<<"  "<<znak<<"  "<<endl;

    cin.ignore();
    return 0;

}