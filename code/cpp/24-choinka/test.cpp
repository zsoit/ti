//
#include <iostream>
#include <cstdio>
using namespace std;
int main(){

    char znak; int wiersze; 
    cout<<"Podaj pierwszy znak: ";
    cin>>znak;

    for(int i=1; i<=4; i++){
        // cout<<znak<<endl;
        if(i==1){
            cout<<"    "<<znak<<endl;
        }

        if(i==2){
            cout<<"   "<<znak<<znak<<endl;
        }

        if(i==3){ 
            cout<<znak<<"  "<<znak<<"  "<<znak<<endl;

        }

        if(i==4){
            cout<<" "<<znak<<znak<<znak<<znak<<endl;

        }
        
    }

    cin.ignore();
    return 0;

}