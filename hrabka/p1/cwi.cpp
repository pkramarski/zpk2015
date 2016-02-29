#include <iostream>

using namespace std;

int main()
{
    int x,y;

    cin >> x >> y;
    if(0 == x)
    {
        if(0 == y)
        {
            cout <<"0"<< endl;
        }
        else
        {
            cout <<"OY"<< endl;
        }
    }
    else
    {
        if(0 == y)
        {
            cout <<"OX"<< endl;
        }
        else
        {
            if(x>0)
            {
                if(y>0)
                {
                  cout <<"I"<< endl;
                }
                else
                {
                  cout <<"IV"<< endl;
                }
            }
            else
            {
                if(y>0)
                {
                  cout <<"II"<< endl;
                }
                else
                {
                  cout <<"III"<< endl;
                }
            }
        }
    }

    return 0;
}
