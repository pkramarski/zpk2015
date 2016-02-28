#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    if (x == 0 || y == 0) {     //wiemy ze jedna zerem

        if (x == 0 && y == 0) {
            cout << 0;
        }
        else {
            if (x == 0)         //jest na osi OY
                cout << "OY";
            else
                cout << "OX";
        }
    }
    else {                      //wiemy ze obie nie sa zerem
        if (x > 0 && y > 0)     //obie dodatnie
            cout << "I";
        else {                  //ktoras jest ujemna
            if (x < 0 && y < 0) //obie ujemne
                cout << "III";

            else {
                if (x > 0)      //y ujemny, x dodatni
                    cout << "IV";
                else            //x ujemny, y dodatni
                    cout << "II";
            }
        }
    }
    return 0;
}
