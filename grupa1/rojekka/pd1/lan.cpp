#include <iostream>
#include <string>
using namespace std;

int main()
{
    int numer, rok;
    cin >> numer >> rok;
    int a;
    a = numer%10;
    a = a*2;
    a = a+5;
    a = a*50;
    a = a + 1764;
    a = a - rok;
    cout << a;
}
