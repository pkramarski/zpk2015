#include <iostream>
using namespace std;
int main()
{
int n,a=0;
cin>>n;
while(n/10!=0)
{
a=a*10;
a=a+(n%10);
n=n/10;
}
a=a*10;
cout<<a+(n%10)<<endl;
}
