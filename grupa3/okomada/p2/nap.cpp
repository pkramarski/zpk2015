#include <iostream>
#include <string>
using namespace std;

int main() {
	int dlugosc, i, tura =1;
	string Zuzia = "", Antek="", temp;
	cin >> dlugosc;
	for (i = 0; i < dlugosc; i++, tura = !tura){
		
		if (tura){
			cin >> temp;
			Zuzia += temp;
			Zuzia += ' ';
		}
		else{
			cin >> temp;
			Antek += temp;
			Antek += ' ';
		}
	}

	cout << Zuzia << endl;
	cout << Antek << endl;
	cin >> i;
}
