
#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	c=0;
	b=0;
	cin >> a;
	while(b != -1)
	{
	cin >> b;
	if(b>a)
		c++;
	a=b;	
		
	}
	
	cout << c;
	
return 0;	
}
