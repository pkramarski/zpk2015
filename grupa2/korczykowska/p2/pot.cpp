#include <iostream>
using namespace std;

int main() {
   int i = 0;
   int count=0;
   int prev = 0;

//wprowadzamy pomiary i jednoczesnie zliczamy liczbe roznych pomiarow
      while (i != -1){
        cin >> i;

        if (i != prev)
            count = count + 1;
        else
            count = count;
        prev = i;
      }
    cout << count - 1 << endl; //trzeba odjac 1, bo wliczylo mi (-1) do count-a

    }
