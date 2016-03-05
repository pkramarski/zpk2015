#include <iostream>

using namespace std;

int main ()

{
    int n,i,a;

    cin >> n >> a;
    int b[n];
    for (i=0; i < n ; i++)
    {
        cin >> b[i];

    }
    int pierwszy = -1;
    int ostatni = -1;
    for (i=0; i < n ; i++)
    {
        if (pierwszy == -1)
        {
            if(a==b[i])
            {
                pierwszy = i+1;
                ostatni = i+1;
            }
        }
        else
        {
             if(a==b[i])
            {
                ostatni = i+1;
            }
        }


    }
    cout << pierwszy << " " << ostatni << endl;


}

