//Nap.cpp
#include<iostream>
using namespace std;

int main()
{
int n;
cin >> n;
int t[n];
int x;

for (int i=0; i<n; i++){
cin >> x;
t[i]=x;
}
for (int i=0; i<n; i+=2) {// Dla Zosi
cout << t[i] << " ";
}
cout << endl;
for  (int i=1; i<n; i+=2) {// Dla Antka
cout << t[i] << " ";
}
}
