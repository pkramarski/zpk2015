#include <iostream>
using namespace std;


int maxi(int t[], int n) {
    int m;
    m = 0;
    for (int i = 0; i < n; i++)
        if (t[i] >= m){
            m=t[i];}
    return m;
}

int druga(int t[], int n) {
    int d;
    d = 0;
    for (int i = 0; i < n; i++)
        if (t[i] >= d && t[i] != maxi(t,n)){
            d=t[i];}
    return d;
}

int main() {
    int n;
    cin >> n;
    int t[n];

    //wypelniam tablice liczb
    for (int i=0; i<=n-1; i++){
            cin >> t[i];}

    cout << druga(t,n) << endl;
}
