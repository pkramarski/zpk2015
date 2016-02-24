#include <iostream>
using namespace std;

int main()
{
int liczba,n;
liczba=0;
int i=0;
cin >> n;

while(n!=0)
{
    if(n%10!=0)
        i++;
    liczba=n%10+liczba*10;
    n=(n-n%10)/10;
}

cout << liczba;
}
