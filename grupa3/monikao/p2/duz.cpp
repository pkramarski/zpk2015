#include <iostream>
using namespace std;

void porownaj(int s1, int s2, string znak, bool &prawda, bool &koniec)
{
    if(s1 > s2){
        koniec = true;
        if(znak == ">" || znak == ">=" || znak == "!=")
            prawda = true;
        else
            prawda = false;

    }

    if(s1 < s2){
        koniec = true;
        if(znak == "<" || znak == "<=" || znak == "!=")
            prawda = true;

        else
            prawda = false;


    }


}

int main() {
    string liczba1;
    string liczba2;
    string znak;
    bool koniec = false;
    bool prawda;
    cin >> liczba1;
    cin >> znak;
    cin >> liczba2;
    int l1 = liczba1.length();
    int l2 = liczba2.length();
    int i = 0;

    if( l1 != l2){
        porownaj(l1, l2, znak, prawda, koniec);
    }
    else{
        while(i < l1 & !koniec){
            int s1 = liczba1[i] - 48;
            int s2 = liczba2[i] - 48;
            porownaj(s1, s2, znak, prawda, koniec);
            i++;
        }

        if(!koniec & (znak == "<=" || znak == ">=" || znak == "=="))
            prawda = true;
    }

    if(prawda)
        cout << "TAK" <<  endl;
    else
        cout << "NIE" <<  endl;

    }




