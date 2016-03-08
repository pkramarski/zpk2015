#include <iostream>


using namespace std;

int main() {
    int n;
    cin >> n;
    int ost;

if(n == 0)
    ost = 1;
else{
    if(n%4 == 1)
        ost = 2;
    if(n%4 == 2)
        ost = 4;
    if(n%4 == 3)
        ost = 8;
    if(n%4 == 0)
        ost = 6;
}

    cout << ost << endl;

    }
