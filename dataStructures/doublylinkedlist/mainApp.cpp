#include <iostream>
#include "doublylinkedlist.h"

using namespace std;
using namespace doublylinkedlist;

int main(){

	customDoublyLinkedList list;

	for(int i = 1; i <= 10; i++){

 		list.prepend(i);

	}

	list.printListForwards();

	list.deleteSpecificNodeByValue(5);

	cout << "------" << endl;

	list.printListBackwards();

	return 0; 



}