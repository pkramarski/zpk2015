// PIE
#include <iostream>
using namespace std;

int main()
{
int n, x, p=-1, os=-1;
cin>>n>>x;
if (n<1 || n>100000) return 0;
if (x<1 || x>1000000000) return 0;

int k[n];

for(int i=0; i<n; i++) {
    cin>>k[i];
    if(k[i]<0 || k[i]>1000000000) { k[i]=0; break; }
    if(p==-1 && k[i]==x) p=i+1;
    if(k[i]==x) os=i+1;
}

cout<<p<<" "<<os<<endl;

return 0;
}
