#include <iostream>

using namespace std;

int main()
{
        int a,i,b;
        cin >> a;
        b=1;
    if (a == 0 ) 
    {
        cout << 1<< endl;
        
    }
    else if (a> 0 && a <= 12)
    {
    
    for(i = 1;i <= a; i++)
    { 
     b *= i;
    }
    cout << b << endl;
    }
    else 
    {
    }
    
}
