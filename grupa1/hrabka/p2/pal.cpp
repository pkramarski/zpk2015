#include <iostream>

using namespace std;

int main()
{
    string slowo;
    int polowa;
    cin >> slowo;
    if (slowo.length() % 2 == 0)
        polowa = slowo.length() / 2;
    else
        polowa = slowo.length() / 2 + 1;
    for(int i=0; i < polowa; i++)
    {
        if (slowo[i] != slowo [slowo.length() - 1 - i])
        {
            cout << "NIE" <<endl;
            return 0;
        }
    }
    cout << "TAK" <<endl;
    return 0;
}
