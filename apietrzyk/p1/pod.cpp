#include <iostream>

using namespace std;

int main () {
    int a,b,k,i,j;
    j=0;
    cin >> a >> b >>k;
    for (i=a; i<b+1; i++) {
        if(i%k==0)
            j++;
    }
    cout << j;
}
