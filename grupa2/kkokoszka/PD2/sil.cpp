#include<iostream>
using namespace std;

int main(){

    int a=1;
    long n;
    long l;
    cin>>n;
        if (n==0 || n==1){
        n=1;
        cout<<n;
        }
    else{
        for(int i=2;i<=n;i++){
            l=i*a;
            a=l;
        }
        n=l;
    }
    cout<<n;

}

