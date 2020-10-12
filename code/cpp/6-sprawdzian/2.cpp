#include <iostream>
#include <cstdio>
using namespace std;
int main() {
	

	
	
	cout << "Numery samochodow w naszym komisie:  \n";
	cout << "1 . VW   2. BMW  3. Fiat  \n";
	
	
	
	
	cout << "Podaj numer samochodu: \n";
	int numer;
	cin >> numer;
	
	if(numer==1){
		cout << "Twoje auto to VW x240 \n";
		
	}
	
		if(numer==2){
		cout << "Twoje auto to BMW 2000 \n";
		
	}
	
	
		if(numer==3){
		cout << "Twoje auto to fiat 126p  \n";
		
	}
	
	if(numer>3){
	cout << " To juz wszystkie auta komisu!  \n";	
	}
	
	

	
cin.ignore();
return 0;


}
