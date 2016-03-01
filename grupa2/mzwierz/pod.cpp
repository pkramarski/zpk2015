#include <iostream>
using namespace std;

int main() {
    int a, b, k;
    cin >> a >> b >> k;
    int n; /*zmienna pomocnicza*/
    if(b>a){
        if(a%k==0) a/=k;
        else a=a/k+1;
        b/=k;
        n = b-a+1;
    }

    if(a==b && b%k==0) n=1;

    cout << n;

}
