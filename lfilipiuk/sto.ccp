#include <iostream>
using namespace std;

int main()
{
int A, B, K, krzesla;

cin >> A >> B >> K;

B = B-2*K;
krzesla=A/K;
krzesla = krzesla+B/K;
krzesla = 2*krzesla;

cout << krzesla << endl;
}
