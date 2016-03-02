#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int k;
    cin >> k;
    int t[k];

    int suma=0;
    for(int i=0;i<k+1;i++){
        cin>>t[i];
        suma = suma + t[i]*pow(2,i);
    }
    cout<<suma+1<<endl;
}
