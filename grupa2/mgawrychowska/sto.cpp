//sto.cpp
#include <iostream>
using namespace std;

int main()
{
int a;
int b;
int k;
cin >> a; // wymiar stolu
cin >> b; // wymiar stolu
cin >> k;  //wymiar krzesła

if(a/k==0 || b/k==0)
    cout << 0 << endl;
else
    if ((a/k-2+b/k)*2<= 0)
    cout << 0 << endl;
else
    cout << ((a/k-2+b/k)*2) << endl;
}
