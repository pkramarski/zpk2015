#include <iostream>
#include <cstring>

using namespace std;

 int reszta(int a, int b){
     return ((a%b)+b)%b;
 }

int main(){
    int szyfruj, k;
    string s;

    cin >> szyfruj;
    cin >> k;
    cin >> s;

    if(szyfruj==2)
        k=(-1)*k;

    for(int i=0;i<s.size();i++){
        if(s[i]>=65 && s[i]<=90){
            s[i]=reszta((s[i]-65+k),26)+65;
        }
        else if(s[i]>=97 && s[i]<=122){
            s[i]=reszta((s[i]-97+k),26)+97;
        }
    }
cout<<s<<endl;
}
