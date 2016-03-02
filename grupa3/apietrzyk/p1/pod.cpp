#include <iostream>

using namespace std;

int main () {
    int a,b,k,j;
    j=0;
    cin >> a >> b >>k;
    while (a<=b) {
        if(a%k==0)
            j++;
        a++;
    }
    cout << j;
}
