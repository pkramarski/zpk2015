#include <iostream>
#include <string>

using namespace std;

int main()
{
    int kubelki[6] = {0, 0, 0, 0, 0, 0};
    int n;
    int j = 1, k;
    cin >> n;
    
    for (int i = 0; i < n; i++){
        j = 1; 
        cin >> k;
            while (j <= 6){
                if (k == j)
                    kubelki[j-1]++;
                j++;    
            }
    }
    
    for (int i = 0; i < 6; i++){
        cout << kubelki[i] << " ";
    }
    
    return 0;
}
