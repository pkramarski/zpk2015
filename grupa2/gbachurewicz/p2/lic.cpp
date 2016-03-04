#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    int n, ma = 0;
    cin >> n;
    for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0)
                ma = 1;
        }
        
    if (ma == 1)
        cout << "zlozona";
    else
        cout << "pierwsza";
    
    return 0;
}
