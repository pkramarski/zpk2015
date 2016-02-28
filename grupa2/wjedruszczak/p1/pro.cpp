#include<iostream>
using namespace std;

int main() {
	// deklaracja zmiennych
	unsigned int a, b, c;

	// wczytywanie
	cin >> a >> b >> c;

	// wyswietlenie
	cout << a * b * c << endl << 2 * (a * b + b * c + a * c) << endl;
}