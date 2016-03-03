#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, i, o;
	int oceny[6];
	cin >> n;

	for (i = 0; i < 6; i++){
		oceny[i] = 0;
	}
	
	for (i = 0; i < n; i++){
		cin >> o;
		oceny[o-1] ++;
	}
	for (i = 0; i < 6; i++){
		cout << oceny[i];
		cout << ' ';
	}
}
