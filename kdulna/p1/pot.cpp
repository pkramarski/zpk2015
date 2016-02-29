#include <iostream>
using namespace std;

int main() {
    int n, p=1;
    cin >> n;
    cout << 1 << endl;
    while (p <= n/2){
        p*=2;
        cout << p << endl;
    }
}
