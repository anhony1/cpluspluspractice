#include <iostream>

using namespace std;

// example of function prototype 
// you are able to declare the function before without having to write the code and then call the function later
int addTwo(int var1, int var2);

int main(){

	int var1 = 10;
	int var2 = 15;

	int result = addTwo(var1, var2);

	cout << "Result: " << result << endl;

}

int addTwo(int var1, int var2){

	return var1 + var2;

}

