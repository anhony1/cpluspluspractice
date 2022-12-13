#include <iostream>

using namespace std;

void findThreeLargest(int arr[], int length);

void efficientFindThreeLargest(int arr[], int length);

int main(){

	int arr[] = {9,3,4,5,32,351};

	// findThreeLargest(arr, (sizeof(arr)/sizeof(arr[0])));

	efficientFindThreeLargest(arr, (sizeof(arr)/sizeof(arr[0])));

	return 0;


}

void findThreeLargest(int arr[], int length){

	int largeNums[3];

	int firstMax = 0;
	int secondMax = 0;
	int thirdMax = 0;

	for(int i = 0; i < length; i++){

		if(firstMax < arr[i]){
			firstMax = arr[i];
		}

	}

	for(int i = 0; i < length; i++){

		if(secondMax < arr[i] && secondMax < firstMax && arr[i] != firstMax){
			secondMax = arr[i];
		}

	}


	for(int i = 0; i < length; i++){

		if(thirdMax < arr[i] && thirdMax < secondMax && arr[i] != firstMax && arr[i] != secondMax){
			thirdMax = arr[i];
		}

	}

	cout << "First: " << firstMax << " Second: " << secondMax << " Third: " << thirdMax << endl;
}

void efficientFindThreeLargest(int arr[], int length){

	int first, second, third;

	first = second = third = 0;

	for(int i = 0; i < length; i++){

		if(first < arr[i]){
			third = second;
			second = first;
			first = arr[i];
		}else if(second < arr[i]){
			third = second;
			second = arr[i];
		}else if(third < arr[i]){
			third = arr[i];
		}

	}

	cout << "First: " << first << " Second: " << second << " Third: " << third << endl;

}

