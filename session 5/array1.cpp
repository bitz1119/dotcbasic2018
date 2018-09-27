#include <iostream>

using namespace std;



int main() {

// type arrayName [ arraySize ];
	int values[5] = {3, 4, 6, 7, 4};

	// values[0] values[1] values[2] values[3] values[4]

	// for(int i = 0; i < 5; i++) {
	// 	cin >> values[i];
	// }

	int sum = 0;
	for(int i = 0; i < 5; i++) {
		sum += values[i];
	}

	cout << sum/5 << "\n";

}