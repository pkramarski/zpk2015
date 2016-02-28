#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int j = 0, licznik = 0, i = 0;
    j = s.length();

    while (s[j-1] == '0'){
        licznik++;
        j--;
        }


    i = s.length() - licznik; //az do tego miejsca gdzie zera sie konczą
    while (i > 0)
    {

        cout << s[i-1];
        i--;
    }

    return 0;
}
