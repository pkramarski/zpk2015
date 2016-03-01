#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    int pom = 0;
    cin >> a >> b >> c;

    if (a%c==0)
        pom = (b/c-a/c)+1;
    else
        pom = (b/c-a/c);

cout << pom << endl;
}
