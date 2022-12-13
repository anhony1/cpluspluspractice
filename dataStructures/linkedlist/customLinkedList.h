namespace linkedList{

	class Node{
		public: 
			int val;
			Node* next;
	};

	class customLinkedList{
		public:
			Node* head;

			customLinkedList(){
				head = NULL;
			}

			void insertNode(int input);
			void printList();
			
			void insertFrontNode(int input);
			void insertBackNode(int input);
			
			void deleteFrontNode();
			void deleteLastNode();
			
			bool contains(int input);
	};
}