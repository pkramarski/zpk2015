#include <iostream>
#include <string>
using namespace std;

int main() {
	unsigned i;
	string word;
	int palindrom = 1;
	cin >> word;
	for (i = 0; i < word.length(); i++){
		palindrom = palindrom*(word[i] == word[word.length() - 1 - i]);
	}
	if (palindrom) {
		cout << "TAK";
	}
	else{
		cout << "NIE";
	}
}
