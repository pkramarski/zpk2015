#define _USE_MATH_DEFINES
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main() {
	// deklaracja zmiennej
	double r;

	// wczytywanie
	cin >> r;

	// wynik
	cout << setprecision(3) << fixed;
	cout << M_PI * pow(r, 2) << endl;
	cout << 2 * M_PI * r << endl;
}