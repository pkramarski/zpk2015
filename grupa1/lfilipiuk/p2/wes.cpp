#include <iostream>
using namespace std;

int NWD(int a, int b){
    int r=a%b;
    while(r!=0){
        a=b;
        b=r;
        r=a%b;
    }
    return b;
}

int main(){
int n;
cin>>n;
int a[n][2];

for(int i=0;i<n;i++)
    cin>>a[i][0]>>a[i][1];

for(int i=0;i<n;i++)
    cout<<a[i][0]/NWD(a[i][0],a[i][1])<<endl;
}
