#include <iostream>
using namespace std;

int main() 
{
    int a, b, k, licznik;
    cin >> a >> b >> k;
    if (a % k == 0 || b % k == 0)
        licznik = 1 + (b-a)/k;
    else
        if (a + k - a % k <= b)
        {
            a += k - a % k;
            licznik = 1 + (b-a)/k;
        }
        else
            licznik = 0;
    cout << licznik << endl;
    
    return 0;
}
