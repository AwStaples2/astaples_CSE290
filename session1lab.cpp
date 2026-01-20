#include <iostream>
#include <stdio.h>
#include <ctime>

using namespace std;

int FindMax(int arr[], int size) {
	int max = arr[0];
	int count = 1;
	for (int i = 1; i < size; ++i) {
		if (arr[i] > max) {
			max = arr[i];
			count = 1;  // Reset count when we find a new max
		}
		else if (arr[i] == max) {
			count++;  // Increment count if we find a tie
		}
	}
	cout << "Max: " << max << " appears " << count << " time(s)" << endl;
	return max;
}

int main() {
    srand(time(0));  // See rand()
    const int arrSize = 10;
    int arr[arrSize]; // Array of my size of choosing


    for (int i = 0; i < arrSize; ++i) { // Assign values to the array
        int random_num = rand() % 100 + 1;  // Range 1-100
        arr[i] = random_num;
        cout << "Element " << i << ": " << arr[i] << endl;
    }

	int max = FindMax(arr, sizeof(arr)/sizeof(arr[0]));
	return 0;


}