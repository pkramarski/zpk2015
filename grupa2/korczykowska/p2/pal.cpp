#include <iostream>
#include <string>
using namespace std;


int main() {
    string s;
    cin >> s;
    bool pasuje = true;

    for (int i = 0; i<= s.size()/2; i++){
        if (s[i] != s[s.size() - i-1])
            pasuje = false;
        }

    if (pasuje)
        cout << "TAK" << endl;
    else
        cout << "NIE" <<endl;
}
