#include <iostream>
using namespace std;

int main() {
    unsigned int a, b, c;
    cin >> a >> b >> c;
    if (a/c == 0 || b/c == 0)
        cout << 0 << endl;
    else if (a/c == 1 || b/c == 1)
        cout << (a/c)*(b/c) << endl;
    else if (2*(a/c - 2 + b/c) <= 0)
        cout << 0 << endl;
    else
        cout << 2*(a/c - 2 + b/c) << endl;

}
