#include <iostream>
using namespace std;

int main()
{
int A, B, K;
cin >> A >> B >> K;

if (K>A || K>B ) {cout << 0;}
else if (A==K && B==K) {cout << 1;}
else if (A==K && B>K) {cout << B/K;}
else if (B==K && A>K) {cout << A/K;}
else {cout << A/K*2 + 2*((B-2*K)/K);}
return 0;
}
