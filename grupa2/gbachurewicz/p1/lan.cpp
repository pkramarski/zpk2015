#include <iostream>

using namespace std;

int main()
{
    long int a, b;
    cin >> a >> b;
    a = a % 10; // ostatnia cyfra
    //cout << a << endl;
    a = a * 2;
    //cout << a << endl;
    a = (a + 5); //przeksztalcenia
    //cout << a << endl;
    a = a * 50;
    //cout << a << endl;
    a = a + 1764;
    //cout << a << endl;
    a = a - b; //odejmij sowj rok urodzenia
    cout << a;
    return 0;
}
