
#include <iostream>

using namespace std;


class Node {
	
	private:

		friend class Tree;
		Node *left;
		Node *right;

		int data;

		Node () {};
	
	public:
		// Nothing Public
};

class Tree {

	public:
		Node *root;
		Tree(int head_value) {
			
			root->data = head_value;
			
		}
};

int main() {
	
	Tree Plaksha(7);

	return EXIT_SUCCESS;
}
