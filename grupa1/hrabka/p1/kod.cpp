#include <iostream>

using namespace std;

int main()
{
    char first, second, result;
    int resultInt;
    cin >> first >> second;

    resultInt = 16 * (first - '0');
    if (second < 'A')
    {
        resultInt += second - '0';
    }
    else
    {
        resultInt += second - 'A' + 10;
    }
    result = resultInt;
    cout<< resultInt << endl;
    cout<< result << endl;

    return 0;
}
