//na MAIN2 przekroczono limit czasu w kilku przypadkach

#include <iostream>
using namespace std;

int main()
{
int i;

cin >> i;

while(i!=1)
{
    if(i%2==0)
        i=i/2;
    else
        i=3*i+3;
    if(i==3 || i==6 || i==12) //te wartości zapętlały w pętlę w nieskończoność
    
    {
        cout<<"NIE"<<endl;
        return 0;
    }
}
    cout<<"TAK"<<endl;
}
