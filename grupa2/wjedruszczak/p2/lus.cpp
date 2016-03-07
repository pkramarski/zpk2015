#include<iostream>
using namespace std;

int main() {
	// deklaracja zmiennych
	unsigned int n;

	// wczytywanie
	cin >> n;

	// usuniecie zer z konca
	while (n % 10 == 0)
		n /= 10;

	// lustro
	if (n / 10 == 0)
		cout << n;
	else
		while (n != 0) {
			cout << n % 10;
			n /= 10;
		}
	cout << endl;
}