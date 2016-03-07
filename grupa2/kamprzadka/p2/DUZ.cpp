// DUZ
#include <iostream>
#include<string>
using namespace std;

int main()
{
string a,b,por;
int st=0;
cin>>a>>por>>b;

/*
st=0 - równe
st=1 - a większa
st=2 - b większa
*/

if (a.length()>b.length()) st=1;
else if (a.length()<b.length()) st=2;
else {
    for (int i=0; i<a.length(); i++)
    {
        if(a[i]>b[i]){
            st=1;
            break;
        }
        else if(a[i]<b[i]){
            st=2;
            break;
        }
    }
}

if(por=="==" && st==0) cout<<"TAK\n";
else if(por=="==") cout<<"NIE\n";

if(por=="!=" && st==0) cout<<"NIE\n";
else if(por=="!=") cout<<"TAK\n";

if(por=="<" && st==2) cout<<"TAK\n";
else if(por=="<") cout<<"NIE\n";

if(por==">" && st==1) cout<<"TAK\n";
else if(por==">") cout<<"NIE\n";

if(por=="<=" && st!=1) cout<<"TAK\n";
else if(por=="<=") cout<<"NIE\n";

if(por==">=" && st!=2) cout<<"TAK\n";
else if(por==">=") cout<<"NIE\n";

return 0;
}
