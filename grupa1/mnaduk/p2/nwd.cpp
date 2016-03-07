#include <iostream>
using namespace std;

int main()
{
int n;
cin >> n;
int a, b, c;
cin >> a;
for (int i=1; i<n; i++)
{
	cin>>b;
	 while(b != 0)             
    {
        c = a % b;        
        a = b;            
        b = c;            
    }
    
	
	
}	
cout << a;	
return 0;	
}
