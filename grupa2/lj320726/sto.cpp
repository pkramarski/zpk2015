#include <iostream>
using namespace std;

int main()
{
    long int a,b,k;
    cin >> a >> b >> k;
    if (a>=k && b>=k)
        {
            if (b/k == 1)
            cout << a/k;
            else if (a/k ==1)
            cout << b/k;
            else 
            cout << 2*(a/k +b/k) -4;
        }
    else 
        cout << 0;
}
