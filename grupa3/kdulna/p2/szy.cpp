#include <iostream>
using namespace std;

int main() {
    int s, k;
    cin >> s >> k;
    string tekst;
    cin >> tekst;
    if (s == 1)
        for (int i = 0; i < tekst.length(); ++i){
            if (tekst[i] + k > 122 && tekst[i] > 96 && tekst[i] < 123)
                tekst[i] = tekst[i] + k - 122 + 96;
            else if (tekst[i] + k > 90 && tekst[i] < 91 && tekst[i] > 64)
                tekst[i] = tekst[i] + k - 90 + 64;
            else if (tekst[i] > 96 && tekst[i] < 123 || tekst[i] < 91 && tekst[i] > 64)
                tekst[i] = tekst[i] + k;
        }
    if (s == 2)
        for (int i = 0; i < tekst.length(); ++i){
            if (tekst[i] - k < 97 && tekst[i] > 96 && tekst[i] < 123)
                tekst[i] = 123 - 97 + tekst[i] - k;
            else if (tekst[i] - k < 65 && tekst[i] < 91 && tekst[i] > 64)
                tekst[i] = 91 - 65 + tekst[i] - k;
            else if (tekst[i] > 96 && tekst[i] < 123 || tekst[i] < 91 && tekst[i] > 64)
                tekst[i] = tekst[i] - k;
        }
    cout << tekst;

}
