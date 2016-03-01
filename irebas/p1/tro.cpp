#include <iostream>
using namespace std;

int main() {
    int a, b, c;
cin >> a >> b >> c;
  
  if (a >= b && a >= c && b + c > a)
  	cout << "TAK" << endl;
  if (b >= a && b >= c && a + c > b)
  	cout << "TAK" << endl;
  if (c >= b && c >= a && b + a > c)
  	cout << "TAK" << endl;
  else
  	cout << "NIE" << endl;
  	
}
