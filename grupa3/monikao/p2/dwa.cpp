#include <iostream>


using namespace std;


int main() {
    /**input */
    int n, m;
    cin >> n >> m;
    int prices[n][m];
    for(int i = 0; i < n; i++){
        for( int j = 0; j < m; j++){
            cin >> prices[i][j];
        }
    }

    int total_cost_min = 100000, total_cost_temp = 0;

    /*performance*/
        /*we would like to find the total cost for the first shop and then compare prices with second shop
        and repeat it in a loop*/

    for(int i = 0; i < n - 1; i++)
        for(int k = i; k < n; k++ ){
            for(int j = 0; j < m; j++){
                if(prices[k][j] < prices[i][j])
                    total_cost_temp += prices[k][j];
                else
                    total_cost_temp += prices[i][j];
            }

            if(total_cost_temp < total_cost_min)
                total_cost_min = total_cost_temp;

            total_cost_temp = 0;
            }



    cout << total_cost_min << endl;

}



