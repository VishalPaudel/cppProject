
/*
-*- coding: utf-8 -*-

Future: (important) . (urgent) .

Author: Vishal Paudel (2003)
Motivation:
Scope:

Last Edit:

Note:
*/



#include <iostream>  // input output library

using namespace std;  // namespace directive


class Node {

private:

    // A bunch of things need to be made private
    friend class Tree;  // Tree needs to access the elements of Node
    // I did not choose inheritance because it did not make practical sense
    // Node and Tree are different entities bound together.

    int val;  // The value stored by the Node is an int by design
    Node * left, * right;  // 8-byte memory address for left and right

    // Node() {};  // an empty constructor as a good practice

    // Making the constructor also private
    Node(int inserted_val=0) {

        this->val = inserted_val;  // Feeding the value in the node
        this->left = nullptr;
        this->right = nullptr;

    };


public:

    // Nothing needs to be public


};


class Tree {

private:

    // Again Tree has the 'root' as a private aspect
    Node * root = new Node;


public:

    // The constructor and the methods needs to be public

    // Creating an empty constructor as a good practice
    // class Tree() { std::cout << "--DECLR: New Tree Created!" << std::endl; };

    Tree(int inserted_val) {

        root->val = inserted_val;
        std::cout << "--DECLR: New Tree Created!" << std::endl;

    }

    void insert_node(int);


    // declaring a procedural / static method to print a tree

    static void print_tree(Tree tree_to_print) {

        // Doing this in a recursive manner

        // printing the left side
        std::cout << ((tree_to_print.root)->left)-> val << std::endl;

        // printing the node value
        std::cout << (tree_to_print.root)-> val << std::endl;

        // printing the right side
        std::cout << ((tree_to_print.root)->right)-> val << std::endl;


    }

};


void Tree::insert_node(int inserted_val) {

    int value_at_root = (this->root) -> val;
    if (  value_at_root == NULL  ) {

        // The tree is empty, creating the first node
        ( value_at_root ) = inserted_val;
        std::cout << "--DECLR: Root Node Created!" << std::endl;


    } else {

        if (  inserted_val < ( (this->root) -> val )  ) {

            // The new Node needs to be even before the root node
            Node * tmp = new Node(inserted_val);

            tmp->left = this->root;

            this->root = tmp;


        }  else {

            // Some intricacy
        }


    }


}

int main() {
  /* code */
  return 0;
}
