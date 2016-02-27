#include <iostream> 
using namespace std; 
 
 
 int main()  
 { 
     int nr_telefonu;
     int rok_urodzenia;
     int x;
     
     cin >> nr_telefonu >> rok_urodzenia;
     
     
    x = ((nr_telefonu%10) * 2 + 5 )* 50 + 1764 - rok_urodzenia;
    
    cout << x;
}
