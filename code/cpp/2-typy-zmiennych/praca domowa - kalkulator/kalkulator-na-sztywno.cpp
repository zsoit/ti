#include <iostream>
#include <cstdio>
#include <locale.h>
#include <windows.h>

using namespace std;
int main(){
	
  setlocale(LC_CTYPE, "Polish");
  SetConsoleTitleA("Kalkulator prosty - dane na sztywno");
  

  int a=8;
  int b=3;

  int suma=a+b;
  int roznica=a-b;
  int iloczyn=a*b;
  int iloraz=a/b;
  
  cout <<"================================== \n";
  cout<< "KALKULATOR DW��H LICZB CA�KOWITYCH \n";
  
  cout <<"================================== \n";
  cout << "PODANE WARTO��I: \n";
  cout << "a = "<<a<<", b = "<<b<<endl;
  cout <<"================================== \n";
 
  
  cout << "OTRZYMANE WYNIKI: \n";
  
  cout << "-->Suma jest r�wna: "<<suma<<endl;
  cout << "-->R�nica wynosi: "<<roznica<<endl;
  cout << "-->Iloczyn jest r�wny: "<<iloczyn<<endl;
  cout << "-->Iloraz wynosi: "<<iloraz<<endl;
  
  cout <<"================================== \n";
  
  getchar();
  return 0;

}




