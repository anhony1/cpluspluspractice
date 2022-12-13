#include <iostream>

using namespace std;

void greeting(){

	cout << "Hello" << endl;

}

int addTenToNumber(int number){

	return number + 10;

}

//The precision of a floating point value indicates how many digits the value can have after the decimal point. 
//The precision of float is only six or seven decimal digits, 
//while double variables have a precision of about 15 digits. Therefore it is safer to use double for most calculations.

double decimalPractice(double decimalNumber){

	return decimalNumber + 10.52345125;

}

void activateInsaneLoop(){

	for(int i = 0; i < 100; i++){

		cout << i;

	}

}

void multipleParams(int testInt, char testChar, double testDouble){

	cout << testInt << endl;
	cout << testChar << endl;
	cout << testDouble << endl;

}


int main(){

	greeting();

	cout << addTenToNumber(10) << endl;

	cout << decimalPractice(1023.3) << endl;

	// activateInsaneLoop();

	multipleParams(5, 'a', 12.4);

	return 0;

}