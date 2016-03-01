#include <iostream>
using namespace std;

int main() {
    unsigned int a, b, c; /*liczby >0*/
    cin >> a >> b >> c;

    /*warunek budowy trojkata*/
    if (((a+b)>c) && ((a+c)>b) && ((b+c)>a))
        cout << "TAK" << endl;
    else
        cout << "NIE" << endl;

}
