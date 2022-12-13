#include <iostream>
#include "customLinkedList.h"

using namespace std;
using namespace linkedList;

int main(){

	customLinkedList list;

	for(int i = 1; i <= 5; i++){

		list.insertNode(i);

	}

	list.printList();

	cout << "-----" << endl;

	list.insertFrontNode(50);

	list.insertBackNode(19);

	list.printList();

	cout << "-----" << endl;

	list.deleteFrontNode();

	list.deleteLastNode();

	list.printList();

	cout << "-----" << endl;

	cout << list.contains(1) << endl;

	return 0;
}