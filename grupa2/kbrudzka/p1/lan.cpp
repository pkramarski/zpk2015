#include <iostream>
using namespace std;

int main() {
    int numer, rok;
    cin >> numer >> rok;
    
    /*ostatnia cyfra numeru telefonu to:*/
    int w = numer%10;
    
    /* wykonuje kolejne punkty polecenia*/ 
    w=w*2;
    w=w+5;
    w=w*50;
    w=w+1764;
    w=w-rok;

    cout << w;

    }
