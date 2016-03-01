//Pom.cpp
#include <iostream>
using namespace std;

int main() {
    int p1, p2; //pomiary
    int w = 0; // wynika zliczania dodatnich różnych pomiarów
    cin >> p1;
    p2=p1;
    while (p1 != -1) {
        cin >> p1;
        if(p1 > p2)
        {
            w++;
            p2=p1;
        }
    }
    cout << w << endl;
}

