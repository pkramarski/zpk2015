#include <iostream>
#include <cmath>

using namespace std;

int main(){
int x;
int n, i=0;
cin >> n;

if(n==0){
    cout << 1 << endl;
    return 0;
}

while(n%4!=0){
    i++;
    n++;
}
cout << fmod(pow(2,4-i),10) <<endl;
}
