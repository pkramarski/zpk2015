// POD
#include <iostream>

using namespace std;

int main()
{
  int a,b,k,c=0;
  cin>>a>>b>>k;
  
  if (a%k==0) c=1;
  cout<<b/k-a/k+c<<endl;
  
  return 0;
}
