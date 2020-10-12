#include <iostream>
#include <cstdio>
using namespace std;
int main() {
	

	//X^2-5x-7(X^2+3x+2)/(9 X^2-3x)=y
	
	cout << "ROWNANIE: X^2-5x-7(X^2+3x+2)/(9 X^2-3x)=y \n";
	cout << "============================================= \n";
	

	
	float x, y;
	
	x=8;
	
	cout<<"x = "<<8<<endl;
	
	y=x*x-5*x-7*(x*x+3*x+2)/(9*x*x-3*x);
	
	cout << "Wynik:  "<< y;

	
cin.ignore();
return 0;


}
