#include <iostream>
using namespace std;

bool czy_mniejsza(string a, string b) {
    if (a.length() < b.length())
        return true;
    if (a.length() > b.length())
        return false;
    if (a.length() == b.length()){
        for (int i = 0; i < a.length(); i++){
            if (a[i] < b[i])
                return true;
            if (a[i] > b[i])
                return false;
        }
        return false;
    }

}

int main() {
    string a, b, znak;
    cin >> a >> znak >> b;
    bool mniejsza = czy_mniejsza(a, b);
    bool wieksza = czy_mniejsza(b, a);
    bool rowna = (mniejsza == false && wieksza == false);
    bool nierowna = (rowna == false);
    bool wieksza_rowna = (wieksza == true || rowna == true);
    bool mniejsza_rowna = (mniejsza == true || rowna == true);

    if (znak == "<"){
        if (mniejsza)
            cout << "TAK" << endl;
        else
            cout << "NIE" << endl;
    }
    if (znak == ">"){
        if (wieksza)
            cout << "TAK" << endl;
        else
            cout << "NIE" << endl;
    }
    if (znak == "=="){
        if (rowna)
            cout << "TAK" << endl;
        else
            cout << "NIE" << endl;
    }
    if (znak == "!="){
        if (nierowna)
            cout << "TAK" << endl;
        else
            cout << "NIE" << endl;
    }
    if (znak == ">="){
        if (wieksza_rowna)
            cout << "TAK" << endl;
        else
            cout << "NIE" << endl;
    }
    if (znak == "<="){
        if (mniejsza_rowna)
            cout << "TAK" << endl;
        else
            cout << "NIE" << endl;
    }
}
