#include <iostream>
#include <algorithm>

using namespace std;

int main(){
int n, m, suma, suma_min=1000000;

cin >> n >> m;

int t[n][m];

for(int i=0;i<n;i++)
    for(int k=0;k<m;k++)
        cin >> t[i][k];

for(int i=0;i<n-1;i++)
    for(int j=i;j<n;j++){
        for(int k=0;k<m;k++)
            suma=suma+min(t[i][k],t[j][k]);
        suma_min = min(suma, suma_min);
        suma=0;
        }

cout<<suma_min<<endl;
}
