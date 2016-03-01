#include <iostream>
using namespace std;

int main(){
    int a=0;
    int b =0; 
    int c=0; 
    while (a != -1) {
        cin >> a;
        if (b != a && b>0)
            { c++; }
        b = a;
    }
    cout << c << endl;
    return 0;
}
