#include <iostream>
using namespace std;

int main(){
int liczba,n;
liczba=0;
cin >> n;

while(n!=0){
    liczba=n%10+liczba*10;
    n=n/10;
}
cout << liczba;
}
