#include <iostream>
using namespace std;

int main()
{
int licznik=0;
int pom1=0;
int pom2=0;

while(pom1!=-1)
{
    cin>>pom1;
    if(pom1>pom2)
        licznik++;
    pom2=pom1;
}
cout<<licznik<<endl;
}
