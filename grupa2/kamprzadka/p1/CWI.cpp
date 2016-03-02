// CWI
#include <iostream>
#include <string>
using namespace std;
int main()
{
  int x,y;
  cin>>x>>y;
  if(x==0 && y == 0) cout<<"0"<<endl; 
  else if (x==0) cout<<"OY\n";
  else if (y==0) cout<<"OX\n";
  else if (x>0 && y>0) cout<<"I\n";
  else if (x<0 && y>0) cout<<"II\n";
  else if (x<0 && y<0) cout<<"III\n";
  else if (x>0 && y<0) cout<<"IV\n";

  return 0;
}
