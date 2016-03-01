#include <iostream>
using namespace std;

/* program, który dla danego punktu na p³aszczyŸnie sprawdzi, w której æwiartce uk³adu wspó³rzêdnych
siê on znajduje. Moze jednak byc tak, ¿e punkt nie znajduje siê w ¿adnej æwiartce – le¿y na jednej z osi lub
w œrodku uk³adu wspó³rzêdnych. Wówczas program powinien to stwierdziæ. */


int main() {
    int x, y; /* wspolrzedne punktu*/
    cin >> x >> y;
    
    if (x>0 && y>0)  			/* && - operator "and" */
    cout << "I" << endl;
        
	    else if (x<0 && y>0)
		cout << "II" << endl;
	        
	 		else if (x<0 && y<0)
	    	cout << "III" << endl;
	        
			    else if (x>0 && y<0)
			    cout << "IV" << endl;
				        
				    else if (x==0 && y==0) 		/*gdy w srodku ukladu*/
				    cout << "0" << endl;
				        
					    else if (x==0 && y!=0)		/*gdy na osi y */
					    cout << "OY" << endl;
					        
						    else
					        cout << "OX" << endl;
}
