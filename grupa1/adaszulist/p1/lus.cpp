#include <iostream>
using namespace std;

int main(){
    int n;
    int k;
    cin >> n;
    while (n > 0) {
        k= n % 10;
        n = (n - k )/ 10;
        if (k > 0)
        cout<< k;
    }
    return 0;
}
