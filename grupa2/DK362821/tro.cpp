#include <iostream>
using namespace std;

int main() {
    long int a, b, c;
    cin >> a >> b >> c;
      if ((a>=b && a>=c && b+c>a) || (c>=a && c>=b && a+b>c) || (b>=a && b>=c && a+c>b))
      cout << "TAK" << endl;
      
      else
      cout << "NIE" << endl; 
}
