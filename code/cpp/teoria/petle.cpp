/*
/* składania petli for

for(instrukacja_poczatkowa;warunek_sterujacy,intrukcja_kroku(wyrazenieni_modyfikujace))
{
    instrukcja;
}


istrukcja_pocztkowa-instrukcja,ktora wykonana jest przed pierwszym obiegiem petli
warunek_sterujacy-wyrazenie, ktorego logiczna wartosc jest badana przed kazdym obiegiem petli
instrukcja_kroku-instrukcja wykonana po kazdym przebiegu petli, czyli tak zawny licznik petli



i++; i=i+1
*/

/*przyklad1

for(int i=1;i<=10;i++){
    cout<<"Jakub Achtelik \n";
}





/*przyklad2

for(int i=1; i<=20;i++){
    cout<<i<<endl;

}

*/

//napisz program ktory bedzie o pobranie zakresu poczatkowrgo i koncowego liczb calkowitych i za pomoca petli for


1.BUDOWA DO-WHILE

instrukacja_poczatkowa;
do{
 instrukcja;
 intrukcja_kroku(wyrazenieni_modyfikujace);
}
while(warunek_sterujacy);

PRZYKLAD DO-WHILE

int i=0;
do{
    cout<<Hej<<endl;
    i++;
}
while(i>10);






instrukacja_poczatkowa;warunek_sterujacy,intrukcja_kroku(wyrazenieni_modyfikujace)



int i=10;
do
{
    cout<<i<<endl;
    i--;
}
while(i>=1);


for(int i=0;i<=100;i++){
    cout<<i<<". Jebac policje"<<endl;

}