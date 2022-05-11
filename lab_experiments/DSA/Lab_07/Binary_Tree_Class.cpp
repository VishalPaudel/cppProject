
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

    Tree(const int & val=0) {
        (this->root)->data = val;
    }
};

int main() {

    Tree aryan(5);
    return 0;
}
