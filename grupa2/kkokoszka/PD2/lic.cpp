#include<iostream>
using namespace std;

int main(){
    int n,i,a;
    cin>>n;
    if (n==1 || n==2 || n==3){
    cout<<"pierwsza";
    }

    else{
    a=0;
    for(i=2; i<n;i++){
        if (n%i==0){
            a=1;
        }
    }

    }
            if (a==0){
            cout<<"pierwsza";
            }
            if (a==1){
            cout<<"zlozona";
            }

}

