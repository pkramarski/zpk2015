#include <iostream>
using namespace std;

int main() {

	int a, b, k;
	int l_a, l_b;
	cin >> a >> b >> k;
	
	l_a = (a - 2 * k) / k + b / k;
	l_b = (b - 2 * k) / k + a / k;
	
	if (l_a > l_b) {
		cout << 2 * l_a << endl;
	}
	else {
		cout << 2 * l_b << endl;
	}		
}
