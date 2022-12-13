#include <iostream>

using namespace std;

class Node {
	public:
		int value;
		Node* next;
};

void insertNode(Node* head, int val);

void printList(Node* head);

Node* deleteNodeByValue(Node* head, int val);

int main(){

	Node* head;
	Node* one = NULL;
	Node* two = NULL;
	Node* three = NULL;

	// allocate 3 nodes in the heap
	one = new Node();
	two = new Node();
	three = new Node();

	// Assign value values
	one->value = 1;
	two->value = 2;
	three->value = 3;

	// Connect nodes
	one->next = two;
	two->next = three;
	three->next = NULL;

	// print the linked list value
	head = one;

	insertNode(head, 4);

	printList(head);

	head = deleteNodeByValue(head, 1);

	printList(head);

}


void insertNode(Node* head, int val){

	Node* newNode = NULL; 
	newNode = new Node();

	while(head->next != NULL){
		head = head->next;
	}

	newNode->value = val;
	newNode->next = NULL;

	head->next = newNode;
}

void printList(Node* head){

	while(head != NULL){
		cout << head->value << endl;
		head = head->next;
	}

}


// since I don't have a way to save head through the class, I have to send back the new head node to get rid of the 1 
Node* deleteNodeByValue(Node* head, int val){

	if(val == head->value){

		head = head->next;
		
	}

	return head;
}


// head -> 1 -> 2 -> 3 -> 4 -> NULL








