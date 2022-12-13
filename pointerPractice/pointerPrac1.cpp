#include <iostream>

using namespace std;


int main(){

	int* pointerVar; 

	int var2 = 10;

	int var1 = 5;

	pointerVar = &var1;

	cout << "Value of var1: " << var1 << endl;

	cout << "Address of var1: " << &var1 << endl;

	cout << "Value of pointerVar: " << pointerVar << endl;

	cout << "Value of the address assigned to pointerVar: " << *pointerVar << endl;

	*pointerVar = 10;

	cout << "Value of var1: " << var1 << endl;

	return 0;

}