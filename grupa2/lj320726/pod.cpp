#include <iostream>
using namespace std;

int main()
{
    int a,b,k,d;
    cin >> a>> b>>k;
    b/=k;
    d=a/k;
    if (a%k==0)
        cout << b-d+1;
    else
        cout <<b-d;
}
