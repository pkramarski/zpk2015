//problem z czasem wykonywania

#include <iostream>
using namespace std;

int main()
{
int a, b, k;

cin >> a >> b >> k;

while(a%k!=0)
    a++;

while(b%k!=0)
    b--;

cout<<(b-a)/k+1<<endl;
}
