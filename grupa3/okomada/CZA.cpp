#include <iostream>
using namespace std;

int main() {
	int t,g,m,s;
	cin >> t;
	s = t % 60;
	m = (t / 60) % 60;
	g = (t / 3600);
	cout << g << 'g' << m << 'm' << s << 's' << endl;
}
