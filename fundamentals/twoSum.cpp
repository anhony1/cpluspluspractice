#include <iostream>
#include <string>

using namespace std;

int main(){


	int var1;
	int var2;
	int result;

	char operand[50];

	cout << "Enter number 1: ";

	cin >> var1;

	cout << "Enter number 2: ";

	cin >> var2;

	cout << "Do you want to add, subtract, multiply, or divide?" << endl;

	cin >> operand; 

	cout << operand << endl;

	if(strcmp(operand, "add") == 0){
		result = var1 + var2;
	}else if(strcmp(operand, "subtract") == 0){
		result = var1 - var2;
	}else if(strcmp(operand, "multiply") == 0){
		result = var1 * var2;
	}else if(strcmp(operand, "divide") == 0){
		result = var1 / var2;
	}else{
		cout << "Incorrect Spelling" << endl;
		return 0;
	}
	

	cout << "The result of " << var1 << " and " << var2 << " is equal to " << result << endl;

	return 0;

}