#include <iostream>
#include <string>
using namespace std;

int main() {
    string slowo;
    cin >> slowo;
    int n = slowo.length();

    for (int i = 0; i < slowo.length(); i++){
        if(slowo[i]!=slowo[n-i-1]){
            cout << "NIE" << endl;
            return 0;
        }
    }
    cout << "TAK" << endl;
}
