#include <iostream>
using namespace std;
int main(){
    int x, y;
    cin >> x >> y;
    if( x != 0 && y != 0)
    {
        if(x > 0){
            if(y > 0)
                cout << "I" << endl;
            else
                cout << "IV" << endl;
        }
        else
        {
             if(y > 0)
                cout << "II" << endl;
             else
                cout << "III" << endl;
        }

    }
    else if(x == 0)
    {
        if(y!= 0)
            cout << "OY" <<  endl;
        else
            cout << "0" <<  endl;
    }
    else
        cout << "OX" <<  endl;


}
