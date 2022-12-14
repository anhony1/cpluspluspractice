#include <iostream>
#include <string>

using namespace std;


class Car {

	public:
		string engineType;
		int cylinders;
		string brand;

	void getBrand(){

		cout << brand << endl;

	}

};


class Truck: public Car{

	public:
		string make;

	void tow(){

		cout << "I tow fast" << endl;

	}

};


int main(){


	Car car1;

	Truck truck1;

	car1.brand = "BMW";

	truck1. brand = "Chevy";

	truck1.tow();

	car1.getBrand();

	truck1.getBrand();

	return 0;

}
















