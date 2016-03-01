#include <iostream>
using namespace std;

int main() {
    unsigned int n;
    cin >> n;
    int r;
    while(n>0) {

    r=n%10;
    n=n/10;

    if (r!=0)
    cout << r ;

    }
    }
