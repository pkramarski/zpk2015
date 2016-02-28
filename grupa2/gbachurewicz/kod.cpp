#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;
    int kod;
    getline(cin, a);
    if (a[1] >= 65 && a[1] <= 70){
        kod = 16 * (a[0] - 48) + a[1] - 55;
        cout << kod << endl;
        }

        else {
            kod = 16 * (a[0] - 48) + (a[1] - 48);
            cout << kod <<endl;
        }
    cout << (char)kod;

    return 0;
}
