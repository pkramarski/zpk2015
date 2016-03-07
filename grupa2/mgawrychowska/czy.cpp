//czy.cpp
#include <iostream>
using namespace std;

int main()
{
long long int i;
cin >> i;

while (i != 1)
{
 if(i==3)
 {cout << "nie" << endl; break;}
 if (i==2)
 {cout << "tak" << endl;break;}
 if (i%2==0)
 {i=i/2;}
 else
 {i=3*i+3;}
}
}
