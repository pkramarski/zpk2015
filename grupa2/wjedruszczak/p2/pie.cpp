#include<iostream>
using namespace std;

int main() {
	// deklaracja zmiennych
	unsigned int n, x, notowania, pierwszyDzien = 0, ostatniDzien;

	// wczytywanie
	cin >> n >> x;

	// wpisywanie notowan
	for (int i = 1; i <= n; i++) {
		cin >> notowania;

		// czy cena akcji wynosila x?
		// jezeli tak, to modyfikacja zmiennych pierwszyDzien (tylko raz) i ostatniDzien
		if (notowania == x) {
			if (pierwszyDzien == 0)
				pierwszyDzien = i;
			ostatniDzien = i;
		}
	}

	// wynik
	if (pierwszyDzien == 0)
		cout << -1 << " " << -1 << endl;
	else
		cout << pierwszyDzien << " " << ostatniDzien << endl;
}