#include <iostream>
using namespace std;

int main() {
    string slowo;
    cin >> slowo;
    char t[slowo.length()];
    for (int i = 0; i < slowo.length(); i++)
        t[i] = slowo[slowo.length() - i - 1];
    bool palindrom = true;
    for (int i = 0; i < slowo.length(); i++)
        palindrom = palindrom && t[i] == slowo[i];
    if (palindrom)
        cout << "TAK" << endl;
    else
        cout << "NIE" << endl;
}
