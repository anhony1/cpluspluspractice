#include <iostream>
#include "doublylinkedlist.h"

using namespace std;
using namespace doublylinkedlist;

void customDoublyLinkedList::prepend(int value){

	Node* newNode = NULL;
	newNode = new Node();

	newNode->val = value;
	newNode->next = NULL;
	newNode->prev = NULL;


	if(head == NULL){

		head = newNode;
		return;
	}else{

		Node* currentNode = head;

		currentNode->prev = newNode;

		newNode->next = currentNode;

		head = newNode;

	}

}

void customDoublyLinkedList::add(int value){

	Node* newNode = NULL;
	newNode = new Node();
	newNode->val = value;
	newNode->next = NULL;
	newNode->prev = NULL;

	// if list is null

	if(head == NULL){

		head = newNode;
		return;

	}else{

		// if there is just one value 

		 if(head->next == NULL){

		 	head->next = newNode;

		 	newNode->prev = head;

		 	return;

		 }else{


		 	// loop through to end and set values
		 	Node* currentNode = head;

		 	while(currentNode->next != NULL){

		 		currentNode = currentNode->next;

		 	}

		 	currentNode->next = newNode;

		 	newNode->prev = currentNode;

		 }


	}

}

void customDoublyLinkedList::deleteSpecificNodeByValue(int value){


	if(head == NULL){

		cout << "EMPTY LIST" << endl;
		return;

	}else{


		Node* currentNode = head;

		while(currentNode->next != NULL){

			if(currentNode->val == value){

				// delete this node

				currentNode->prev->next = currentNode->next;
				currentNode->next->prev = currentNode->prev;
				return;

			}


			currentNode = currentNode->next;


		}



	}


}

void customDoublyLinkedList::printListForwards(){

	// if list is empty

	if(head == NULL){

		cout << "Empty list bro" << endl;
		return;

	}

	Node* currentNode = head;

	while(currentNode != NULL){
		cout << currentNode->val << endl;
		currentNode = currentNode->next;
	}

}

void customDoublyLinkedList::printListBackwards(){

	if(head == NULL){

		cout << "Empty List bro" << endl;
		return;

	}

	Node* currentNode = head;

	// get to the end of the list
	while(currentNode != NULL){
		
		if(currentNode->next == NULL){
			break;
		}else{
			currentNode = currentNode->next;
		}
	}

	// go back to the beginning
	while(currentNode != NULL){

		cout << currentNode->val << endl;
		currentNode = currentNode->prev;
	}

}
