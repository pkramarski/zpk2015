#include <iostream>
using namespace std;

int main() {
	char a[9], b;
	int rok;
    cin >> a >> rok;
	b = a[8];
	int i = b - '0';
    cout << (50*(i*2 + 5)) + 1764 - rok << endl;

/* nie zgadza sie !!! */

}
