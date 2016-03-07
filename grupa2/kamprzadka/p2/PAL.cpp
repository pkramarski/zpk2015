// PAL
#include <iostream>
#include <string>
using namespace std;

int main()
{
string sl;
bool pal=true;
cin>>sl;

for (int i=0; i<sl.length(); i++)
    if(sl[i]!=sl[sl.length()-i-1]) {
        pal=false; 
        break;
    }
if (pal==true) cout<<"TAK\n";
else cout<<"NIE\n";

return 0;
}
