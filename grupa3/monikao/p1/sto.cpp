#include <iostream>
using namespace std;
int main(){
    /*
    2012- przestepny
    2014 - nie
    2100, 2200- nie
    2000,2400 przest
    */
    int a, b, k;
    cin >> a >> b >> k;
    if(a < k || b < k)
        cout << 0 << endl;
    else if(a > k && b > k)
        cout << (a / k) * (b / k) - ((a/k - 2  )* (b/k - 2))  <<  endl;
    else
        cout << (a / k) * (b / k) << endl;

}
