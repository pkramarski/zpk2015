#include <iostream>

using namespace std;

int main()
{
    int x,g,m,s;

    cin >> x;
    g=x/3600;
    x=x%3600;
    m=x/60;
    s=x%60;
    cout << g << "g" << m << "m" << s <<"s"<< endl;

    return 0;
}
