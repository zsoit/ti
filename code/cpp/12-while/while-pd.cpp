//za pomoca petli for i while prosze napisac program ktory bedzie pobieral znaka z klawiatury i bedzie wypisal okreslona liczbe razy przez uzytkownika 

#include <iostream>
#include <cstdio>
using namespace std;
int main() {
 char znak; int razy, i; //zmienna typu char, moze pobrac kazdy pojedynczy znak/cyfre, nie pobiera wiecej niz jeden znak/cyfre;

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