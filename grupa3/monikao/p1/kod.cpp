#include <iostream>
using namespace std;
int main(){

    char z1, z2;

    cin >> z1 >> z2;

    int w = 16 * (z1-48) + z2;

    if(z2 >= 'A' && z2<= 'F')
        w -= 55;
    else
        w -= 48 ;

    char lit;
    lit = char(w);
    cout << w << endl;
    cout << lit << endl;

}
