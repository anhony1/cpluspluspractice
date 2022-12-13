#include <iostream>

using namespace std;

// ONCE YOU PROVIDE one default value for a argument, all subsequent arguments must contain default values 

void defaultArgsFunc(int a = 5, char c = '$');

int main(){


	// order matters in which the arguments are passed 

	// prints $, 5 times
	cout << " No args" << endl;
	defaultArgsFunc();
	// prints *, 5 times
	cout << " 2nd arg passed" << endl;
	defaultArgsFunc(5, '*');
	// prints $, 3 times
	cout << " first arg passed" << endl;
	defaultArgsFunc(3);

	return 0; 

}


void defaultArgsFunc(int a, char c){

	for(int i = 0; i < a; i++){

		cout << c;

	}

	cout << '\n';

}