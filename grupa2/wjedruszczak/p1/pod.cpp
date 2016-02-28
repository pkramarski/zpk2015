#include<iostream>
using namespace std;

int main() {
	// deklaracja zmiennych
	unsigned long long a, b, k, i, liczbaLiczb = 0;
	
	// wczytywanie
	cin >> a >> b >> k;
	
	// czy liczba podzielna przez k?
	for (i = a; i <= b; i++)
		if (i % k == 0)
			liczbaLiczb++;
	// przekroczono limit czasu w 4 przypadkach na 19 (1.04s, 1.01s, 1.02s, 1.01s)
	
	// wyswietlenie
	cout << liczbaLiczb << endl;
}
