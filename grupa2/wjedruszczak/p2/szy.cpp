#include<iostream>
#include<string>
using namespace std;

int main() {
	// deklaracja zmiennych
	int czynnosc, i, k;
	string szyfr;

	// wczytywanie
	cin >> czynnosc >> k >> szyfr;

	// szyfrowanie (czynnosc: 1) / odszyfrowanie (czynnosc: 2)
	for (i = 0; i < szyfr.size(); i++) {
		// szyfrowanie
		if (szyfr[i] >= 'A' && szyfr[i] <= 'Z' && czynnosc == 1) {
			if (szyfr[i] + k <= 'Z')
				szyfr[i] += k;
			else
				szyfr[i] += k - 26;
		} 
		else if (szyfr[i] >= 'a' && szyfr[i] <= 'z' && czynnosc == 1) {
			if (szyfr[i] + k <= 'z')
				szyfr[i] += k;
			else
				szyfr[i] += k - 26;
		}
		// odszyfrowanie
		else if (szyfr[i] >= 'A' && szyfr[i] <= 'Z' && czynnosc == 2) {
			if (szyfr[i] - k >= 'A')
				szyfr[i] -= k;
			else
				szyfr[i] += -k + 26;
		}
		else if (szyfr[i] >= 'a' && szyfr[i] <= 'z' && czynnosc == 2) {
			if (szyfr[i] - k >= 'a')
				szyfr[i] -= k;
			else
				szyfr[i] += -k + 26;
		}
	}

	// wynik
	for (i = 0; i < szyfr.size(); i++)
		cout << szyfr[i];
	cout << endl;
}