//Lan.cpp
#include <iostream>
using namespace std;
int main()
{
int a,b; //a -numer telefonu, b- rok urodzenia
cin >> a >> b;
int w= a%10; // ostatnia cyfra numeru telefonu
w=w*2; // Weź ostatnią cyfrę numeru komórki i pomnóż razy 2
w=w+5; //Do wyniku dodaj 5
w=w*50; //Pomnóż razy 50
w=w+1764; //Dodaj 1764
w=w-b; //Odejmij swój rok urodzenia
cout << w << endl;
}
