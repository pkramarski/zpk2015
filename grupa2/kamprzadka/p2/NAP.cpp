// NAP
#include <iostream>
using namespace std;

int main()
{
int n, k[100000];
cin>>n;
if (n<2 || n>100000) return 0;

for(int i=1; i<=n; i++) {
    cin>>k[i];
    if(k[i]<0 || k[i]>1000) { k[i]=0; break; }
}

for(int i=1; i<=n; i++) if (i%2!=0) cout<<k[i]<<" ";
cout<<endl;
for(int i=1; i<=n; i++) if (i%2==0) cout<<k[i]<<" ";

return 0;
}
