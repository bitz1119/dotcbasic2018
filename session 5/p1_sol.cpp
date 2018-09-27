#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n];
	// n < 100
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int max_val = arr[0], min_val = arr[0];

	for(int i = 0; i < n; i++) {
		if(arr[i] > max_val) {
			max_val = arr[i];
		}
	}

	for(int i = 0; i < n; i++) {
		if(arr[i] < min_val){
			min_val = arr[i];
		}
	}
	int max_diff = max_val - min_val;
	cout << max_diff << "\n";




}