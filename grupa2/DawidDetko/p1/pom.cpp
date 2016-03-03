#include <iostream>

using namespace std;

int main ()
{
    int i,a, n=0;


    while ( n != -1)
    {
        cin >> a;

        if (a == n )
        {
            n = a;
        }
        else if (a != n)
        {
            n = a;
            i++;

        }
    }
    cout << i-1 << endl;

}
