#include <iostream>

using namespace std;

int main ()

{
    int rok, nr;
    cin >> nr >> rok;
if (rok >=1920 and rok <=2007 )
{
   cout << ((((((nr%10)*2)+5)*50)+1764)-rok) << endl;
}

}
