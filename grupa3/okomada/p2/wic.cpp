#include <iostream>
#include <string>
using namespace std;

int main() {
	int first, second, total, score, i;
	cin >> total;
	first = 0;
	second = 0;
	for (i = 1; i <= total; i++) {
		cin >> score;
		if (score > first){
			second = first;
			first = score;	
		}
		else{
			if (score > second){
				second = score;
			}
		}
	}
	cout << second;
}
