#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b  ;
    if (a == 0 & b == 0) {cout << 0; }
    if (a == 0 & b != 0) {cout << "OY"; }
    if (a != 0 & b == 0) {cout << "OX"; }
    if (a > 0 & b > 0) {cout << "I"; }
    if (a < 0 & b > 0) {cout << "II"; }
    if (a < 0 & b < 0) {cout << "III"; }
    if (a > 0 & b < 0) {cout << "IV"; }
}
