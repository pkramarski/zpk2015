#include <iostream>
using namespace std;

int main() {
    long long int a, b, k, liczbaLiczb, dol;
    cin >> a >> b >> k;
    
      liczbaLiczb = 0;
      dol = a;
      
      //tu juz uzyjemy cykla, poniwaz juz mamy do czynienia z masywem danych
      
        while (dol <= b) {
        if (dol % k == 0) {      //jesli dzieli sie calkowicie
            
            liczbaLiczb++;
            dol++;
            }
        else
            dol++; 
        }
    cout << liczbaLiczb << endl;
}
