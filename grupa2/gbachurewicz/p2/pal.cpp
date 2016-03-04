#include <iostream>
#include <string>


using namespace std;

int main()
{
    string s;
    bool ok = 1;
    cin >> s;
    if (s.length() == 1)
        cout << "TAK";
    else {
        
        for (int i = 0; i <= s.length()/2 - 1; i++) {
            if (s[i] != s[s.length() - i - 1])
                ok = 0;
        }
        if (ok)
            cout << "TAK";
        else
            cout << "NIE";

    }
    return 0;
}
