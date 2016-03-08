#include <iostream>
using namespace std;
int main(){

    int n, i = 0;
    cin >> n;
    int ntemp = n + 1;
    while( n != -1 ){
        if(n > 0 && ntemp != n ){
            i++;
        }
        ntemp = n;
        cin >> n;
    }
    cout << i << endl;
}
