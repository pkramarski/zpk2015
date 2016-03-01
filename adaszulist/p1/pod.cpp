#include <iostream>
using namespace std;

int main() {
    int a, b, k, x;
    int wyjscie = 0;
    cin >> a >> b >> k ;
    for(x = a; x >= a && x <= b; x++){
        if(x % k == 0){
            wyjscie++;}
    }
    cout << wyjscie << endl;
    return 0;
}
