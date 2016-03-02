#include <iostream>
using namespace std;

int main()
{
    int a, b, k;
    int i = 0;
    cin >> a >> b >> k;

    while (a<=b){

        if ( a%k == 0){
            i++;
        } a = a+1;
    }
    cout << i;

    return 0;
}
