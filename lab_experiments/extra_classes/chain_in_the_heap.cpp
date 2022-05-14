
#include <iostream>

using namespace std;


class Node {
public:
    int data = 5;  // a fixed value for every node
    Node *next = nullptr;
    //  Node next_new;  // Creates a recursion, resulting in a syntax error


};


int main() {

    Node *n1ptr = new Node, *n2ptr = new Node;

    n1ptr->data = 3;
    n1ptr->next = n2ptr;

    delete n1ptr;
    delete n2ptr;

    return 0;

}
