#include <iostream>
using namespace std;

int main () {
 int n;
 int i;
 cin >> n;

 int s=1;
 if (n==0) {cout << 1;}
 else {
     for (i=1;i<=n;i++) {
    s=s*i;
 }
    cout << s;
 }
}
