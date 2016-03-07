// LIC
#include <iostream>
using namespace std;

int main()
{
int n;
bool p=true;
cin>>n;
if (n<1 || n>1000000) return 0;

for(int i=2; i<n/2; ++i) 
    if(n%i==0){ 
        p=false; 
        break;
    }

if(p==true) cout<<"pierwsza\n";
else cout<<"zlozona\n";

return 0;
}
