#include <iostream>
using namespace std;

int main() {
    int a=0;
    int b;
    int i=0;
    while (a!=-1) {
        b=a;
        cin >> a;
        if (a>b && a>0)
        i++;
    }
cout << i;
}
