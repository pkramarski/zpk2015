#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if (a>0 && b>0 && a< b+c && b<a+c && c<a+b)
        cout << "TAK" << endl;
    else
        cout << "NIE" << endl;

}
