#include <iostream>
#include "customLinkedList.h"

using namespace std;
using namespace linkedList;


void customLinkedList::insertNode(int input){

	Node* newNode = NULL;
	newNode = new Node();
	newNode->val = input;
	newNode->next = NULL;

	if(head == NULL){
		head = newNode;
		return;
	}else{

		// Not sure why I have to set head to a temp to make this work
		// it I just try to use head, it throws SEG Fault

		Node* temp = head;
		while (temp->next != NULL) {
			// Update temp
			temp = temp->next;
		}

		// Insert at the last.
		temp->next = newNode;
	}

}

void customLinkedList::printList(){

	if(head == NULL){

		cout << "Empty List" << endl;
		return; 
	}

	Node* currentNode = head;

	while(currentNode != NULL){
		cout << currentNode->val << endl;
		currentNode = currentNode->next;
	}

}


void customLinkedList::insertFrontNode(int input){

	Node* newNode = NULL;
	newNode = new Node();
	newNode->val = input;
	newNode->next = NULL;

	if(head == NULL){
		
		head = newNode;
		return;

	}else{

		Node* temp = head;

		newNode->next = temp;

		head = newNode;
	}
}

void customLinkedList::insertBackNode(int input){

	Node* newNode = NULL;
	newNode = new Node();
	newNode->val = input;
	newNode->next = NULL;

	if(head == NULL){

		head = newNode;
		return;

	}else{

		Node* temp = head;

		while(temp->next != NULL){

			temp = temp->next;

		}

		temp->next = newNode;

	}

}

void customLinkedList::deleteFrontNode(){

	if(head == NULL){
		cout << "Empty List: Nothing to Delete" << endl;
		return;
	}else{

		// only one node in list 

		if(head->next == NULL){
			head = NULL;
			return;
		}else{

			// multiple items

			Node* temp = head;

			head = temp->next;

		}
	}

}

void customLinkedList::deleteLastNode(){

	// if list is empty

	if(head == NULL){
		cout << "List is Empty" << endl;
		return;
	}else{

		// if list contains 1 item
		if(head->next == NULL){
			head = NULL;
			return;
		}else{

			// remove last node
			Node* currentNode = head;
			// make sure the 2nd to last value is the value's next that we set to null
			while(currentNode != NULL && currentNode->next->next != NULL){
				currentNode = currentNode->next;
			}
			currentNode->next = NULL;
		}

	}


}

bool customLinkedList::contains(int input){

	// if list is empty

	if(head == NULL){
		return false;
	}else{

		if(head->next == NULL){

			if(head->val == input){
				return true;
			}else{
				return false;
			}

		}else{

			Node* currentNode = head;

			while(currentNode->next != NULL){

				if(currentNode->val == input){
					return true;
				}

				currentNode = currentNode->next;



			}

			return false;

		}

	}


}







