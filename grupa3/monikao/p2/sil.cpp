#include <iostream>
using namespace std;

int main() {
    int n, i=1, silnia = 1;
    cin >> n;

    if(n == 0)
        silnia = 1;
    for (; n > 0; n --)
        silnia = n * silnia;
    cout << silnia << endl;
}

