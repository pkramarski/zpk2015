#include<iostream>
#include<string>
using namespace std;

int main() {
	// deklaracja zmiennych
	bool palindrom = true;
	string slowo;

	// wczytywanie
	cin >> slowo;

	// czy zadane slowo to palindrom?
	for (int i = 0; i < slowo.size(); i++)
		if (slowo[i] != slowo[slowo.size() - 1 - i]) {
			palindrom = false;
			break;
		}

	// wynik
	if (palindrom)
		cout << "TAK" << endl;
	else
		cout << "NIE" << endl;
}