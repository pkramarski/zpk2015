#include <iostream>
using namespace std;

int main()
{
int a, b, k;

cin >> a >> b >> k;

int x = (a+k-1)/k;
int y = b/k;

cout<<y-x+1;
}
