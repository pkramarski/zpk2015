#include <iostream>
#include <string>
using namespace std;


int main() {
   int hist[6];
   hist[0]=0;
   hist[1]=0;
   hist[2]=0;
   hist[3]=0;
   hist[4]=0;
   hist[5]=0;
   int n;
   cin >> n;

   for (int i=1; i <= n; i++){
    int ocena;
    cin >> ocena;
    hist[ocena-1]++;
   }
    for (int i=0; i <= 5; i++){
    cout << hist[i] << " ";
   }


}
