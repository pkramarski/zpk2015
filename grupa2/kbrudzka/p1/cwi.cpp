#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    
    /* zgodnie z poleceniem powinien być uwzgledniony jeszcze warunek dla wczytywanych liczb
    if ((x >= -1000000) && (x<=1000000) && (y>= -1000000) && (y<=1000000)) { */
    
    if (x>0 && y>0)
        cout << "I" << endl;
    else if (x<0 && y>0)
        cout << "II" << endl;
    else if (x<0 && y<0)
        cout << "III" << endl;
    else if (x>0 && y<0)
        cout << "IV" << endl;
    else if (x==0 && y==0)
        cout << 0 << endl;
    else if (x==0 && y!=0)
        cout << "OY" << endl;
    else
        cout << "OX" << endl;

}
