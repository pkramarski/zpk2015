#include <iostream> 
using namespace std; 
 
 
 int main()  
 { 
     int a;
     int b;
     int c;
     
     cin >> a >> b >> c;
     if ( a + c > b && a + b > c && b + c > a )
        cout << "TAK" << endl;
     else 
        cout << "NIE" << endl;
        
 }
