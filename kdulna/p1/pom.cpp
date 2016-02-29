#include <iostream>
using namespace std;

int main() {
    int n, p=0, licz=0;
    cin >> n;
    while (n != -1){
        cin >> n;
        if (n > p)
            licz++;
        p = n;
    }
    cout << licz << endl;
}
