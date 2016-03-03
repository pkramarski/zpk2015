#include <iostream>
using namespace std;

int main() {
	int p_old, p_new, n;
	p_old = 0;
	p_new = 0;
	n = 0;
	while (p_new != -1) {
		cin >> p_new;

		if (p_new != p_old) {
			n = n + 1;
		}
		p_old = p_new;
	}
	cout << n - 1;
}
