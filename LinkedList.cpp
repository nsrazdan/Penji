// Simple CPP code to demonstrate simple LinkedList
// writen by Nikhil Razdan
#include <iostream>

// Class to represent Node
class Node {
    public:
        int data;
        Node* next;
        Node(int data): data(data) {}
};

// Class to represent LinkedList with print functionality
class LinkedList {
    public:
        Node* head;
        void print();
};

// Print all nodes in linked list in order.
// Works by checking if current node is nullptr. If it is not, then we print
// out the data and set the current node to the next node. We initiaialize
// the current node to the head.
void LinkedList::print() {
    Node* n = head;
    while (n) {
        std::cout << n->data << std::endl;
        n = n->next;
    }
}

int main() {
    // creating linked list
    LinkedList* list = new LinkedList();
    
    /*
        We only have a head pointer, with no nodes, so our linked list looks like:
        head -> nullptr
    */
    
    // creating nodes and initializing data
    Node* node_a = new Node(1);
    Node* node_b = new Node(2);
    Node* node_c = new Node(3);
    
    /*
        We have nodes with data, but none of them are linked.
        Hence, our list is still just a head.
        However, we have nodes as well
        head -> nullptr
        node_a -> nullptr
        node_b -> nullptr
        node_c -> nullptr
    */
    
    // initializing node's next member
    list->head = node_a;
    node_a->next = node_b;
    node_b->next = node_c;
    node_c->next = nullptr;
    
    /*
        Now we finally have our next values iinitialized.
        Thus, our list looks like:
        head -> node_a -> node_b -> node_c -> nullptr
    */
    
    // If we print every member of the list, we can see this
    list->print();
    
    /*
        This will print out 1 2 3. Download the code and try it yourself!
    */
    
    // Always remember to delete all allocated memory
    delete node_a;
    delete node_b;
    delete node_c;
    delete list;
    return 0;
}

