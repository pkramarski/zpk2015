#include <iostream>
using namespace std;
int main(){

    int a, b, k, o;
    cin >> a >> b >> k;

    o = b/k - a/k ;
    if(a%k == 0)
        o += 1;

    cout << o << endl;

}
