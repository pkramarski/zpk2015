#include <iostream>

using namespace std;

int main()
{
    int pomiar_stary, pomiar_nowy = 0, i = 0;
    cin >> pomiar_stary;

        while (pomiar_nowy != -1) {
            cin >> pomiar_nowy;
            if (pomiar_nowy > pomiar_stary) {

                i++;
                pomiar_stary = pomiar_nowy;
                }
            }
    cout << i;
    return 0;
}
