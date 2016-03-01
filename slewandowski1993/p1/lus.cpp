
#include <iostream>
using namespace std;

int main()
{
int n, wyn;
    wyn=0;


cin >> n;

while(n!=0)
{
    if(n%10!=0)
    wyn=n%10+wyn*10;

    n=(n-n%10)/10;
}

cout << wyn;
}
