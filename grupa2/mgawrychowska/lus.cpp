//lus.cpp
#include <iostream>
using namespace std;

int main()
{
int n;
cin >> n;
int wynik=0;

while (n>0)
{ wynik=(n%10)+wynik*10;
n/=10;}
cout << wynik << endl;
}
