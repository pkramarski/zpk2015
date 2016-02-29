#include <iostream>

using namespace std;

int main()
{
    int a,b,c, obj, pole;

    cin >> a >> b >> c;
    obj=a*b*c;
    pole=2*(a*b+b*c+c*a);
    cout <<obj << endl;
    cout << pole << endl;

    return 0;
}
