#include <iostream>
using namespace std;

int main() {
    /*ile liczb*/
    int n, k;
    cin >> n;
    string t[n];

    /*zadeklarowanie wyisanych liczb Zuzi i Antka*/
    string z, a;

    for (int i = 0; i < n; i++)
        cin >> t[i];


    for (int j = 0; j < n; j++)
        if(j%2 == 0){
            z += t[j];
            z += " ";
        }
        else{
            a += t[j];
            a += " ";
        }


	cout << z << endl << a << endl;


}

