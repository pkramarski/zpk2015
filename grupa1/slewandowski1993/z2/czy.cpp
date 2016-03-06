#include <iostream>
using namespace std;

int main() {
    int i;
    cin >> i;

    while (i>0){
        if (i % 2 == 0) {i = i / 2;}
        else if (i == 1) {cout << "TAK" << endl; i=0;}
        else if (i == 3) {cout << "NIE" << endl; i=0;}
        else {i = 3 * i + 3;}
}
}
