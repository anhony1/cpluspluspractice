#include <iostream>

using namespace std;

// variables declared outside the scope of a function is considered to be a GLOBAL variable and can be accessed anywhere

int globalVar = 10;

void testFunction(int var1);

int main(){

	cout << "globalVar: " << globalVar << endl;

	testFunction(10);

	cout << "globalVar: " << globalVar << endl; 

	return 0;

}

void testFunction(int var1){

	globalVar += var1;

}

