#include <iostream>
using namespace std;

int main() {
    int n, sil = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
        sil *= i;
    cout << sil << endl;
}
