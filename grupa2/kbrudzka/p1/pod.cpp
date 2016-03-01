#include <iostream>
using namespace std;

int main() {
  int a, b, k;
  cin >> a >> b >> k;

  int x = a / k;
  int y = b / k;
  if (!(a % k)) {
    y=y+1;  /*ewentualnie można zapisać x=x-1 */
  }
    cout << y - x;
}
