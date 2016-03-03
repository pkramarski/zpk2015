#include<iostream>
using namespace std;

int main() {

	char a, b;

	cin >> a >> b;

	if (b >= 'A' && b <= 'F')
    {
        cout << 16 * (a - 48) + b - 55 << endl;
		cout << (char)(16 * (a - 48) + b - 55 ) << endl;
    }


	else
    {
        cout << 16 * (a - 48) + b - 48 << endl;
		cout << (char)(16 * (a - 48) + b - 48) << endl;
    }


}
