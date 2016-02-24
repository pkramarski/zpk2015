#include <iostream>
using namespace std;

int main()
{
int c, g, m, s;
cin >> c;
g=c/3600;
m=(c-(g*3600))/60;
s=c-(g*3600+m*60);
cout << g << "g" << m << "m" << s << "s";

return 0;
}
