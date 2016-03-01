#include <iostream>
using namespace std;

int main() {
int a, b;
cin >> a >> b;
if ((a>=1) && (a <= 1000000000) && (b>=1) && (b<= 1000000000)){
if (a>b)
    cout << a << endl;
else
    cout << b << endl;
}
}
