#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    int g, m, s;

    g = t/3600;
    m = t/60 - 60*g;
    s = t - 60*m -3600*g;

    cout << g << "g" << m << "m" << s << "s" << endl;
}
