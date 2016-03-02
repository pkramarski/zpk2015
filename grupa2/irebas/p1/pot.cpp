#include <iostream>
using namespace std;

int main() {
	int i, a;
	a = 1;
	cin >> i;
	cout << 1 << endl;
	do {
	a = a*2;
	if (a > i)
	break;
	cout << a << endl;
	}
	while (a < i);
	
}
