//JAKUB ACHTELIK 3 TI 2020 ver.WindowsCMD

#include <iostream>
#include <cstdio>
#include <locale.h>
#include <windows.h>
using namespace std;
int main() {
	
   setlocale(LC_CTYPE, "Polish");
   SetConsoleTitleA(" FIGURY GEOMETRYCZNE - KALKULATOR - JAKUB ACHTELIK III TI");
	
  /* //znaki-utf8-pl-wersja-dla-innych-komplilatorow//
  int utf8_to_unicode(string utf8_code);
  string unicode_to_utf8(int unicode);
  */ 
  
  cout<<"===================================== \n";
  cout<<"=  FIGURY GEOMETRYCZNE - KALKULATOR =  \n";
  cout<<"=====================================  \n";
  //MENU DO WYBORU FIGURY
  cout<<"I.Wybierz numer figury:  \n";
  cout<<"1) Prostok�t \n";
  cout<<"2) Trapez \n";
  cout<<"3) Tr�jkat \n ";
  cout<<"> Tw�j wyb�r: ";
  int figura; cin>>figura; 
  cout<<"====================================="<<endl;

  //SWITCH-CASE-MAIN ==================
  switch(figura){

    //1)Prostok�t 
    case 1 :{

      //Prostok�t__numer-operacji
      cout<<"II.Wybierz numer operacji: \n ";
      cout<<"1) Pole  2) Obw�d \n > Tw�j wyb�r: ";
      int prostokat; cin >> prostokat;
        float a,b;
        if(prostokat==1 || prostokat==2){
                  
            //Prostok�ta__dane      
            cout<<" Podaj a: "; cin>>a;
            cout<<" Podaj b: ";  cin>>b;
        }
        
      //Prostok�t__switch-case
      switch(prostokat){

        case 1 :{
          if(a==0 || b==0){
            cout<<" >> B��d! Podane d�ugo�ci bok�w nie mog� by� r�wne ZERU!";
          }
          else{
            cout<<" >> Pole wynosi: "<<a*b<<endl;
            cout<<" >> Ze wzoru: : "<<"P=ab="<<a<<"*"<<b<<"="<<a*b;

          }
          break;
        }

        case 2 :{
          if(a==0 || b==0){
            cout<<" >> B��d! Podane d�ugo�ci bok�w nie mog� by� r�wne ZERU!";
          }

          else{
            cout<<" >> Obw�d wynosi: "<<2*a+2*b<<endl;
            cout<<" >> Ze wzoru: "<<"Ob=2a+2b="<<"2*"<<a<<"+"<<"2*"<<b<<"="<<2*a+2*b;
          }
          
          break;
        }

        default:{
          cout<<" >> Nie ma takiej operacji!";
          break;
        }

      }
      //end-of-Prostok�t__switch-case

      break;
    }
    //END-OF-Prostok�t

    //2)TRAPEZ
    case 2 :{

      //trapez__numer-operacji
      cout<<"II.Wybierz numer operacji: \n";
      cout<<"1) Pole  2) Obw�d \n > Tw�j wyb�r: ";
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
         //trapez__dane__Obw�du
         cout<<" Podaj a: "; cin>>a;
         cout<<" Podaj b: "; cin>>b;
         cout<<" Podaj c: "; cin>>c;
         cout<<" Podaj d: "; cin>>d;
       }

      //trapez__switch-case
      switch(trapez){
        case 1 :{

          if(a==0 || b==0){
            cout<<" >> B��d! Podane wymiary trapezu nie mog� by� r�wne ZERU!";
          }
          else{
            cout<<" >> Pole wynosi: "<<((a+b)*h)/2<<endl;
            cout<<" >> Ze wzoru: "<<"P=((a+b)*h)/2=(("<<a<<"+"<<b<<")*"<<h<<")/2="<<((a+b)*h)/2;
          }

          break;
        }

        case 2 :{
          if(a==0 || b==0){
            cout<<" >> B��d! Podane wymiary trapezu nie mog� by� r�wne ZERU!";
          }
          else{
             cout<<" >> Obw�d wynosi: "<<a+b+c+d<<endl;
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

    //3)tr�jkat
    case 3:{

     //tr�jkat__numer-operacji
      cout<<"II.Wybierz numer operacji: \n";
      cout<<"1) Pole  2) Obw�d \n > Tw�j wyb�r: ";
      int trojkat; cin>>trojkat;

      //tr�jkat__dane
      float  a,b,c,h;

      if(trojkat==1){
          //tr�jkat__dane__pole
          cout<<" Podaj a:  "; cin>>a;
          cout<<" Podaj h:  "; cin>>h;
      }

      if(trojkat==2){
          //tr�jkat__dane__Obw�d
          cout<<" Podaj a:  "; cin>>a;
          cout<<" Podaj b:  "; cin>>b;
          cout<<" Podaj c:  "; cin>>c; 
      }
  
      //tr�jkat__switch-case
      switch(trojkat){
          case 1:{
            if(a==0  || h==0){
              cout<<" >> B��d! Podane wymiary tr�jkata nie mog� by� r�wne ZERU!";
            }
            else{
              cout<<" >> Pole wynosi: "<<(a*h)/2<<endl;
              cout<<" >> Ze wzoru: "<<"P=(a*h)/2="<<"("<<a<<"*"<<h<<")/2="<<(a*h)/2;
            } 
            break;
          }

          case 2:{
            if(a==0 || b==0 || c==0){
              cout<<" >> B��d! Podane wymiary tr�jkata nie mog� by� r�wne ZERU!";
            }
            else{
              cout<<" >> Obw�d wynosi: "<<a+b+c<<endl;
              cout<<" >> Ze wzoru: "<<"Ob=a+b+c="<<a<<"+"<<b<<"+"<<c<<"="<<a+b+c;
            }
            break;
          }

          default :{
            cout<<" >> Nie ma takiej operacji!";
            break;
          }
      }
      //end-of-tr�jkat__switch-case

      break;
    }
    //END-OF-tr�jkat

    /*#MAIN*/ default :{
      cout<<" >> Nie ma takiej figury!";
    }

  }
  //=================END-OF-SWITCH-CASE
  cout<<endl<<"====================================="<<endl;
  cout<<"=  Copyright Jakub Achtelik 2020   = "<<endl;
  cout<<"====================================="<<endl;



return 0;
getchar();


}
//END-OF-MAIN

