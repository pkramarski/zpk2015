#include <iostream>

using namespace std;

int main()
{
    int n, r;
    cin >> n;
    if (n == 0)
        cout << 1;
    else {
        r = n % 4;
        if (r == 1)
            cout << 2;
        if (r == 0)
            cout << 6;
        if (r == 2)
            cout << 4;
        if (r == 3)
            cout << 8;
    }
    return 0;
}
