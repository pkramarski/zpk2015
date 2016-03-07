#include <iostream>
using namespace std;

int main () {
 int x;
 int n;
 int p=-1;
 int o=-1;

 cin >> n >> x;
 int t[n];
 for (int i=0; i<=n-1; i++) {cin >> t[i];}

 for (int i=0; i<=n-1 && p==-1; i++) {
    if (t[i]==x) {p=i+1;}
    else {p==-1;}
 }
 for (int i=0; i<=n-1 && o==-1; i++) {
    if (t[n-i-1]==x) {o=n-i;}
    else {o==-1;}
 }
 cout << p << " " << o;
}
