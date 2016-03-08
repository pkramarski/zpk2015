#include <iostream>
using namespace std;

int main() {
    /*ile liczb*/
    int n, cena;
    cin >> n;
    cin >> cena;
    int t[n];

    /*input list of prices*/
    for (int i = 0; i < n; i++)
        cin >> t[i];

    /*inicjalizacja zmiennych wyjscia*/
    int pierwsza = -1, ostatnia = -1;
    for (int j = 0; j < n; j++)
        /*jeœli znaleŸlœmy cenê po raz pierwszy*/
        if(t[j] == cena && pierwsza == -1){
            pierwsza = j + 1;
            ostatnia = j + 1;
        }
        /*kolejne znalezienia*/
        else if(t[j] == cena)
        {
            ostatnia = j + 1;
        }


	cout << pierwsza << " " << ostatnia << endl;


}

