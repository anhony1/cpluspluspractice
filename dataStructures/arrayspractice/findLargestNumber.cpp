#include <iostream>

using namespace std;

int findLargestNumber(int arr[], int length);

int main(){

	int arr[] = {1,2,3,4,5,6,7,8,9};

	cout << "arr size " << (sizeof(arr)/sizeof(arr[0])) << endl;

	int max = findLargestNumber(arr, (sizeof(arr)/sizeof(arr[0])));

	cout << "Largest Number is: " << max << endl;

	return 0;

}

int findLargestNumber(int arr[], int length){

	int maxVal = 0;

	for(int i = 0; i < length; i++){

		if(arr[i] >= maxVal){

			maxVal = arr[i];

		}		
	}

	return maxVal;

}
