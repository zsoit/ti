#include <iostream>
#include <cstdio>
#include <math.h>
#include <locale.h>
#include <windows.h>
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Polish");
	SetConsoleTitleA("Pole prostok�ta");
	

cout<<"=================================== \n";
cout<<"Pole prostok�ta \n";
cout<<"=================================== \n";


float a, b, pole, obwod, numer;


cout<<"Podaj a: ";
cin>>a;
if(a==0){
	cout<<"Liczba a nie mo�e by� r�wne zero! \n";
	
}

else{

	cout<<"Podaj b: ";
	cin>>b;
	if(b==0){
		cout<<"Liczba b nie mo�e by� r�wna zeru! \n";
	}
	
	else{
	cout<<"=================================== \n";	
	cout<<"OPERACJE DO WYKONANIA: \n";
	cout<<"1) Oblicz Pole \n";
	cout<<"2) Oblicz Obw�d \n";
	pole=a*b;
    obwod=a+a+b+b;		
	
	cout<<"Podaj numer operacji: ";
	cin>>numer;
	if(numer==1){
		cout<<"=================================== \n";
		cout<<"Pole wynosi: "<<pole<<endl;
		cout<<"===================================" ;
	}
	
	if(numer==2){
		cout<<"=================================== \n";
		cout<<"Obw�d wynosi: "<<obwod<<endl;
		cout<<"===================================";
	}
	
	
	
	}
	
	
	
}


getchar(); 
return 0;
}


//Napisz program, kt�ry b�dzie oblicza� pole i obw�d prostk�ta pamietajac ze a i b musi btc wieksze od 0;


