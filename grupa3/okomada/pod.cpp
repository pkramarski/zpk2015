#include <iostream>

using namespace std;

int main() {

	int lower, upper, factor, result;

	cin >> lower >> upper >> factor;

	result = upper / factor - (lower - 1) / factor;

	cout << result << endl;

}
