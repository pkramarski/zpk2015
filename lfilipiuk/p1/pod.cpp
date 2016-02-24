//problem z czasem wykonywania

#include <iostream>
using namespace std;

int main()
{
int a, b, k;
int licznik=0;

cin >> a >> b >> k;

for(int i=a;i<=b;i++)
    if(i%k==0)
        licznik++;

cout<<licznik<<endl;
}
