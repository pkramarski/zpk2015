// LUS
#include <iostream>

using namespace std;

int main()
{
  int n;
  bool flg=false;
  cin>>n;
  while (n!=0){
      if(n%10!=0 || flg==true) {
          cout<<n%10;
          flg=true;
      }
      n=(n-n%10)/10;
  }
  
  return 0;
}

