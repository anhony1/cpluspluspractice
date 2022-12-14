namespace doublylinkedlist{

	class Node{
		public: 
			int val;
			Node* next;
			Node* prev;
	};

	class customDoublyLinkedList{
		public:

			Node* head;	

			customDoublyLinkedList(){
				head = NULL;
			}

			void prepend(int value);
			void add(int value);

			void deleteSpecificNodeByValue(int value);

			void printListForwards();
			void printListBackwards();



	};


}