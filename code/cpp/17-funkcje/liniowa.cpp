//napisz prgram liniowy z jedna niewoadmona
#include <iostream>
#include <cstdio>
using namespace std;
/* void funkcja ktora nie zwraca wartosci i nie ma argumrntow
void wypisz(){
cialo funkcji
}
void, infomruje ze nie zwraca zadnyhc wartosci danych, ktore mozna by przekazac innej funkcji lub instrukcji; funckja tego typu moze wykonac pewne czynnosci, ale nie przekazuje informacji zwrotnej , tzw. funckja bezparamterowa
w funkcjach tych nie musimy wpisywac istrukcji return, void inaczej to typ pusty
*/

    void liniowe(float a, float b){
        if(a!=0){
            cout<<"Rownianie ma doklanie jedno rozwiazanie, rowne: "<<b/a;
        }
        else{
            if(b!=0){
                cout<<"Rownanie nie ma rozwiazan.";
            }
            else{
                cout<<"Rownanie ma nieskoczenie wiele rozwiazan.";
            }
        }
    }

    int main(){
        float A,B;
        cout<<"Podaj wspolczynniki rownania: "<<endl;
        cin>>A>>B;
        liniowe(A,B);
        cin.ignore();
        return 0;
    }




