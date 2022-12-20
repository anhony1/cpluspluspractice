#include <iostream>
#include <string>

using namespace std;

// make a parent class called Animal

// make 2 child classes that inherit animal

// child classes use protected constructor

// child class overloads at least1 method ?

class Animal{
	
	// only base / parent class can access the private fields
	string _name;
	string _type;
	string _location;
	int _amount;
	// only child classes can access protected fields
protected:
	Animal(const string & n, const string & t, const string & l): _name(n), _type(t), _location(l){}

	// anyone can access public fields 
public:
	string getName();
	string getType();
	string getLocation();
	int getAmount();

};

string Animal::getName(){
	return _name;
}

string Animal::getType(){
	return _type;
}

string Animal::getLocation(){
	return _location;
}

int Animal::getAmount(){
	return _amount;
}


class Dog: public Animal{
	int _walked;
public:
	Dog(string n):Animal(n, "German Shepard", "Chicago"), _walked(10){};
	int getWalked();
};

class Cat: public Animal{
	bool _fed;
public:
	Cat(): Animal("Cat", "Tabby Cat", "Florida"), _fed(false){};
	bool isFed();
	void feedCat();

};

int Dog::getWalked(){
	return _walked;
}

bool Cat::isFed(){
	return _fed;
}

void Cat::feedCat(){
	if(_fed == false){
		cout << "Feeding the cat!" << endl;
		_fed = true;
	}else{
		cout << "Cat is already fed." << endl;
	}
}

int main(){

	cout << "hello" << endl;

	Dog dog("Tony");

	Cat catto;

	cout << "Name: " << dog.getName() << " Type: " << dog.getType() << " Location: " << dog.getLocation() << endl;

	cout << "Name: " << catto.getName() << " Type: " << catto.getType() << " Location: " << catto.getLocation() << endl;

	cout << "Is fed?: " << catto.isFed() << endl;

	catto.feedCat();
	catto.feedCat();

	return 0;
}





