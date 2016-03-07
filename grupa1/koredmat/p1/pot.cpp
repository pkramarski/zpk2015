#include <iostream>
using namespace std;

int main () {
    int n;
    int i=0;
    int p=1;

    cin >> n;

    while (p<=n) {
        cout << p << endl;
        p=p*2;
        i++;
    }
}
