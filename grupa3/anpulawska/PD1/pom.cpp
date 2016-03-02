#include <iostream>
using namespace std;

int main() {
    int n=0, liczba_osob=0, pomiary=0;
    while (n != -1){
        cin >> n;
        if (n > pomiary)
            liczba_osob++;
        pomiary = n;
    }
    cout << liczba_osob << endl;
}
