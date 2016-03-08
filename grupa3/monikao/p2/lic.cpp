#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool pierwsza = true;
    bool skoncz = false;
    int k = 1;
    for (int i = 2; i < n && !skoncz; i++){
        k = i;
        if(n % k == 0 ){
            pierwsza = false;
            skoncz = true;
            }
        if(k * k > n){
            skoncz= true;
            }
    }
    if (pierwsza)
        cout << "pierwsza" <<  endl;
    else
        cout << "zlozona" <<  endl;




}

