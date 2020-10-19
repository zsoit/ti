#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	
	cout << "Podaj dzien tygodnia w numeracji od 1 do 7: ";
	int dzien;
	cin>>dzien;
	
	switch(dzien){
		case 1 : {
			cout<<"Poniedzialek";
			break;
		}
		
		case 2: {
			cout<<"Wtorek";
			break;
		}
		
		case 3: {
			cout<<"Sroda";
			break;
		}
		
		case 4: {
			cout<<"Czwartek";
			break;
		}
		
		case 5: {
			cout<<"Piatek";
			break;
		}
		
		case 6: {
			cout <<"Sobota";
			break;
		}
		
		case 7: {
			cout<<"Niedziela";
			break;
		}
		
		default :{
			cout<<"Nie ma takiego dnia tygodnia!";
			break;
		}
	}
	
	
	
	
	return 0;
	cin.ignore();
}
