#include <iostream>
using namespace std;

int main(){
    int k;
    int pot = 1;
    int suma=0;
    cin >> k;
    int t[k];

    if (k == 0) {cout<<2<<endl;}
    else{
        for(int i=0;i<k+1;i++){
            cin>>t[i];
            if (i==0) {pot=1;}
            else pot = 2*pot;
            suma = suma + t[i]*pot;
        }
        cout<<suma+1<<endl;
    }
}
