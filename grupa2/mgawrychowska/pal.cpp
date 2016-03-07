//pal.cpp
#include <iostream>
using namespace std;

int main ()
{
string s;
cin >> s;
bool pal;

char t[s.length()];
for (int i=0; i< s.length(); i++)
t[i]=s[s.length()-i-1];
pal=1;
if(pal)
cout << "tak" << endl;
else
cout << "nie" << endl;
}
