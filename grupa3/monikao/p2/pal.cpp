#include <iostream>
using namespace std;

int main() {
    string wyraz;
    cin >> wyraz;
    int dl = wyraz.size();
    bool palindrom = true;
    for (int i = 0; i <= dl/2; i++){
        if (wyraz[i] != wyraz[dl - 1 - i])
            palindrom = false;
    }
    if (palindrom)
        cout << "TAK" <<  endl;
    else
        cout << "NIE" <<  endl;



}

