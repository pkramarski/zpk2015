#include <iostream>
using namespace std;

int main(){
    char a,b;
    int pom;
    cin >> a >> b;

if (b >= 'A' && b <= 'F')
		pom = 16 * (a - 48) + b - 55;
	else
		pom = 16 * (a - 48) + b - 48;

cout << pom << endl;
cout << (char)pom << endl;

}
