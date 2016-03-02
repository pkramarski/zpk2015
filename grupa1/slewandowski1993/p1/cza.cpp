#include <iostream>
using namespace std;

int main()
{
int a, godz, minu, sek;


cin >> a;

godz = a/3600;
minu = (a-godz*3600)/60;
sek= (a-godz*3600-minu*60);
cout << godz << "g" << minu << "m" << sek << "s" <<endl;
return 0;
}
