#include <iostream>
using namespace std;

int main()
{
int a, godziny, minuty, sekundy;


cin >> a;
godziny = a/3600;
minuty = (a-godziny*3600)/60;
sekundy = (a-godziny*3600-minuty*60);
cout << godziny << "g" << minuty << "m" << sekundy << "s" <<endl;
return 0;
}
