//JAKUB ACHTELIK 3 TI 2020

#include <iostream>
#include <cstdio>
using namespace std;
int main() {

  cout<<"===================================== \n";
  cout<<"=  FIGURY GEMETRYCZNE - KALKULATOR  =  \n";
  cout<<"=====================================  \n";
  //MENU DO WYBORU FIGURY
  cout<<"I.Wybierz numer figury:  \n";
  cout<<"1) Prostokat \n";
  cout<<"2) Trapez \n";
  cout<<"3) Trojkat \n ";
  cout<<"> Twoj wybor: ";
  int figura; cin>>figura; 

  //SWITCH-CASE-MAIN ==================
  switch(figura){

    //1)PROSTOKAT 
    case 1 :{

      //prostokat__numer-operacji
      cout<<"II.Wybierz numer operacji: \n ";
      cout<<"1) Pole  2) Obwod \n";
      cout<<"> Twoj wybor: ";
      int prostokat; cin >> prostokat;

      //prostokata__dane
      float a,b;
      cout<<"Podaj a: "; cin>>a;
      cout<<"Podaj b: ";  cin>>b;
     

      //prostokat__switch-case
      switch(prostokat){
        case 1 :{
          cout<<"> Pole wynosi: "<<a*b;
          break;
        }

        case 2 :{
          cout<<"> Obwod wynosi: "<<2*a+2*b;
          break;
        }

        default:{
          cout<<"Nie ma takiej operacji!";
          break;
        }

      }
      //end-of-prostokat__switch-case

      break;
    }
    //END-OF-PROSTOKAT

    //2)TRAPEZ
    case 2 :{

      //trapez__numer-operacji
      cout<<"II.Wybierz numer operacji: \n";
      cout<<"1) Pole 2) Obwod  \n";
      cout<<"> Twoj wybor to: ";
      int trapez; cin>>trapez;

      //trapez__dane
      int a, b, c, d, h; 
      cout<<"Podaj a: "; cin>>a;
      cout<<"Podaj b: "; cin>>b;
      cout<<"Podaj c: "; cin>>c;
      cout<<"Podaj d: "; cin>>d;
      cout<<"Podaj h: "; cin>>h;


      //trapez__switch-case
      switch(trapez){
        case 1 :{
          cout<<"> Pole wynosi: "<<((a+b)*h)/2;
          break;
        }

        case 2 :{
          cout<<"> Obwod wynosi: "<<a+b+c+d;
          break;
        }

        default:{
          cout<<"Nie ma takiej operacji!";
          break;
        }
      }
      //end-of-trapez__switch-case

      break;
    }
    //END-OF-TRAPEZ    

    //3)TROJKAT
    case 3:{

     //trojkat__numer-operacji
      cout<<"II.Wybierz numer operacji: \n";
      cout<<"1) Pole 2) Obwod \n";
      cout<<"> Twoj wybor: ";
      int trojkat; cin>>trojkat;

      //trojkat__dane
      int a,b,c,h;
      cout<<"Podaj a:  "; cin>>a;
      cout<<"Podaj b:  "; cin>>b;
      cout<<"Podaj c:  "; cin>>c;
      cout<<"Podaj h:  "; cin>>h;

      //trojkat__switch-case
      switch(trojkat){
          case 1:{
            cout<<"> Pole wynosi: "<<(a*h)/2;
            break;
          }

          case 2:{
            cout<<"> Obwod wynosi: "<<a+b+c;
            break;
          }

          default :{
            cout<<"Nie ma takiej operacji!";
            break;
          }
      }
      //end-of-trojkat__switch-case

      break;
    }
    //END-OF-TROJKAT

    /*#MAIN*/ default :{
      cout<<"Nie ma takiej figury!";
    }

  }
  //=================END-OF-SWITCH-CASE

cin.ignore();
return 0;

}
//END-OF-MAIN
