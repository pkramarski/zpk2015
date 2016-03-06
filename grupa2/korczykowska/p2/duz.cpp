#include <iostream>
using namespace std;
#include <string>

string zaleznosc(string a, string b) {
        if (a == b)
            return "rowne";
        else if (a.size() > b.size())
            return "wieksza";
        else if (a.size() < b.size())
            return "mniejsza";
        else {
            for (int i = 0; i < a.size(); i++){
                if (a[i] > b[i])
                    return "wieksza";
                else if (a[i] < b[i])
                    return "mniejsza";

            }
        }
}


int main() {
    string a, znak, b;
    cin >> a >> znak >> b;

    if (znak == "=="){
        if (zaleznosc (a,b) == "rowne")
            cout << "TAK" <<endl;
        else
            cout << "NIE" <<endl;}

    else if (znak == "!="){
        if (zaleznosc (a,b) == "rowne")
            cout << "NIE" <<endl;
        else
            cout << "TAK" <<endl;}

    else if (znak == "<"){
        if (zaleznosc (a,b) == "mniejsza")
            cout << "TAK" <<endl;
        else
            cout << "NIE" <<endl;}

    else if (znak == ">"){
        if (zaleznosc (a,b) == "wieksza")
            cout << "TAK" <<endl;
        else
            cout << "NIE" <<endl;}

    else if (znak == "<="){
        if (zaleznosc (a,b) == "rowne" || zaleznosc (a,b) == "mniejsza")
            cout << "TAK" <<endl;
        else
            cout << "NIE" <<endl;}

    else if (znak == ">="){
        if (zaleznosc (a,b) == "rowne" || zaleznosc (a,b) == "wieksza")
            cout << "TAK" <<endl;
        else
            cout << "NIE" <<endl;}
}
