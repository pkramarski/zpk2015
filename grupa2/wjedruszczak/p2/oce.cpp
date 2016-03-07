#include<iostream>
using namespace std;

int main() {
	// deklaracja zmiennych
	int n, i, ocena;
	
	// deklaracja tablicy z liczba ocen (wypelniona zerami)
	int liczbaOcen[6] = { 0 };
	
	// wczytywanie
	cin >> n;
	
	// wczytywanie i zliczanie ocen
	for (i = 0; i < n; i++) {
		// wczytywanie ocen
		cin >> ocena;
		// zliczanie ocen
		liczbaOcen[ocena - 1]++;
	}

	// wynik
	for (i = 0; i < 6; i++)
		cout << liczbaOcen[i] << " ";
	cout << endl;
}