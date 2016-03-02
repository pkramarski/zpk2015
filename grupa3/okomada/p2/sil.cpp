#include <iostream>
using namespace std;

int main() {
	int n, i, wynik;
		cin >> n;
		i = 1;
		wynik = 1;
		while (i <= n) {
			wynik = wynik*i;
			i++;
		}
		cout << wynik;
}
