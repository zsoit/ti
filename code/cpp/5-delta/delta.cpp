#include <iostream>
#include <cstdio>
#include <math.h>
#include <locale.h>
#include <windows.h>
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Polish");
	SetConsoleTitleA("Delta - wyró¿nik trójmianu kwadratowego");
	

cout<<"=================================== \n";
cout<<"Delta \n";
cout<<"=================================== \n";

float a, b, c, delta, x1, x2;

cout << "Podaj a: \n";
cin >> a;
if(a==0){
	cout <<"Równanie nie jest kwadratowe \n";
}
else{
	cout << "Podaj b: \n";
	cin >> b;
	cout << "Podaj c: \n";
	cin >> c;
	delta=b*b-4*a*c;
	cout << "Delta wynosi: " << delta<<endl;
}

if(delta>0){
	x1=-sqrt(delta)/2*a;
	x2=sqrt(delta)/2*a;
	cout << "x1 wynosi: " << x1<<endl;
	cout << "x2 wynosi: " << x2<<endl;

}

else if(delta==0){
	x1=-sqrt(delta)/2*a;
	cout<<"Pierwiastek wynosi: "<<x1<<endl;
	
}
else if(delta<0){
	
	cout<<"Brak rozwiazañ pierwiastków \n";
}



cin.ignore(); 
return 0;
}


//Napisz program, który bêdzie oblicza³ pole i obwód prostk¹ta pamietajac ze a i b musi btc wieksze od 0;


