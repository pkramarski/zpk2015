#include <iostream>

using namespace std;

int main ()

{
    int n,i;
    char c,b;
    cin >> n;
    int a[n];
    for (i=0; i < n ; i++)
    {
        cin >> a[i];

    }

    if (n % 2 == 0)
    {
        for (i=0; i < (n/2) ; i++)
    {

            cout << a[2*i];
            cout << " ";

    }
    cout << endl;
     for (i=0; i < (n/2) ; i++)
    {

            cout << a[(2*i)+1];
            cout << " ";

    }
    cout << endl;
    }

    else {


    for (i=0; i < (n/2)+1 ; i++)
    {

            cout << a[2*i];
            cout << " ";

    }
    cout << endl;
     for (i=0; i < (n/2) ; i++)
    {

            cout << a[(2*i)+1];
            cout << " ";

    }
    cout << endl;
    }
}

