#include <iostream>

using namespace std;

int main ()
{

    int a,b;
    cin >> a >> b;

    if (a>0 and b>0)
    {
        cout << "I" << endl;
    }
    else if (a<0 and b>0)
    {
        cout << "II" << endl;
    }
    else if (a<0 and b<0)
    {
        cout << "III" << endl;
    }
    else if (a>0 and b<0)
    {
        cout << "IV" << endl;
    }
    else if (a==0 and b==0)
    {
        cout << 0 << endl;
    }
    else if (a==0 and b!=0)
    {
        cout << "OY" << endl;
    }

    else if (a!=0 and b==0)
    {
        cout << "OX" << endl;
    }

}
