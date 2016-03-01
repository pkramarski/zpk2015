#include <iostream>
#include <algorithm>

using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if(( a + b > c && a + c > b && c + a > b) && (a > 0 && b>0 &&c >0) && (a > abs(b-c) && b >abs(c-a) && c > abs(b-a)))
        cout << "TAK" << endl;
    else
        cout << "NIE" <<  endl;

}
