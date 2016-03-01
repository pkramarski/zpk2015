#include <iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    cout << a/3600 << "g" << (a - 3600* (a/3600) - a%60) / 60  << "m" << a%60 << "s" << endl;

}
