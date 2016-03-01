#include <iostream>
using namespace std;

int main ()
{
	int a, b, k, l, m;
	cin >> a >> b >> k;
	l=0;
	m=k;
	while (m <=b)
	{
	if(m >= a)
		l++;
		m=m+k;	
		
	}
	cout << l;
return 0;	
}
