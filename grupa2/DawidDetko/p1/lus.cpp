#include <iostream>

using namespace std;

int main ()
{
   unsigned int a, b;

   cin >> a;

   while (a % 10 == 0)
   {
       a /= 10;

   }

   if ( a /10 == 0)
   {
       cout << a;

   }
   else
   {
       while (a != 0)
       {
           cout << a % 10;
           a /=10;

       }
   }
   cout << endl;

}
