#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int liczby[n];
    for(int i=0; i<n; i++)
    {
        cin >> liczby[i];
    }
    int min = liczby[0];
    for(int i=1; i<n; i++)
    {
        if(liczby[i] < min)
            min = liczby[i];
    }
    int nwd = 1;
    bool dzieliSie;
    for(int i=2; i<=min; i++)
    {
        dzieliSie = true;

        for(int j=0; j<n; j++)
        {
            if (liczby[j] % i != 0)
            {
                dzieliSie = false;
                break;
            }
        }
        if (dzieliSie)
        {
            nwd = i;
        }
    }

    cout << nwd << endl;

    return 0;
}
