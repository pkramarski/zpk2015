#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;


    int t[n]; //tablica dlugosci n
    for (int i = 1; i<=n; i++){
            cin >> t[i-1]; //wprowadzam dane do tablicy
    }
//znajduje pierwsza i ostatnia
    int pie = -1;
    int ost = -1;
    for (int i = 1; i<=n; i++){
     if (t[i-1]==x)
        ost = i;
     else
        ost = ost;
     if(t[n-i]==x)
        pie = n-i+1;
     else
        pie=pie;
    }
    cout << pie << " " << ost <<endl;
}
