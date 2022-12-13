#include <iostream>

using namespace std;

void testStaticFunction(int var);

void testLocalFunction(int var);

int main(){

	// the main difference between the two variables is that static variables persist until the end of the program. 
	// Where as without the static declaration, the variable's lifespan is only within that function and gets redeclared at the 
	// beginning of each call. 

	testStaticFunction(5);
	testStaticFunction(10);

	testLocalFunction(5);
	testLocalFunction(10);

	return 0;
}

void testStaticFunction(int var){

	static int testStaticVar = 10;

	testStaticVar += var;

	cout << "Static Variable: " << testStaticVar << endl;

}

void testLocalFunction(int var){

	int testLocalVar = 10;

	testLocalVar += var;

	cout << "Local Variable: " << testLocalVar << endl;

}

