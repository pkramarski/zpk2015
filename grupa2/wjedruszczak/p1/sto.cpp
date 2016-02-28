#include<iostream>
using namespace std;

int main() {
	// deklaracja zmiennych
	unsigned int A, B, K;

	// wczytywanie
	cin >> A >> B >> K;

	// liczba krzesel dla pojedynczych wymiarow
	unsigned int krzeslaA = A / K;
	unsigned int krzeslaB = B / K;

	// usuwamy nadmiarowe krzesla
	if (!(krzeslaA == 0 || krzeslaB == 0)) { // if (krzeslaA != 0 && krzeslaB != 0)
		if (krzeslaA == 1)
			cout << krzeslaB << endl;
		else if (krzeslaB == 1)
			cout << krzeslaA << endl;
		else
			cout << 2 * (krzeslaA - 2) + 2 * krzeslaB << endl;
	} else
		cout << 0 << endl;
}
