#include <iostream>
using namespace std;

int main()
{
int T[7];
int n, x;
cin >> n;
for (int i=1; i<=6; i++)
	T[i]=0;
for (int i=1; i<=n; i++)
	{
	cin >> x;
	T[x]++;	
	}	
for (int i=1; i<=6; i++)
	{
	cout << T[i] << " ";	
	}
	
return 0;	
}
