#include<iostream>
using namespace std;

int main() {
	// deklaracja zmiennych
	unsigned int n, i = 1;

	// wczytywanie
	cin >> n;

	// potegowanie
	while (i <= n) {
		cout << i << endl;
		i *= 2;
	}
}
