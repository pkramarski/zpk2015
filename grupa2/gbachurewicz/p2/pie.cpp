#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, k, szukana, pierwsza = 0, ostatnia = 0;
    cin >> n;
    int t[n];
    cin >> szukana;
    
    // wczytanie tablicy
    for (int i = 0; i < n; i++) {
        cin >> k;
        t[i] = k;
    }
    
    for (int i = 0; i < n; i++) {
        if ( t[i] == szukana){
            pierwsza = i + 1;
            i = n; //wychodzimy z petli
        }
    }
    
    if (pierwsza == 0)
        cout << -1 << " " << -1;
        
    else {
            for (int i = n - 1; i >= pierwsza; i--) {
                if ( t[i] == szukana) {
                    ostatnia = i + 1;
                    i = pierwsza; //wychodzimy z petli
                }
            }
            if (ostatnia == 0)
                cout << pierwsza << " " << pierwsza;
            else
                cout << pierwsza << " " << ostatnia;    
    }
    
    return 0;
}
