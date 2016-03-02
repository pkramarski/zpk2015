#include <iostream>
using namespace std;

int main()
{
long long int i;
cin >> i;

while(i!=1){
    if(i%2==0)
        i=i/2;
    else{
    cout<<"NIE"<<endl;
    return 0;
    }
}
cout<<"TAK"<<endl;
}
