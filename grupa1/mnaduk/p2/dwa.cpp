#include <iostream>
using namespace std;

int main()
{
int n, m, suma, min;
min = 100000;
cin >> n >> m;
int T[n][m];
for (int i=0;i<n; i++)
{
	for (int j=0;j<m;j++)
	{
		cin >> T[i][j];	
	}
}	
for (int i=0;i<n; i++)
{
	for (int j=0;j<n;j++)
	{
		suma=0;
		for (int k=0;k<m;k++)
		{
			if(T[i][k]<=T[j][k])
				suma=suma+T[i][k];
			else
				suma=suma+T[j][k];
		}
		if(suma<min)
			min=suma;	
	}
}
cout << min;	
return 0;	
}
