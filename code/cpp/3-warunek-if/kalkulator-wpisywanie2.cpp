#include <iostream>
#include <cstdio>
#include <locale.h>
#include <windows.h>

using namespace std;
int main(){	
  setlocale(LC_CTYPE, "Polish");
  SetConsoleTitleA("Kalkulator prosty - dane wpisywane");

  cout <<"================================== \n";
  cout<< "KALKULATOR DWÓÆH LICZB ZMIENNO PRZECINKOWYCH  \n";
  cout <<"================================== \n";
  
  cout<< "Podaj wartoœæ dla a: ";
  float a;
  cin>>a;
  
  cout<<"Podaj wartoœæ dla b: ";
  float b;
  cin>>b;

  float suma=a+b;
  float roznica=a-b;
  float iloczyn=a*b;
  float iloraz=a/b;
  
  if(roznica=0){
  	cout << "Nie mozna"
  }
  
  cout <<"================================== \n";
  cout << "PODANE WARTOŒÆI: \n";
  cout << "a = "<<a<<", b = "<<b<<endl;
  cout <<"================================== \n";
   
  cout << "OTRZYMANE WYNIKI: \n";
  cout << "-->Suma jest równa: "<<a<<"+"<<b<<"="<<suma<<endl;
  cout << "-->Ró¿nica wynosi: "<<a<<"-"<<b<<"="<<roznica<<endl;
  cout << "-->Iloczyn jest równy: "<<a<<"*"<<b<<"="<<iloczyn<<endl;
  cout << "-->Iloraz wynosi: "<<a<<"/"<<b<<"="<<iloraz<<endl;
  cout <<"================================== \n";

  cin.ignore();
  return 0;

}




