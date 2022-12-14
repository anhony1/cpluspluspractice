namespace customstack{

	class Node{

		public:
			int value;
			Node* next;

	};
	

	class customStack{

		public:
			Node* top;

			customStack(){
				top = NULL;
			}

			void push(int input);
			void pop();

			int peek();

			bool isEmpty();
	};


}