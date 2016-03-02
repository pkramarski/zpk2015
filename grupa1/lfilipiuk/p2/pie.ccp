#include <iostream>
using namespace std;

int main()
{
    int pierwszy=-1, ostatni=-1;
    int x, n;

    cin >> n >> x;
    int t[n];

    for(int i=0;i<n;i++)
        cin >> t[i];

    for(int i=0;i<n;i++){
        if(t[i]==x){
            pierwszy=i+1;
            break;
        }
    }

    for(int i=n-1;i>=0;i--){
        if(t[i]==x){
            ostatni=i+1;
            break;
        }
    }

    cout << pierwszy << " " << ostatni << endl;
}
