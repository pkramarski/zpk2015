#include<iostream>
using namespace std;

int main() {
	// deklaracja zmiennych
	int x, y;

	// wczytywanie
	cin >> x >> y;

	// ktora cwiartka lub os?
	if (x == 0 || y == 0) {
		if (x != 0)
			cout << "OX" << endl;
		else if (y != 0)
			cout << "OY" << endl;
		else
			cout << 0 << endl;
	}
	else if (x > 0 && y > 0)
		cout << "I" << endl;
	else if (x < 0 && y > 0)
		cout << "II" << endl;
	else if (x < 0 && y < 0)
		cout << "III" << endl;
	else if (x > 0 && y < 0)
		cout << "IV" << endl;
}
