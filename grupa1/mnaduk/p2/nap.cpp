#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int T[n];
	int Z[(n+1)/2];
	int A[n/2];
	for (int i=0; i<n; i++)
		{
			if(i%2==0)
				cin >> Z[i/2];
			else
				cin >> A[i/2];
		}	
	for (int i=0; i<(n+1)/2; i++)
		cout << Z[i] << " ";
		
	cout << endl;
	
	for (int i=0; i<n/2; i++)
		cout << A[i] << " ";
	
return 0;	
}
