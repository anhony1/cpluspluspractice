#include <iostream>
#include <cstring>
// my_program.cpp
#include "myclass.h"
#include "quiz1/quizHeader.h"

using namespace std;
using namespace N;
using namespace quiz;


class Library{

	public: 
		bool findBook(string book);
		string checkOutBook(string book);
		int returnBook(string book);
		string libraryName;

};

bool Library::findBook(string book){

	return true;

}

string Library::checkOutBook(string book){

	return book;

}

int Library::returnBook(string book){

	return 1;

}

int main(){

	Library lib;

	cout << lib.checkOutBook("book1") << endl;

	myclass mc;

    mc.do_something();

	Amazon store;

	cout << store.buyItem("item1") << endl;

	return 0;

}