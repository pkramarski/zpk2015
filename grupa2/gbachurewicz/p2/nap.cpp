#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, k;
    cin >> n;
    int t[n];
    
    // wczytanie tablicy
    for (int i = 0; i < n; i++) {
        cin >> k;
        t[i] = k;
    }
    
    // wyczytanie tablicy dla nieparzystych elementów
    for (int i = 0; i < n; i += 2) {
        cout << t[i] << " ";
    }
    cout << endl;
    
    // wyczytanie tablicy dla nieparzystych elementów
    for (int i = 1; i < n; i += 2) {
        cout << t[i] << " ";
    }
    
    return 0;
}
