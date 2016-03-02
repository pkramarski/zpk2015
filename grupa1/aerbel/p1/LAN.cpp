#include <iostream>
using namespace std;

int main() {
    int a, b, x ;
    cin >> a >> b ;
    x = ((a % 10 ) * 2 + 5) * 50  + 1764 - b;
    cout << x;
}
