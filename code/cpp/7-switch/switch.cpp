#include <iostream>
#include <cstdio>

int lekcja;
using namespace std;
int main(){
	
	
/*	switch(wyrazenie){
		
		case wartosc: {
		instrukcja;
		break; }
		
		default wartosc: {
		instrukcja1;
		break; }
	}
	
	
	*/
	
	cout<<"Ktora jest godizna ? ";
	cin>>lekcja;
	
	
	switch(lekcja){
		case 1: {
			cout << "Sieci";
			break;
		}
		
		case 2: {
			cout<<"polski";
			break;
		}
		
		case 3: {
			cout<<"niemiecki";
			break;
		}
		
		case 4: {
			cout<<"matma";
			break;
		}
		
		case 5: {
			cout<<"wf";
			break;
		}
		
		case 6: {
			cout<<"wos";
			break;
		}
		
		case 7: {
			cout<<"his";
			break;
		}
		
		default : {
			cout<<"asso";
			break;
		}
	}
	

	cin.ignore() ;
	return 0;
}
