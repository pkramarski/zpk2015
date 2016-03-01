#include <iostream>
using namespace std;

int main() {
    unsigned long int t;
      cin >> t;
        unsigned int s = t % 60;
        unsigned int m = (t % 3600)/60;
        unsigned int g = t / 3600;
    cout << g << "godz" << m << "min" << s << "sek" << endl;
}
