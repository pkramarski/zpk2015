#include <iostream>
using namespace std;

int main() {
    int g, m, s, t;
    cin >> t;
    g=t/3600;
    m=t%3600/60;
    s=(t%3600)%60;
    cout << g << "g" << m << "m" << s << "s" << endl;
}
