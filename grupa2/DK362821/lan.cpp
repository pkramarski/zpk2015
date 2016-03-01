#include <iostream>
using namespace std;

int main() {
    long int kom, rok, i, j, p, d, z;
    cin >> kom >> rok;
    
      i = (kom % 10) * 2;
      j = i + 5;
      p = j * 50;
      d = p + 1764;
      z = d - rok;
      cout << z << endl;
}
