#include <iostream>
using namespace std;

int main() {
    int a, kodB;
    char b;
    cin >> a >> b;
    kodB = (int)b;

    if (kodB < 58) {
        kodB = kodB - 48;
        cout << a * 16 + kodB << endl << (char)(a * 16 + kodB);
    } else if (kodB > 64) {
        kodB = 10 + kodB - 65;
        cout << a * 16 + kodB << endl << (char)(a * 16 + kodB);
    }

    return 0;
}
