#include <iostream>
#include <cstdio>
#include <locale.h>
#include <windows.h>
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Polish");
	SetConsoleTitleA("Kalkulator prosty - dzielenie przez 0");
	

cout<<"=================================== \n";
cout<<"KALKULATOR PROSTY \n";
cout<<"=================================== \n";

float a, b;

cout<<"Podaj liczbe pierwsz�: ";
cin>>a;

cout<<"Podaj liczb� drug�: ";
cin>>b;

cout<<"=================================== \n";
cout<<"-->Suma to: "<<a<<"+"<<b<<"="<<a+b<<endl;
cout<<"-->R�nica to: "<<a<<"-"<<b<<"="<<a-b<<endl;
cout<<"-->Iloczyn to: "<<a<<"*"<<b<<"="<<a*b<<endl;



if(a==0 || b==0){
	cout<<"Nie dziel przez zero! \n";
}

else{
	cout<<"-->Iloraz to: "<<a<<"/"<<b<<"="<<a/b;
}


cin.ignore(); 
return 0;
}
