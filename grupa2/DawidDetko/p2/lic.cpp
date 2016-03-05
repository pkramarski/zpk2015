#include <iostream>

using namespace std;

int main ()
{
    int i=2 ,n ;


    cin >> n;

    if (n>= 2 && n<= 1000000)
    {


    while (n%i!=0 && i*i <=n)
    {
        i++;
    }
    if (i*i<=n)
        {
            cout << "zlozona" << endl;
        }
    else
        {
            cout << "pierwsza" << endl;
        }

    }





}
