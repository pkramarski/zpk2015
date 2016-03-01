#include <iostream>
using namespace std;

int main(){
    int a, b, c;
        cin >> a;
    int pom;

    while(a%10==0){
        a/=10;
    }
    while(a!=0){
        pom = a/10;
        c=pom*10;
        b = a-c;
        cout << b;
        a=pom;
    }
}
