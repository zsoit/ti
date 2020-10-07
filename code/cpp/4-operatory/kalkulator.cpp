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

float a, b, warunek;

cout<<"Podaj liczbe pierwsz¹: ";
cin>>a;


cout<<"Podaj liczbê drug¹: ";
cin>>b;


cout<<"=================================== \n";
cout<<"Numery warunkow:  \n";
cout<<"1) Dodawanie  \n";
cout<<"2) Odejmowanie  \n";
cout<<"3) Mno¿enie   \n";
cout<<"4) Dzielenie  \n";
cout<<"=================================== \n";

cout<<"Podaj numer warunku: ";
cin>>warunek;

if(warunek==1){
 cout<<"-->Suma to: "<<a<<"+"<<b<<"="<<a+b<<endl;	
}

if(warunek==2){
	cout<<"-->Ró¿nica to: "<<a<<"-"<<b<<"="<<a-b<<endl;
	}
	
if(warunek==3){
	
		cout<<"-->Iloczyn to: "<<a<<"*"<<b<<"="<<a*b<<endl;	
}

if(warunek==4){
	
		if(a==0 || b==0){
			cout<<"Nie dziel przez zero! \n";
		}
		
		else{
			cout<<"-->Iloraz to: "<<a<<"/"<<b<<"="<<a/b;
		}
}	





cin.ignore(); 
return 0;
}
