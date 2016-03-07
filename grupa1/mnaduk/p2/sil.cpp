#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n==0)
		cout << 1;
	else
	{
		int wynik=1;
		for (int i=1; i<=n; i++)
		{
		wynik=wynik*i;
		}	
		cout << wynik;
	}
	
	
return 0;	
}
