#include <iostream>
#include <stdio.h>

using namespace std;

int inputArray[8] = {
    3,14,22,29,38,54,69,81 
};

int FindMax(int arr[], int size) {
	int max = arr[0];
	for (int i = 1; i < size; ++i) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;

}

int main() {
	int max = FindMax(inputArray, sizeof(inputArray)/sizeof(inputArray[0]));
	cout << "Max: " << max << endl;
	return 0;
}