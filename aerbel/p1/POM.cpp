#include <iostream>
using namespace std;

int main() {
    int a, b, i;
    a=0;
    i=0;
    cin >> a ;
     b=a;
    while (a!=-1) {
     cin >> a ;
     if(b<a){i=i++; b=a;} }
     cout<< i;

}
