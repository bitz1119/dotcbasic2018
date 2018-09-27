#include <iostream>

using namespace std;

int main() {
	char str[100];
	cin >> str;

	int len = 0;
	for(int i = 0; str[i] != '\0'; i += 1) {
		len++;
	}
	for(int i = len - 1; i >= 0; i--) {
		cout << str[i] ;
	}
	cout << "\n";

}