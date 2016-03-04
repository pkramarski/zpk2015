#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, wynik = 1;
    cin >> n;

    if (n == 0 || n == 1)
        cout << wynik;
        
    else {
        
        for (int i = 1; i <= n; i++) 
            wynik = wynik * i;  
    
        cout << wynik;
    }
    
    return 0;
}
