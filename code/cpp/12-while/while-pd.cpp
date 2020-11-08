//za pomoca petli while i for napisz program, ktory bedzie pobieral znak z klawiatury oraz bedzie go wypisywal okreslona liczbe razy przez uzytkownika 

#include <iostream>
#include <cstdio>
using namespace std;
int main() {
 char znak; int razy, i; 

  //PETLA-WHILE
  cout<<"Podaj znak: "; cin>>znak;
  cout<<"Podaj liczbe powtorzen: "; cin>>razy;
  i=1;
  while(i<=razy){
    cout<<i<<". "<<znak<<endl;
    i++;
  }

  //PETLA-FOR
  cout<<"Podaj znak: "; cin>>znak;
  cout<<"Podaj liczbe powtorzen: "; cin>>razy;
  for(int i=1;i<=razy;i++){
    cout<<i<<". "<<znak<<endl;
  }

  cin.ignore();
  return 0;

}