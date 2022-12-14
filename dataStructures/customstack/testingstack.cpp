#include <iostream>
#include "customstack.h"

using namespace std;
using namespace customstack;


int main(){


	customStack stack;


	stack.push(1);

	stack.peek();

	stack.push(2);

	stack.peek();

	stack.push(3);

	stack.peek();



	return 0;

}