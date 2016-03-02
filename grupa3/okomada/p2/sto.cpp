#include <iostream>
using namespace std;

int main() {
	int stolSzerokosc, stolDlugosc, k;
	int liczbaKrzesel;
	cin >> stolSzerokosc >> stolDlugosc >> k;

	if ((stolSzerokosc < k) || (stolDlugosc< k)){
		liczbaKrzesel = 0;
	}
	else{
		if ((stolSzerokosc < 2 * k) && (stolDlugosc < 2 * k)) {
			liczbaKrzesel = 1;
		}
		else{
			if (((stolSzerokosc < 2 * k) || (stolDlugosc < 2 * k))) {
				liczbaKrzesel = stolSzerokosc / k * (stolDlugosc < 2 * k) + stolDlugosc / k * (stolSzerokosc < 2 * k);
				}
				else{
				liczbaKrzesel = 2 * ((stolSzerokosc / k) + (stolDlugosc - 2 * k) / k);
				}
		}
	}

		cout << liczbaKrzesel << endl;


   
}
