#include <iostream>
#include <cstdio>
#include <locale.h>
#include <windows.h>

using namespace std;
int main(){	
  setlocale(LC_CTYPE, "Polish");
  SetConsoleTitleA("Kalkulator prosty - dane wpisywane");

  cout <<"================================== \n";
  cout<< "KALKULATOR DW��H LICZB ZMIENNO PRZECINKOWYCH  \n";
  cout <<"================================== \n";
  
  cout<< "Podaj warto�� dla a: ";
  float a;
  cin>>a;
  
  cout<<"Podaj warto�� dla b: ";
  float b;
  cin>>b;

  float suma=a+b;
  float roznica=a-b;
  float iloczyn=a*b;
  float iloraz=a/b;
  
  cout <<"================================== \n";
  cout << "PODANE WARTO��I: \n";
  cout << "a = "<<a<<", b = "<<b<<endl;
  cout <<"================================== \n";
   
  cout << "OTRZYMANE WYNIKI: \n";
  cout << "-->Suma jest r�wna: "<<a<<"+"<<b<<"="<<suma<<endl;
  cout << "-->R�nica wynosi: "<<a-b<<endl;
  cout << "-->Iloczyn jest r�wny: "<<iloczyn<<endl;
  cout << "-->Iloraz wynosi: "<<iloraz<<endl;
  cout <<"================================== \n";

  cin.ignore();
  return 0;

}




