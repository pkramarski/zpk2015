#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int t[n];

    for (int i=0;i<=n-1;i++) {cin >> t[i];}
    for (int i=0;i<=n-1;) {
            cout << t[i] << " ";
            i=i+2;
    }
    cout << endl;
    for (int i=1;i<=n-1;) {
            cout << t[i] << " ";
            i=i+2;
    }
}
