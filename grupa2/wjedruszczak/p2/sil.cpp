#include<iostream>
using namespace std;

int main() {
	// deklaracja zmiennych
	int n, silnia = 1;

	// wczytywanie
	cin >> n;
	
	// silnia
	for (int i = 1; i <= n; i++)
		silnia *= i;

	// wynik
	cout << silnia << endl;
}