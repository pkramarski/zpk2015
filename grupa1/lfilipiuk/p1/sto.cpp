#include <iostream>
using namespace std;

int main()
{
int A, B, K, krzesla_A=0, krzesla_B=0;

cin >> A >> B >> K;

//pierwsza sciana pionowa
if(A>=K && B>=K)
{
krzesla_A=A/K;
if(B-2*K>=0)
{
    krzesla_A=krzesla_A*2;
    B=B-2*K;
}
else
    B=B-K;

/*
cout <<"na scianach A zmiesci sie: " << krzesla_A << endl;
cout <<"sciana B ma teraz: " << B << endl;
*/
krzesla_B=B/K;

if(A-2*K>=0)
    krzesla_B=krzesla_B*2;
/*
cout <<"na scianach B zmiesci sie: " << krzesla_B << endl;
*/
}

cout<<krzesla_A+krzesla_B<<endl;
}
