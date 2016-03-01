#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b ;
    int OstC = a%10;
    cout << (OstC * 2 + 5) * 50 + 1764 - b;
}
