/*
TABLICE
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    /*tablice jednowymiarowe
    typ nazwa_tablicy[liczba_elemntow tablicy]
    tab1[0]=1;
    tab1[1]=2;
    tab1[2]=3;
    liczba elementów tablicy - jest numerowana od zera
    Tablica to zmienna, która ma przechowywać więcej niź jedną wartośc tego samego typu
    */
    int tab1[5];
    for (int i = 0; i < 5; i++)
    {
        tab1[i] = i + 1;
        cout << "tab1[" << i << "]=" << tab1[i] <<endl;
    }
    getchar();
    return 0;
}