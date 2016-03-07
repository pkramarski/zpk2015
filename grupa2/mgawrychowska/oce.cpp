//Oce.cpp
#include <iostream>
using namespace std;

int main()
{
int n;
cin >> n;
int w;
int t[n];
int t1[6];
for(int i=0;i<6;i++)
    t1[i]=0;
for(int i=0;i<n;i++)
    cin >> t[i];
    cin >> t1[t[i]-1]==t1[t[i]-1]+1;
for(int i=0,i<6;i++)
    cout << t1[i] << " " << endl;
}
