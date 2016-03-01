#include <iostream>
using namespace std;

int main()
{
    int a,b,k,licznik;
    cin>>a>>b>>k;
    licznik=0;
    if(k>b){
        cout<<0;
    }
    else
    {
    while(a%k!=0){
        a=a+1;
    }
    for(int i=a; i<=b; i=i+k){
        licznik=licznik+1;
    }
    cout<<licznik;
    }

}
