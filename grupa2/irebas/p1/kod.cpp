#include <iostream>
using namespace std;

int main() {
	char a[2], b;
    int c, ascii;
    cin >> a;
	b = a[0];
	int i = b - '0';
	if (a[1] == 'A')
	c = 10;
	else if (a[1] == 'B')
	c = 11;
	else if (a[1] == 'C')
	c = 12;
	else if (a[1] == 'D')
	c = 13;
	else if (a[1] == 'E')
	c = 14;
	else if (a[1] == 'F')
	c = 15;
	ascii = i*16 + c;
	cout << ascii << endl;
	cout << (char)ascii << endl;
}
