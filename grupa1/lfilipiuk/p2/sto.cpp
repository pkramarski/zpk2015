#include <iostream>
using namespace std;

int main()
{
int A, B, K, krzesla_A=0, krzesla_B=0;

cin >> A >> B >> K;

if(A>=K && B>=K){
krzesla_A=A/K;
if(B-2*K>=0){
    krzesla_A=krzesla_A*2;
    B=B-2*K;
}
else
    B=B-K;

krzesla_B=B/K;

if(A-2*K>=0)
    krzesla_B=krzesla_B*2;
}
cout<<krzesla_A+krzesla_B<<endl;
}
