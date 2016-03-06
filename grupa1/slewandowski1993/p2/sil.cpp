#include <iostream>
using namespace std;

int main(){
    int n;
    int wynik=1;
    int i=1;
    cin >> n;

    while(i<=n){
        wynik=wynik*i;
        i++;
    }
    cout << wynik << endl;
}
