#include <iostream>
using namespace std;

int main() {
    int nr, wiek, w;
    cin >> nr >> wiek;
    int cyfra = nr % 10;
    w = cyfra;
    w = cyfra * 2;
    w += 5;
    w *= 50;
    w += 1764;
    w -= wiek;
    cout << w << endl;
return 0;
}
