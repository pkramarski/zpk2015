#include <iostream>
using namespace std;

int main ()
{
	int druga;
	char l[2];
	cin >> l;
	if(int(l[1])>64)
		druga=int(l[1])-55;
	else
		druga = int(l[1])- 48;
	cout << 16*(int(l[0])-48)+druga<<endl<<char(16*(int(l[0])-48)+druga);
return 0;
}
