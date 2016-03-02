#include <iostream>
using namespace std;

int main()
{
char a[5];

cin >> a;

int x,j;
int liczba=0;
int i=0;
int dlugosc=0;
int k=0; //zmienna zliczająca przejścia pętli

//wyznacza dlugosc napisu
while(a[i]!=0)
{
    dlugosc++;
    i++;
}

for(i=dlugosc-1;i>=0;i--)
{
    if((int)a[i]<=57)
        x=a[i]-48;
    else
        x=a[i]-55;

j=k;
//potęgowanie
while(j!=0)
{
    x=x*16;
    j--;
}
liczba=liczba+x;
k++;
}

cout<<liczba<<endl;
cout<<(char)liczba<<endl;
}
