// NWD
#include <iostream>
#include <string>
using namespace std;

int main()
{
int n,nm=0;
bool all=false;
cin>>n;
if (n<2 || n>1000) return 0;

int k[n];
for(int i=0; i<n; i++){
    cin>>k[i];
    if(i==0) nm=k[0];
    if(k[i]<nm) nm=k[i];
}

while(all==false && nm>0){
    all=true;
    for(int i=0; i<n; i++)
        if(k[i]%nm!=0) {all=false; break;}
    nm--;
}
nm++;
cout<<nm<<endl;

return 0;
}
