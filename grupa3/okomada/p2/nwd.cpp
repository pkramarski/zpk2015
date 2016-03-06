
#include <iostream>
using namespace std;

int NWD(int a, int b ){
	if (b != 0)
		return NWD(b, a%b);
	return a;
}

int main(){

	int n;
	int *dane;
	cin >> n;
	dane = new int[n];

	for (int i = 0; i < n; i++){
		cin >> dane[i];
	}
		

	int wynik = NWD(dane[0], dane[1]);

	for (int i = 2; i < n; i++){
		wynik = NWD(wynik, dane[i]);
	}
		
	delete dane;
	cout << wynik << endl;
}
