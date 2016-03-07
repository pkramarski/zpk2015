#include<iostream>
using namespace std;

int main() {
	// deklaracja zmiennej
	unsigned int n;

	// wczytywanie
	cin >> n;

	// czy liczba zlozona?
	for (int i = 2; i < n; i++)
		if (n % i == 0) {
			cout << "zlozona" << endl;
			return 0;
		}

	// okazalo sie, ze liczba pierwsza
	cout << "pierwsza" << endl;
}