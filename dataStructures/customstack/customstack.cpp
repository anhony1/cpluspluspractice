#include <iostream>
#include "customstack.h"

using namespace std;
using namespace customstack;

void customStack::push(int input){

	// all items in the stack get pushed to the front of the "List" / stack

	//if empty 

	Node* newNode = NULL;

	newNode = new Node();

	newNode->value = input;

	newNode->next = NULL;

	if(top == NULL){

		top = newNode;
		
		return;

	}else{


		Node* temp = top;

		newNode->next = temp;

		top = newNode;

	}

}

void customStack::pop(){


	// remove the top item from stack and replace it with the next item

	// if stack is empty

	if(top == NULL){

		cout << "Empty stack" << endl;

		return;

	}else{


		Node* temp = top;

		top = temp->next;

	}



}


int customStack::peek(){

	if(top == NULL){

		cout << "Empty Stack" << endl;
		return 0;

	}else{

		Node* temp = top;

		cout << "Top Value: " << temp->value << endl;
		return 0;

	}

}

bool customStack::isEmpty(){

	return true;

}