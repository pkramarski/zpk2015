// OCE
#include <iostream>
#include <string>
using namespace std;

int main()
{
int n,l=0;
cin>>n;
if (n<1 || n>1000) return 0;

int k[n];
for(int i=0; i<n; i++) cin>>k[i];


for (int i=1; i<=6; i++)
{
    for(int j=0; j<n; j++)
    {
        if(k[j]==i) l++;
    }
    cout<<l<<" ";
    l=0;
}
cout<<endl;

return 0;
}
