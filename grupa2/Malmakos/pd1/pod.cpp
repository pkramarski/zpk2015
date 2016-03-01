
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

unsigned long a,b,k;
cin>> a >> b >> k;

unsigned long i, p, q, w;

p = min(a,b);
q = max(a,b);

w=0;

for( i = p; i<q+1; i++){
        if(i%k==0){
        w++;
}
}
cout << w << endl;
}
