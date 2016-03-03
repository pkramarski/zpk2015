#include <iostream>
#include <string>
using namespace std;

int main() {
	int n,i, pierwsza;
	cin >> n;
	pierwsza = 1;
	i = 2;
	while( i*i <= n && pierwsza) {
		pierwsza = (n%i != 0);
		i++;
	}
	if (pierwsza){
		cout << "pierwsza";
	}
	else{
		cout << "zlozona";
	}
}
