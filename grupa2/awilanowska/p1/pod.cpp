#include <iostream>
using namespace std;

int main() {
    int a, b, k;
    cin >> a >> b >> k;
    if (k > b)
        cout << 0 << endl;
    else
        cout << (b / k) - ((a - 1) / k) << endl;
}
