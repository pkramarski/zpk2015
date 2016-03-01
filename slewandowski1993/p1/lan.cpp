#include <iostream>
using namespace std;

int main()
{
    int num, rok, wyn;
    cin >> num >> rok;
    int ost = num % 10;

    wyn = ost * 2;
    wyn = wyn + 5;
    wyn = wyn * 50;
    wyn = wyn + 1764;
    wyn = wyn-rok;

    cout << wyn << endl;
}
