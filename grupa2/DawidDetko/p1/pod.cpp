#include <iostream>

using namespace std;

int main ()
{
    unsigned long long a,b,k,i = 0;;

    cin >> a >> b >> k;

    while (a <= b )
    {
        if (a % k == 0)
        {
            i++;
            a++;
        }

        a++;
    }

cout << i << endl;

}
