#include <iostream>
using namespace std;

//algorytm meeusa - znaleziony na stronie internetowej
int main()
{
    int n,w,p;
    w=0;
    p=0;
    n=0;
    while(w!=-1)
        {
            cin >> w;
            if(w!=p)
                n++;
            p=w;
        }
    cout <<n-1;
}
