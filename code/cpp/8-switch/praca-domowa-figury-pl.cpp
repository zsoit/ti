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
  cout<<"1) Prostok¹t \n";
  cout<<"2) Trapez \n";
  cout<<"3) Trójkat \n ";
  cout<<"> Twój wybór: ";
  int figura; cin>>figura; 
  cout<<"====================================="<<endl;

  //SWITCH-CASE-MAIN ==================
  switch(figura){

    //1)Prostok¹t 
    case 1 :{

      //Prostok¹t__numer-operacji
      cout<<"II.Wybierz numer operacji: \n ";
      cout<<"1) Pole  2) Obwód \n > Twój wybór: ";
      int prostokat; cin >> prostokat;
        float a,b;
        if(prostokat==1 || prostokat==2){
                  
            //Prostok¹ta__dane      
            cout<<" Podaj a: "; cin>>a;
            cout<<" Podaj b: ";  cin>>b;
        }
        
      //Prostok¹t__switch-case
      switch(prostokat){

        case 1 :{
          if(a==0 || b==0){
            cout<<" >> B³¹d! Podane d³ugoœci boków nie mog¹ byæ równe ZERU!";
          }
          else{
            cout<<" >> Pole wynosi: "<<a*b<<endl;
            cout<<" >> Ze wzoru: : "<<"P=ab="<<a<<"*"<<b<<"="<<a*b;

          }
          break;
        }

        case 2 :{
          if(a==0 || b==0){
            cout<<" >> B³¹d! Podane d³ugoœci boków nie mog¹ byæ równe ZERU!";
          }

          else{
            cout<<" >> Obwód wynosi: "<<2*a+2*b<<endl;
            cout<<" >> Ze wzoru: "<<"Ob=2a+2b="<<"2*"<<a<<"+"<<"2*"<<b<<"="<<2*a+2*b;
          }
          
          break;
        }

        default:{
          cout<<" >> Nie ma takiej operacji!";
          break;
        }

      }
      //end-of-Prostok¹t__switch-case

      break;
    }
    //END-OF-Prostok¹t

    //2)TRAPEZ
    case 2 :{

      //trapez__numer-operacji
      cout<<"II.Wybierz numer operacji: \n";
      cout<<"1) Pole  2) Obwód \n > Twój wybór: ";
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
         //trapez__dane__Obwódu
         cout<<" Podaj a: "; cin>>a;
         cout<<" Podaj b: "; cin>>b;
         cout<<" Podaj c: "; cin>>c;
         cout<<" Podaj d: "; cin>>d;
       }

      //trapez__switch-case
      switch(trapez){
        case 1 :{

          if(a==0 || b==0){
            cout<<" >> B³¹d! Podane wymiary trapezu nie mog¹ byæ równe ZERU!";
          }
          else{
            cout<<" >> Pole wynosi: "<<((a+b)*h)/2<<endl;
            cout<<" >> Ze wzoru: "<<"P=((a+b)*h)/2=(("<<a<<"+"<<b<<")*"<<h<<")/2="<<((a+b)*h)/2;
          }

          break;
        }

        case 2 :{
          if(a==0 || b==0){
            cout<<" >> B³¹d! Podane wymiary trapezu nie mog¹ byæ równe ZERU!";
          }
          else{
             cout<<" >> Obwód wynosi: "<<a+b+c+d<<endl;
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

    //3)trójkat
    case 3:{

     //trójkat__numer-operacji
      cout<<"II.Wybierz numer operacji: \n";
      cout<<"1) Pole  2) Obwód \n > Twój wybór: ";
      int trojkat; cin>>trojkat;

      //trójkat__dane
      float  a,b,c,h;

      if(trojkat==1){
          //trójkat__dane__pole
          cout<<" Podaj a:  "; cin>>a;
          cout<<" Podaj h:  "; cin>>h;
      }

      if(trojkat==2){
          //trójkat__dane__Obwód
          cout<<" Podaj a:  "; cin>>a;
          cout<<" Podaj b:  "; cin>>b;
          cout<<" Podaj c:  "; cin>>c; 
      }
  
      //trójkat__switch-case
      switch(trojkat){
          case 1:{
            if(a==0  || h==0){
              cout<<" >> B³¹d! Podane wymiary trójkata nie mog¹ byæ równe ZERU!";
            }
            else{
              cout<<" >> Pole wynosi: "<<(a*h)/2<<endl;
              cout<<" >> Ze wzoru: "<<"P=(a*h)/2="<<"("<<a<<"*"<<h<<")/2="<<(a*h)/2;
            } 
            break;
          }

          case 2:{
            if(a==0 || b==0 || c==0){
              cout<<" >> B³¹d! Podane wymiary trójkata nie mog¹ byæ równe ZERU!";
            }
            else{
              cout<<" >> Obwód wynosi: "<<a+b+c<<endl;
              cout<<" >> Ze wzoru: "<<"Ob=a+b+c="<<a<<"+"<<b<<"+"<<c<<"="<<a+b+c;
            }
            break;
          }

          default :{
            cout<<" >> Nie ma takiej operacji!";
            break;
          }
      }
      //end-of-trójkat__switch-case

      break;
    }
    //END-OF-trójkat

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

