#include <iostream>

using namespace std;

int main()
{
    int sec, g, m;
    cin >> sec;

    g = sec / (60*60);
    sec = sec - g*(60*60);
    m = sec / 60;
    sec = sec - m*60;

    cout << g <<"g" << m << "m" << sec << "s";
    return 0;
}
