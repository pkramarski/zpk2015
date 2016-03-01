#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    int m = t/60;
    int g = t/3600;
    t = t - m*60;
    m = m - g*60;
    cout << g << "g" << m << "m" << t << "s";
}
