#include <iostream>

using namespace std;

int main()
{
    int counter = 0;
    int num = 0;
    int last = 0;
    while(num != -1)
    {
        cin >> num;
        if (num > last)
            counter++;
        last = num;
    }
    cout << counter <<endl;
}
