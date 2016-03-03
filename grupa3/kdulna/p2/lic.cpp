#include <iostream>
using namespace std;

int main() {
    int n;
    bool pierwsza = true;
    cin >> n;
    for (int i = 2; i * i <= n; i++)
        pierwsza = pierwsza && n % i != 0;
    if (pierwsza)
        cout << "pierwsza" << endl;
    else
        cout << "zlozona" << endl;
}
