#include<iostream>
using namespace std;

int main() {
	// deklaracja zmiennej
	unsigned long long i;

	// wczytywanie
	cin >> i;

	while (i != 1) {
		// warunki dla ktorych program zatrzyma sie lub nie
		if (i == 2) {
			cout << "TAK" << endl;
			return 0;
		}
		else if (i == 3) {
			cout << "NIE" << endl;
			return 0;
		}
		
		// obliczenia
		if (i % 2 == 0)
			i = i / 2;
		else
			i = 3 * i + 3;
	}
}
