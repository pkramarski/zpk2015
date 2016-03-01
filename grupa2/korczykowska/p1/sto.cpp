#include <iostream>
using namespace std;

int main() {
   int A, B, K;
      cin >> A >> B >> K;
    int krzesla; //liczba krzesel ktore postawi sie przy stole
//1 bok: krzesla jest in wiec otrzymamy i tak liczbe calkowita
    krzesla = A/K;
//2 bok
    krzesla = krzesla + (B - 2 * K)/K;
//trzeba to pomnozyc przez 2, bo mamy po 2 boki takie same
      cout << 2 * krzesla << endl;

}
