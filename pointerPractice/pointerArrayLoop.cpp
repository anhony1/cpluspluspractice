#include <iostream>

using namespace std;

int main(){


	int arr[5];

	int* p;

	p = &arr[0];

	// take in array values through pointer 

	cout << "Enter the values: " << endl;

	for(int i = 0; i < 5; i++){

		cin >> *(p + i);

	}


	// cin >> *(arr + i); IS EQUAL TO cin >> arr[i];

	// in this example we use a seperate pointer instead of refering back to the original array 


	// print out the loop

	cout << "The values entered are:" << endl;

	for ( int i = 0; i < 5; i++){

		cout << arr[i] << endl;

	}


}