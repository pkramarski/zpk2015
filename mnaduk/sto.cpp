#include <iostream>
using namespace std;

int main()
{
int A, B, K, poz, pio;
cin >> A >> B >> K;
poz=A/K;
pio=B/K;
if (pio==0 || poz==0)
    cout << 0;
else if (poz==1)
    cout << pio;
else if (pio==1)
    cout << poz;
else
    cout << pio*2 + 2*(poz-2);


return 0;
}
