#include<iostream>
using namespace std;

int main() {
	// deklaracja zmiennych
	int pomiar = 0, poprzedniPomiar = 0, roznePomiary = 0;

	// wczytywanie pomiarow
	while (pomiar != -1) {
		// wczytywanie
		cin >> pomiar;

		// zliczanie roznych pomiarow (jezeli ...)
		if (pomiar > poprzedniPomiar)
			roznePomiary++;
		
		// zapisanie poprzedniego pomiaru (do porownania)
		poprzedniPomiar = pomiar;
	}

	// wyswietlenie
	cout << roznePomiary << endl;
}