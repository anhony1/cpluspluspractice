#include <iostream>

using namespace std;

//Write a C++ program to find the first repeating element in an array of integers.

int firstRepeating(int arr[], int length);


int main(){


	int arr[] = {1,2,3,4,5,6,7,7};

	int var = firstRepeating(arr, (sizeof(arr)/sizeof(arr[0])));

	return 0;

}


int firstRepeating(int arr[], int length){

	for(int i = 0; i < length; i++){

		for(int j = i + 1; j < length; j++){

			// cout << "Comparing: " << arr[i] << " AND " << arr[j] << endl;

			if(arr[i] == arr[j]){

				cout << "First Repeating Value: " << arr[i] << endl;
				return 0;
			}

		}


	}

	cout << "No repeating Value" << endl;

	return 0;

}

int efficientFirstRepeating(int arr[], int length){

	


}

