#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, odl, max_odl = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    if (a[0] != a[n - 1])
        cout << n - 1 << endl;
    else{
        for (int i = 1; i < n - 1; ++i){
            if (a[i]!= a[0]){
                odl = max(i, n - i - 1);
                max_odl = max(odl, max_odl);
            }
        }
        if (max_odl != 0)
            cout << max_odl << endl;
        if (max_odl == 0)
        cout << "BRAK" << endl;
    }
}

