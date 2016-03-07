#include <iostream>
using namespace std;

int main()
{
char T[1000000];
cin >> T;
int i=0;
while (i<1000000)
{
if(T[i]=='\0')
	break;
i++;	
}
i--;	
int j=0;
while (j<i)
{
	if(T[j]!=T[i])
		{
		cout << "NIE";
		return 0;	
		}
	else
		{
		j++;
		i--;	
		}
}	
cout << "TAK";
	
}
