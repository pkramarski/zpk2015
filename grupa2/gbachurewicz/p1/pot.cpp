#include <iostream>

using namespace std;

int main()
{
    int n, i = 0, potega = 1;
    cin >> n;
    while (potega <= n) {
        if (i == 0)
            cout << potega << endl;
        potega = 2 * potega;
            if (potega <= n)
            cout << potega << endl;
    i++;
    }
    return 0;
}
