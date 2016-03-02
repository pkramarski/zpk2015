#include <iostream>
using namespace std;

int main()
{
int licznik=0;
int pomiar1=0;
int pomiar2=0;

while(pomiar1!=-1)
{
    cin>>pomiar1;
    if(pomiar1>pomiar2)
        licznik++;
    pomiar2=pomiar1;
}
cout<<licznik<<endl;
}
