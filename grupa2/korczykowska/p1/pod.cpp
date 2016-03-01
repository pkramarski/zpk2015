#include <iostream>
using namespace std;

int main() {
   int a, b, k;
      cin >> a >> b >> k;
// a < b < k wtedy nie ma tam liczb podzielnych przez k
    int liczba;
      if (a < k && b < k)
      cout << "0" << endl;
// w ogolnym przypadku, gdy a%k==0 liczba takich liczb rowna jest :
// b/k(czesc calkowita) - a/k(czesc calkowita) + 1
      else if (a % k == 0)

      cout << b/k - a/k + 1 << endl;
// gdy a nie dzieli sie przez k to biore tez dodania tej 1
      else

      cout <<  b/k - a/k << endl;
}
