#include <iostream>

using namespace std;

int main()
{
    int n, ocena;
    cin >> n;
    int tablica[n];
    for(int i=0;i<n; i++)
    {
        tablica[i]=0;
    }
    for(int i=0;i<n; i++)
    {
        cin >> ocena;
        tablica[ocena-1]=tablica[ocena-1]+1;

    }
    for(int i=0;i<n; i++)
    {
        cout<<tablica[i]<< " ";
    }

    return 0;
}
