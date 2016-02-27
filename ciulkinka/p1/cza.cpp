#include <iostream>
using namespace std;


int main() {
    long int t, godziny, minuty;

    cin >> t;

    godziny = t / 3600; t = t % 3600;
    minuty = t / 60; t = t % 60;

    cout << godziny << "g" << minuty << "m" << t << "s" << endl;


    return 0;
}
