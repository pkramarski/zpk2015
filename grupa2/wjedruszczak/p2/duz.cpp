#include<iostream>
#include<string>
using namespace std;

// deklaracja funkcji sprawdzCzyRowne
bool sprawdzCzyRowne(string liczba1, string liczba2) {
	// obliczenia
	if (liczba1.size() != liczba2.size())
		return false;
	else {
		for (int i = 0; i < liczba1.size(); i++)
			if (liczba1[i] != liczba2[i])
				return false;
		return true;
	}
}

// deklaracja funkcji sprawdzCzyWieksza
bool sprawdzCzyWieksza(string liczba1, string liczba2, string znakPorownania) {
	// deklaracja zmiennej
	int rowne = 0;

	// obliczenia
	if (liczba1.size() > liczba2.size())
		return true;
	else if (liczba1.size() < liczba2.size())
		return false;
	else {
		for (int i = 0; i < liczba1.size(); i++) {
			if (liczba1[i] < liczba2[i])
				return false;
			else if (liczba1[i] > liczba2[i])
				return true;
			else if (liczba1[i] == liczba2[i])
				rowne++;
		}
		if (rowne == liczba1.size() && znakPorownania == ">=")
			return true;
		else if (rowne == liczba1.size() && znakPorownania == "<=")
			return false;
		else if (rowne == liczba1.size() && znakPorownania == ">")
			return false;
		else if (rowne == liczba1.size() && znakPorownania == "<")
			return true;
	}
}

// deklaracja funkcji wyswietlWynik
void wyswietlWynik(bool prawdaFalsz) {
	// wynik obliczen
	if (prawdaFalsz)
		cout << "TAK" << endl;
	else
		cout << "NIE" << endl;
}

int main() {
	// deklaracja zmiennych
	string liczba1, liczba2, znakPorownania;

	// wczytywanie
	cin >> liczba1 >> znakPorownania >> liczba2;

	// wyniki
	if (znakPorownania == "==") {
		wyswietlWynik(sprawdzCzyRowne(liczba1, liczba2));
	}
	else if (znakPorownania == "!=") {
		wyswietlWynik(!sprawdzCzyRowne(liczba1, liczba2));
		// wykorzystano operator logiczny "!"
	}
	else if (znakPorownania == ">") {
		wyswietlWynik(sprawdzCzyWieksza(liczba1, liczba2, znakPorownania));
	}
	else if (znakPorownania == ">=") {
		wyswietlWynik(sprawdzCzyWieksza(liczba1, liczba2, znakPorownania));
	}
	else if (znakPorownania == "<") {
		wyswietlWynik(!sprawdzCzyWieksza(liczba1, liczba2, znakPorownania));
		// wykorzystano operator logiczny "!"
	}
	else if (znakPorownania == "<=") {
		wyswietlWynik(!sprawdzCzyWieksza(liczba1, liczba2, znakPorownania));
		// wykorzystano operator logiczny "!"
	}
}