#include <iostream>
using namespace std;

/*program wczytuje i zapamiętuje kolejne pomiary; następnie, do momentu zamknięcia (i=-1), zlicza dodatnie pomiary zapisane w ciągu rosnącym */

int main() {
    int i,j;
    int suma=0 ;
    cin >> i;
    j=i;
    while (i!=-1){
      cin >> i;
     if (i>j){
  suma++;
  j=i;
    } }
cout << suma << endl;
}
