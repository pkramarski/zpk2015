#include <iostream>
using namespace std;

int main() {
    int numer, rok, a;
    cin >> numer >> rok;
    if ( numer > 99999999 && numer< 1000000000 && rok > 1919 && rok < 2008)
    {
            a=numer%10;
            a=2*a;
            a=a+5;
            a=a*50;
            a=a+1764;
            a=a-rok;

            cout << a << endl;
    }

    else
            cout << "blad" << endl;

return 0;

}
