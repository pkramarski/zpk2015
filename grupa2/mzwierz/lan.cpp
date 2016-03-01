#include <iostream>
using namespace std;

int main(){

    int n, a;
    cin >> n >> a;
    n %= 10;
    n *= 2;
    n += 5;
    n *= 50;
    n += 1764;
    n -= a;
    cout << n;

}
