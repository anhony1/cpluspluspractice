#include <iostream>
#include <cmath>

using namespace std;


double raisePowerOfVar(double var1, double var2);


int main(){

	cout << "Result: " << raisePowerOfVar(2,5) << endl;

	return 0;
}



double raisePowerOfVar(double var1, double var2){

	return pow(var1, var2);

}


