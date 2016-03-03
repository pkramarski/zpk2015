#include <iostream>

using namespace std;

int main ()
{

    unsigned int n;
    unsigned int i = 1;
    cin >> n ;

    while ( i <= n)
    {
        i *= 2;
        cout << i/2 << endl;
    }

}
