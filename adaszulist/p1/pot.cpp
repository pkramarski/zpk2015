#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int n, k;
    int x = 0;
    cin >> n;
    while ( pow (2, x) <= n) {
        cout << pow ( 2, x ) << endl;
        x++;
    }
return 0;
}
