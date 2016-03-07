#include <iostream>
using namespace std;

int main()
{
	int n, x, l, pie_flag;
	pie_flag=0;
	cin >> n >> x;
	int pie, ost;
	pie = -1;
	ost = -1;
	for (int i=1; i<=n; i++)
		{
		cin >> l;
		if(l==x)
			{
			if(pie_flag==0)
				{
				pie=i;
				ost=i;
				pie_flag++;
				}
			else
				ost=i;
			}		
		}
	cout << pie << " " << ost;
return 0;	
}
