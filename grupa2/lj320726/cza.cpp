#include <iostream>
using namespace std;

int main()
{
    long int t;
    cin >>t;
    cout << t/3600 <<"g"<< (t%3600)/60 <<"m" << (t%3600)%60 <<"s";
}
