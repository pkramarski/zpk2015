#include <iostream>
 using namespace std;

 int main() {
    int a, b, c;
     cin >> a >> b >> c;
    if ( b+c>a && a+c>b && a+b>c)
    cout << "TAK" << endl;
    else
        cout << "NIE" << endl;
 return 0;
 }
