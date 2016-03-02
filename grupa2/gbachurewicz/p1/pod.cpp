#include <iostream>

using namespace std;

int main()
{
    int a, b, k, ile = 0;
    cin >> a >> b >> k;
    for (int i = a; i<= b;i++)
    {
        if (i % k == 0)
            ile++;
    }
    cout << ile;
    return 0;
}
