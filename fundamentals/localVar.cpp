#include <iostream>

using namespace std;


int testFunction(int var);

int main(){

	// result is a local variable and can only be access in the main function and no where else. 

	int result = testFunction(5);

	cout << "Result: " << result << endl; 

	return 0;


}

int testFunction(int var){

	// localVar is a LOCAL variable and can only be access in the test FUNCTION

	int localVar = 5;

	return localVar + var;

}