#include <iostream>

using namespace std;


void swapByPoints(int* a, int* b);

int main(){


	int var1 = 1;
	int var2 = 2;


	cout << "var1 : " << var1 << endl;
	cout << "var2 : " << var2 << endl;

	swapByPoints(&var1, &var2);

	cout << "var1 : " << var1 << endl;
	cout << "var2 : " << var2 << endl;

	return 0;

}



void swapByPoints(int* a, int* b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}