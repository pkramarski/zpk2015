#include <iostream>
using namespace std;

int main(){
    int nr, rok;
    cin >> nr >> rok;

    int pom=nr/10*10;
    pom = nr - pom;
    pom *= 2;
    pom += 5;
    pom *= 50;
    pom += 1764;
    pom -= rok;

 cout << pom << endl;


}
