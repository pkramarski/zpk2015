//kol.cpp
#include <iostream>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <cmath>

using namespace std;

int main()
{
double r;
cin >> r;
cout << setprecision(3) << fixed << M_PI*r*r << endl; //pole
cout << setprecision(3) << fixed << 2*M_PI*r << endl; //obwod
}
