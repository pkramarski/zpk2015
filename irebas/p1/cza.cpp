#include <iostream>
using namespace std;

int main() {
    unsigned int a, g, m, s;
cin >> a;
  g = a/3600;
  m = (a%3600) / 60;
  s = (a%3600) - m*60;
  cout << g << endl;
  cout << m << endl;
  cout << s << endl;
}
