#include <iostream>
using namespace std;

int main() {
   int n; //n wprowadzona liczba
      cin >> n;

    int liczba = n;
    while (liczba % 10 == 0){
        liczba = liczba/10;}
    while (liczba != 0){

    cout <<  liczba % 10;
    liczba = liczba / 10;

    }
}
