#include <iostream>
using namespace std;

int main() {

    char a, b;
    int n; /*zmienna pomocnicza*/
    cin >> a >> b;

    if((int)b>47 && (int)b<58)
        n = ((int)a - 48) * 16 + ((int)b - 48);
    else if((int)b>64 && (int)b<71)
        n = ((int)a-48)*16 + ((int)b-55);

    cout << n << endl;
    cout << (char)n << endl;

}
