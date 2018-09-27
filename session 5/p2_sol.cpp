#include <iostream>
#include <cstring>

using namespace std;

int power(int p) {
	int res = 1;
	for(int i = 0; i < p; i++) {
		res = res * 2;
	}
	return res;
}

int main() {
	char str[30];
	cin >> str;

	int len = strlen(str);

	int num = 0;

	for(int i = len-1; i >= 0; i--) {
		if(str[i] == '1') {
			num += power(len - 1 - i);
		}
	}
	cout << num << "\n";
}