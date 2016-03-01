#include <iostream>
using namespace std;

/* program, który przelicza czas podany w sekundach na zapis uwzglêdniaj¹cy godziny, minuty oraz sekundy*/

int main() {
    int t, g, m, s;
    
    cin >> t;
    
    g = t / 3600; 				/*podaje jako wynik l. calkowita bez reszty*/
    m = (t - g * 3600) / 60;
    s = t - g * 3600 - m * 60;
    
    cout << g << "g" << m << "m" << s << "s" << endl;
}
