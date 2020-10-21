//JAKUB ACHTELIK 3 TI 2020

#include <iostream>
#include <cstdio>
using namespace std;
int main() {
  /*znaki-utf8-pl
  int utf8_to_unicode(string utf8_code);
  string unicode_to_utf8(int unicode);*/

  cout<<"===================================== \n";
  cout<<"=  FIGURY GEOMETRYCZNE - KALKULATOR =  \n";
  cout<<"=====================================  \n";
  //MENU DO WYBORU FIGURY
  cout<<"I.Wybierz numer figury:  \n";
  cout<<"1) Prostokat \n";
  cout<<"2) Trapez \n";
  cout<<"3) Trojkat \n ";
  cout<<"> Twoj wybor: ";
  int figura; cin>>figura; 
  cout<<"====================================="<<endl;

  //SWITCH-CASE-MAIN ==================
  switch(figura){

    //1)PROSTOKAT 
    case 1 :{

      //prostokat__numer-operacji
      cout<<"II.Wybierz numer operacji: \n ";
      cout<<"1) Pole  2) Obwod \n > Twoj wybor: ";
      int prostokat; cin >> prostokat;
        float a,b;
        if(prostokat==1 || prostokat==2){
                  
            //prostokata__dane      
            cout<<" Podaj a: "; cin>>a;
            cout<<" Podaj b: ";  cin>>b;
        }
        
      //prostokat__switch-case
      switch(prostokat){

        case 1 :{
          if(a==0 || b==0){
            cout<<" >> Blad! Podane dlugosci bokow nie moga byc rowne ZERU!";
          }
          else{
            cout<<" >> Pole wynosi: "<<a*b<<endl;
            cout<<" >> Ze wzoru: : "<<"P=ab="<<a<<"*"<<b<<"="<<a*b;

          }
          break;
        }

        case 2 :{
          if(a==0 || b==0){
            cout<<" >> Blad! Podane dlugosci bokow nie moga byc rowne ZERU!";
          }

          else{
            cout<<" >> Obwod wynosi: "<<2*a+2*b<<endl;
            cout<<" >> Ze wzoru: "<<"Ob=2a+2b="<<"2*"<<a<<"+"<<"2*"<<b<<"="<<2*a+2*b;
          }
          
          break;
        }

        default:{
          cout<<" >> Nie ma takiej operacji!";
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
      cout<<"1) Pole  2) Obwod \n > Twoj wybor: ";
      int trapez; cin>>trapez;

      //trapez__dane
      float a, b, c, d, h; 
      if(trapez==1){
          //trapez__dane__pola
          cout<<" Podaj a: "; cin>>a;
          cout<<" Podaj b: "; cin>>b;
          cout<<" Podaj h: "; cin>>h;
      }

      if(trapez==2){  
         //trapez__dane__obwodu
         cout<<" Podaj a: "; cin>>a;
         cout<<" Podaj b: "; cin>>b;
         cout<<" Podaj c: "; cin>>c;
         cout<<" Podaj d: "; cin>>d;
       }

      //trapez__switch-case
      switch(trapez){
        case 1 :{

          if(a==0 || b==0){
            cout<<" >> Blad! Podane wymiary trapezu nie moga byc rowne ZERU!";
          }
          else{
            cout<<" >> Pole wynosi: "<<((a+b)*h)/2<<endl;
            cout<<" >> Ze wzoru: "<<"P=((a+b)*h)/2=(("<<a<<"+"<<b<<")*"<<h<<")/2="<<((a+b)*h)/2;
          }

          break;
        }

        case 2 :{
          if(a==0 || b==0){
            cout<<" >> Blad! Podane wymiary trapezu nie moga byc rowne ZERU!";
          }
          else{
             cout<<" >> Obwod wynosi: "<<a+b+c+d<<endl;
              cout<<" >> Ze wzoru: "<<"Ob=a+b+c+d="<<a<<"+"<<b<<"+"<<c<<"+"<<d<<"="<<a+b+c+d;
          }
         
          break;
        }

        default:{
          cout<<" >> Nie ma takiej operacji!";
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
      cout<<"1) Pole  2) Obwod \n > Twoj wybor: ";
      int trojkat; cin>>trojkat;

      //trojkat__dane
      float  a,b,c,h;

      if(trojkat==1){
          //trojkat__dane__pole
          cout<<" Podaj a:  "; cin>>a;
          cout<<" Podaj h:  "; cin>>h;
      }

      if(trojkat==2){
          //trojkat__dane__obwod
          cout<<" Podaj a:  "; cin>>a;
          cout<<" Podaj b:  "; cin>>b;
          cout<<" Podaj c:  "; cin>>c; 
      }
  
      //trojkat__switch-case
      switch(trojkat){
          case 1:{
            if(a==0  || h==0){
              cout<<" >> Blad! Podane wymiary trojkata nie moga byc rowne ZERU!";
            }
            else{
              cout<<" >> Pole wynosi: "<<(a*h)/2<<endl;
              cout<<" >> Ze wzoru: "<<"P=(a*h)/2="<<"("<<a<<"*"<<h<<")/2="<<(a*h)/2;
            } 
            break;
          }

          case 2:{
            if(a==0 || b==0 || c==0){
              cout<<" >> Blad! Podane wymiary trojkata nie moga byc rowne ZERU!";
            }
            else{
              cout<<" >> Obwod wynosi: "<<a+b+c<<endl;
              cout<<" >> Ze wzoru: "<<"Ob=a+b+c="<<a<<"+"<<b<<"+"<<c<<"="<<a+b+c;
            }
            break;
          }

          default :{
            cout<<" >> Nie ma takiej operacji!";
            break;
          }
      }
      //end-of-trojkat__switch-case

      break;
    }
    //END-OF-TROJKAT

    /*#MAIN*/ default :{
      cout<<" >> Nie ma takiej figury!";
    }

  }
  //=================END-OF-SWITCH-CASE
  cout<<endl<<"====================================="<<endl;
  cout<<"=  Copyright Jakub Achtelik 2020   = "<<endl;
  cout<<"====================================="<<endl;


getchar();
return 0;

}
//END-OF-MAIN
