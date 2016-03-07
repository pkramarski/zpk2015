//lic.cpp
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool x;
    x=0;
    for  (int i=2; i<=n*n; i++)
    {
        if (n%i==0)
            x=1;}
        if(x)
            cout << "Zlozona" << endl;
            else
            cout << "Pierwsza" << endl;

}

