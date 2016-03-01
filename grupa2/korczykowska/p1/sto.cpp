#include <iostream>
using namespace std;

int main() {
   int A, B, K;
      cin >> A >> B >> K;
    int krzesla; //liczba krzesel ktore postawi sie przy stole

    if (A < K && B < K) //wogole nie wstawimy krzeseł
        cout << 0 << endl;

    else if (A >= K && B >= K && B < 2 * K && A < 2 * K) /*każdy bok zmiesci max 1 krzeslo - czyli sumarycznie uda sie wstawic tylko
        1 krzeslo*/
        cout << "1" << endl;

    else if ((A >= K && B >= K && B < 2 * K) || (B >= K && A >= K && A < 2 * K))/*tutaj tylko mozemy ustawic krzesla po jednej stronie dluzszego boku*/
        {krzesla = max(A, B)/K;
        cout << krzesla << endl;}
/*gdy oba boki > 2*K
dzieki temu ze krzesla sa kwadratowe nie ma znaczenie, czy zaczniemy je ustawiac
przy dluzszym boku, czy przy krotszym*/
    else
        {krzesla = A/K; /*pierwszy bok*/
        krzesla = krzesla + (B - 2 * K)/K; /*drugi bok*/
        krzesla = 2 * krzesla;
/*trzeba to pomnozyc przez 2, bo mamy po 2 boki takie same*/
        cout << krzesla << endl;}
