#include <iostream>
using namespace std;

int main() {
    int cyfra;
    char znak;
    cin >> cyfra >> znak;
    int kod = 0;
    if (znak >=65 && znak <=70)
        kod = znak - 55 + 16*cyfra;
    else
        kod = znak -48 + 16*cyfra;
    char kod2 = kod;
    cout << kod << endl;
    cout << kod2 << endl;
}
