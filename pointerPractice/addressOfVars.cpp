#include <iostream>

using namespace std;

int main(){

	// Addresses are the variable's location in memory in the RAM

	// hexadecimal form of the address

	int var1 = 10;
	int var2 = 15;
	int var3 = 20;

	cout << "Address of var1: " << &var1 << endl;

	cout << "Address of var2: " << &var2 << endl;

	cout << "Address of var3: " << &var3 << endl;

	return 0;

}