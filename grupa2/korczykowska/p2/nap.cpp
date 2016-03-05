#include <iostream>
using namespace std;

int main() {
   int n;
      cin >> n;

    if (n%2 == 0){//jesli parzysta liczba kazde z dzieci postawi taka sama ilosc cyfr
        int a[n/2-1];
        int z[n/2-1];
        for (int i = 1; i <= n; i++){
                if (i%2 != 0)
                cin >> z[i/2];
                else
                cin >> a[i/2-1];
        }

        for (int i = 0; i <= n/2-1; i++){
        cout << z[i] << " ";
        }
        cout << endl;
        for (int i = 0; i <= n/2-1; i++){
        cout << a[i] << " ";
        }
    }
    else {//jesli nieparzsyta to Zuzia postawi o 1 cyfre wiecej niz Antek bo to ona zaczyna
        int z[n/2];
        int a[n/2-1];
        for (int i = 1; i <= n; i++){
                if (i%2 != 0)
                cin >> z[i/2];
                else
                cin >> a[i/2-1];
        }

        for (int i = 0; i <= n/2; i++){
        cout << z[i] << " ";
        }
        cout << endl;
        for (int i = 0; i <= n/2-1; i++){
        cout << a[i] << " ";
        }
    }
}

