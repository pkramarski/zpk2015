#include <iostream>
using namespace std;

int main() {
    long int coun, pc, ASCII;
    char a, b, k;
    cin >> a >> b;
    
    if (b=='A')
        coun=10;
    else if (b=='B')
        coun=11;
    else if (b=='C')
        coun=12;
    else if (b=='D')
        coun=13;
    else if (b=='E')
        coun=14;
    else if (b=='F')
        coun=15;
    else
        coun=b-48;
        
        pc=a-48; //bo pierwsze 48 znakow sa znakami specjalnymi i obliczeniowymi
    
    ASCII = pc * 16 + coun;
    k = ASCII;
    
      cout << ASCII << endl;
      cout << k << endl;
}
