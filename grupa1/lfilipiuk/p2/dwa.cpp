#include <iostream>
#include <algorithm>

using namespace std;

int main(){
int n, m, suma, suma_min;

cin >> n >> m;

int t[n][m];

for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
        cin >> t[i][j];

for(int i=0;i<n-1;i++)
    for(int j=i+1;j<n;j++){
        for(int k=0;k<m;k++)
            suma=suma+min(t[i][k],t[j][k]);
        suma_min = min(suma, suma_min);
        }

cout<<suma_min<<endl;
}
