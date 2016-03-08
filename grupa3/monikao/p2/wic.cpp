#include <iostream>
using namespace std;

void sortuj(int tab[], int n)
{
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n - 1; j++){
            if (tab[j] > tab[j + 1] )
                 swap(tab[j], tab[j + 1] );
            }
        }
    }

int main() {
    int n;
    cin >> n;
    int t[n];
/*input list*/
    for (int i = 0; i < n; i++)
        cin >> t[i];

    sortuj(t, n);
    int k = n-2;

    cout << t[k] <<  endl;

    }



