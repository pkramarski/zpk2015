#include <iostream>

using namespace std;

int main()
{
    int a, b, x;
    cin >> a >> b;

    x=a%10;
    x= 2*x;
    x=x+5;
    x=x*50;
    x=x+1764;
    x=x-b;
    cout << x << endl;

    return 0;
}
