#include <iostream>
using namespace std;


int main()
{
    int a,p;
    cin >>a;
    p=0;
    while(a/10>0)
        {
          if(p!=0 or a%10!=0)
         {
          cout<<a%10;
          p=1;
          }
         a/=10;
        }
    cout<<a;
}
