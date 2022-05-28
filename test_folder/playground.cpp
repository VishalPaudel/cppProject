
#include <iostream>

using namespace std;


class Node {

private:

	friend class Tree;
	
	/* Node data and left_node and right_node */
	int data;

	Node * left_node; Node * right_node;

public:

	/* Nothing needs to be set public */

};


class Tree {
	
private:

	Node * root;

	Node * create_node(int);

public:

	Tree() {};

	Tree(int val) {
		this->root = create_node(val);
	}

	static void print_tree(Tree *);

};


Node * Tree::create_node(int val) {

	Node * node_created = new Node;

	node_created->data = val;

	return node_created;

}


static void Tree::print_tree(Tree * tree_to_print) {

	std::cout << print_tree()

}


int main() {
	


	return EXIT_SUCCESS;
}
