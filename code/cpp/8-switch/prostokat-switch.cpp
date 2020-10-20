#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	
	float a,b;
	
	cout<<"Podaj liczbe a:  \n";
	cin>>a;
	
	cout<<"Podaj liczbe b: \n";
	cin>>b;
	
	cout<<"Numery operacji: \n";
	cout<<"1) Pole \n";
	cout<<"2) Obwod \n";
	
	cout<<"Podaj numer operacji: ";
	int numer;
	cin>>numer;
	
	switch(numer){
		
		case 1:{
			
			if(a==0 || b==0){
				cout<<"Pole jest rowne ZERU!";
			}
			
			else{
				cout<<"Pole jest rowne "<<a<<"*"<<b<<"="<<a*b;
			}
			
			break;
		}
		
		case 2: {
			
			
			if(a==0 || b==0){
				cout<<"Obwod jest rowny ZERU!";
			}
			
			else {
				cout<<"Obwod jest rowny: "<<"2*"<<a<<"+"<<"2*"<<b<<"="<<2*a+2*b;
			}

			break;
		}
		
		default : {
			cout<<"Nie ma takiej operacji!";
			break;
		}
	
	}

	
	
	return 0;
	cin.ignore();

}

//napisz prgram kotry za omoca swutch bedzie wybieral czy ma obliczyc ople czy pbdwod prostokata pamietajac ze liczby musza byc wieksze od zera 
