//sil.cpp
#include<iostream>
using namespace std;

int main()
{
int n;
int w=1; //w-silnia podanej liczby n
cin >> n;
if (n==0 || n==1)
cout << w;
else {
for( int i=1; i<=n;i++)
w=w*i;
cout << w;
}
}
