#include<iostream>
using namespace std;

int main() {
	// deklaracja zmiennych
	unsigned int a, b, c;

	// wczytywanie
	cin >> a >> b >> c;

	// nierownosci trojkata
	if (a < b + c && b < a + c && c < a + b)
		cout << "TAK" << endl;
	else
		cout << "NIE" << endl;
}
