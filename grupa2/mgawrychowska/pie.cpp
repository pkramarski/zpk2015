//pie.cpp
#include <iostream>
using namespace std;

int main()
{
int n,x;
cin >> n >> x;
int t[n];
int pierwsza=-1;
int ostatnia=-1;

for (int i=0;i<n;i++)
{cin >> t[i];}
for (int i=1; i<=n; i++)
{ if (t[n-i]==x)
{pierwsza=n-i+1;}
if (t[n]==x)
{ostatnia=i+1;}
}
cout << pierwsza << " " << ostatnia << endl;
}
