#include <iostream>
using namespace std;

int main () {
    int n;
    int licz=0;
    cin >> n;

    if (n % 2 == 0) {licz=1;}
    else {
        for (int i=3; i*i<=n && licz==0;) {
            if (n % i == 0) {licz++;}
            i=i+2;
        }
    }
    if (licz==0) {cout << "pierwsza";}
    else {cout << "zlozona";}
}
