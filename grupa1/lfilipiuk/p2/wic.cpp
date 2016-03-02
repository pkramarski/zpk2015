#include <iostream>
using namespace std;

int najwieksza_mniejsza(int t[], int n, int m){

for(int i=0;i<n;i++){
    if(t[i]>=m){
        t[i]=0;
    }
}

int najwieksza = t[0];

for(int i=1;i<n;i++){
    if(najwieksza<t[i])
        najwieksza = t[i];
}
return najwieksza;
}

int main(){

int n;
cin >> n;
int t[n];

for(int i=0;i<n;i++)
    cin >> t[i];

int x = najwieksza_mniejsza(t,n,1000001);

for(int i=0;i<n;i++)
    if(t[i]== x){
        cout << najwieksza_mniejsza(t,n,t[i]) << endl;
        return 0;
    }
}
