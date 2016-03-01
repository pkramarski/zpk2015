#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
int n, lcyfr, k, d;
k=0;
	
cin >> n;

lcyfr=floor(log10(n)+1);

for (int i=0;i<lcyfr;i++)
{
d=n/pow(10,lcyfr-1-i);	
k+=d*pow(10,i);
n=n-d*pow(10,lcyfr-1-i);	
}
cout << k;

	
return 0;	
}
