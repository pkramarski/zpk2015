#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    int x,y;
    cin >> a >> b >> c;
    x=(a-1)/c;
    y=b/c;
    if (a>b)
    cout << 0;
    else
    cout <<  y-x;
}
