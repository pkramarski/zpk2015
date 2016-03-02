#include <iostream>
using namespace std;

int main() {
    int a, b,i;
    i=0;
    cin >> a ;
    b=10;
    while (a / b >=1 ) {

        if (a%b!=0 or i>0) {cout<<a%b; i=i+1;}
        a=a/b;
     }
    cout<<a;
}
