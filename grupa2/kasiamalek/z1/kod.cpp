#include <iostream>
using namespace std;
int main()
{
char b,c;
cin>>b>>c;
if(c>='A'&&c<='F')
{
cout<<(b-48)*16+c-55<<endl;
cout<<(char)((b-48)*16+c-55)<<endl;
}
else
{cout<<(b-48)*16+c-48<<endl;
cout<<(char)((b-48)*16+c-48)<<endl;
}
}
