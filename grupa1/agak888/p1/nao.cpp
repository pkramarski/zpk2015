#include <iostream>
using namespace std;

int main() {
    int a; 
	int b; 
	int c;
    
    cin >> a >> b >> c; /* c-in zamiast c-out - wczytywanie zmiennej, dziubki w druga strone*/
    
    cout << a << " " << b << " " << c << endl; /*wypisywanie, " " - zeby byly spacje*/
    cout << c << " " << b << " " << a << endl;
}
