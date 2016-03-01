#include<iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    cout << a/3600 << "g" << (a-a/3600*3600)/60 << "m" << (a-a/3600*3600)-(a-a/3600*3600)/60*60 << "s" << endl ;
}
