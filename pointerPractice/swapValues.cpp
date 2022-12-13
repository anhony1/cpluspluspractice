#include <iostream>


using namespace std;

//Example 1: Passing by reference without pointers

// this function takes two addresses and swaps the values 

void swapAddresses(int &var1, int &var2);


int main(){

	int var1 = 5;

	int var2 = 10;

	cout << "Before var1: " << var1 << " var2: " << var2 << endl; 

	swapAddresses(var1, var2);

	cout << "After var1: " << var1 << " var2: " << var2 << endl;

}


void swapAddresses(int &var1, int &var2){


	int temp = var1;

	var1 = var2;

	var2 = temp;


}