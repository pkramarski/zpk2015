#include <iostream>
using namespace std;

int main() {
    char a;
    char b;
    cin >> a >> b ;
    if (b>=48 && b<=57)
     cout << (a-48)*16 + b - 48 << endl << (char)((a-48)*16 + b - 48);
     else 
     cout << (a-48)*16 + b - 55 << endl << (char)((a-48)*16 + b - 55);
}
