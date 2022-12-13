#include <iostream>

using namespace std;

int main(){

	int* point;

	int arr[10] = {1,2,3,4,5,6,7,8};


	for(int i = 0; i < 5; i++){

		cout << "&arr: " << i << " address is " << &arr[i] << endl;

	}


	point = &arr[0];


	for(int i = 0; i < 5; i++){

		cout << "pointer at: " << i << " address is " << point + i << endl;

	}

	
	
	return 0;

}