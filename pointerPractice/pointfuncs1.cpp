#include <iostream>

using namespace std;


void addressFunc(int &num);

int main(){

	int var1 = 10;

	cout << "Address of " << &var1 << " value: " << var1 << endl; 

	addressFunc(var1);

	return 0;
}

// when you create a function that contains an address variable, you are passing in the ADDRESS of the value that you are
// sending in the params of that function 

void addressFunc(int &num){

	cout << "Address of " << &num << " value: " << *(&num) << endl; 

}


