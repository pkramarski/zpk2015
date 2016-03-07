#include <iostream>
using namespace std;

int main () {
    int k;
    int r;
    cin >> k >> r;
    int w = (2*(k % 10)+5)*50 + 1764 - r;
    cout << w;
}
