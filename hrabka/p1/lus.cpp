#include <iostream>

using namespace std;

int main()
{
    int a, i, lustro;
    cin>>a;
    lustro=0;
    while(a>0)
    {
    i=a%10;
    lustro=lustro*10+i;
    a=a/10;
    }
    cout << lustro <<endl;
}
