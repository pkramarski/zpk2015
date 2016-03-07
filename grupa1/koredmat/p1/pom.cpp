#include <iostream>
using namespace std;

int main () {
    int p;
    int pp;
    int licz=0;

    cin >> p;

    while (p>-1) {
        cin >> pp;
        if (pp!=p && pp!=-1) {licz++;}
        p=pp;
    }
    cout << licz;
}
