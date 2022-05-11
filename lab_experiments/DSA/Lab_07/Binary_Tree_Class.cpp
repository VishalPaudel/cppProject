
// Author: Vishal Paudel
// I have not been able to figure this code out, especially the traversing
// and printing.

#include <iostream>

using namespace std;


class Node {

    friend class Tree;

private:
    int data;

    Node *left; Node *right;

    Node(int data_input = 0, Node *left_input = nullptr, Node *right_input = nullptr) {
        data = data_input;
        left = left_input;
        right = right_input;
    }
};


class Tree {

private:

    Node *root = new Node;

public:

    Tree(const int & val=0 /* for efficiency */) {
        (this->root)->data = val;
    }
};

int main() {

    Tree Plaksha(5);
    Tree Ashoka(7);
    return 0;
}
