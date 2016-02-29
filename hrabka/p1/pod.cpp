
#include <iostream>

using namespace std;

int main()
{
    int a, b, c, i;
    cin >> a >> b >> c;
    i=0;
    while(a<=b)
    {
        if(a%c==0)
        {
            i=i+1;
        }
        a=a+1;
    }
    cout << i << endl;

    return 0;
}
