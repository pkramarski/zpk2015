#include<iostream>
using namespace std;

int main() {
	// deklaracja zmiennych
	unsigned int a, b;

	// wczytywanie
	cin >> a >> b;

	// wieksza z liczb naturalnych
	if (a > b)
		cout << a << endl;
	else
		cout << b << endl;
}
