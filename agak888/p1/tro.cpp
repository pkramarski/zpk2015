#include <iostream>
using namespace std;

/* stwierdzic, czy z trzech odcinków o podanych dlugosciach mozna zbudowaæ trójkat o dodatnim polu*/

int main() {
    int a, b, c;
    
    cin >> a >> b >> c;
    
    if (a + b > c && b + c > a && a + c > b )	/*czy wszystkie konce sie stykaja? - nalezy sprawdzic wszystkie pary, albo wybrac najdluzszy bok i sprawdzic, czy jest mniejszy od sumy dwoch krotszych*/
		
		cout << "TAK" << endl;
        
    else
		cout << "NIE" << endl;

}
