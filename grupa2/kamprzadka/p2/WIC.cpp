// WIC
#include <iostream>
using namespace std;

int main()
{
int n,nw,dr=0;
cin>>n;
if (n<2 || n>1000) return 0;

int k[n];
for(int i=0; i<n; i++){
    cin>>k[i];
    if(i==0) nw=k[0];
    if(k[i]>nw) nw=k[i];
}

for(int i=0; i<n; i++){
    if(i==0 && k[0]!=nw) dr=k[0];
    if(k[i]>dr && k[i]!=nw) dr=k[i];
}

cout<<dr<<endl;

return 0;
}
