#include <iostream>
using namespace std;

int main()
{
	int n, p, mistrz, wice;
	mistrz=0;
	wice=0;
	cin >> n;
	for (int i=1; i<=n; i++)
	{
		cin >> p;	
		if (p>mistrz)
		{
			wice=mistrz;
			mistrz=p;
		}
		else if (p>wice)
			wice=p;
	
	}
	cout << wice;
return 0;	
}
