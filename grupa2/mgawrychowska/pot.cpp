//pot.cpp
#include <iostream>
using namespace std;
int main()
{

    int n;
    int i = 0;
    int p;
    cin >> n;
    while (p < n)
    {
            p = 1 << i;
            if(p<n)
                {
                 cout << p << endl;
                }
        i++ ;
    }
}
