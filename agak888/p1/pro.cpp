#include <iostream>
using namespace std;

/* Zadaniem Twojego programu bêdzie obliczenie objetosci i pola powierzchni prostopadloscianu o zadanych
wymiarach.*/

int main() {
    int a, b, c; 				/*trzy wymiary prostopadloscianu, mozna zadeklarowac zmienne "na raz" - w jednej linii */
    cin >> a >> b >> c;
    
    cout << a * b * c << endl 	/*obliczenie objetosci, (ta sama kom., nowa linie, nie trzeba tu srednika)*/
    
        << 2 * a * b + 2 * a * c + 2 * b * c << endl; 	/*obliczenie powierzchni*/
}
