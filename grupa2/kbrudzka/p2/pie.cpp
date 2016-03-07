# include<iostream>
using namespace std;

int main(){
int n;
int x;
int p=-1;
int o=-1;

cin >> n >> x;

int t[n];
for(int i=0; i<n; i++)
cin >> t[i];



for(int i=0; i<n; i++)

if(t[i]==x){
        p=i+1;
}

for(int i=n-1; i>=0; i--)
    if(t[i]==x){
        o=i+1;
        }

cout << o << " " << p;


}

