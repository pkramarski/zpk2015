#include <iostream>
using namespace std;

int main() {
    int a, b, k ;
    cin >> a >> b >> k ;
    if(k>a | k>b | k<1 | a<1 | b<1 ) cout << 0;
    else {
    if(a >= 2*k & b >= 2*k) cout << (b / k) * 2 + (a / k - 2) * 2;
    if(a >= 2*k & b < 2*k ) cout << a;
    if(b >= 2*k & a < 2*k ) cout << b;
    if(b <  2*k & a < 2*k ) cout << 1;
    }
}
