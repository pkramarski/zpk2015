#include <iostream>
 using namespace std;

 int main() {
    int t;
    cin >> t;
     cout << t/3600 << "g";
     cout << (t-(t/3600)*3600)/60 << "m";
     cout << (t-(t/3600)*3600)%60 << "s" << endl;
 return 0;
 }
