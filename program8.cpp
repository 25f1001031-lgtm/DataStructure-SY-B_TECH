#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
    Node* prev;
};

// head pointer
Node* head = NULL;

// Insert at beginning
void insertAtBeginning(int x) {
    Node* n = new Node();
    n->data = x;
    n->next = head;
    n->prev = NULL;
    
    if (head != NULL)
        head->prev = n;

    head = n;
}

// Insert after a given key
void insertAtEnd(int key, int value){
    Node* temp = head;

    // find the key node
    while (temp != NULL && temp->data != key)
        temp = temp->next;

    if (temp == NULL) {
        cout << "Key not found." << endl;
        return;
    }

    Node* n = new Node();
    n->data = value;
    n->next = temp->next;
    n->prev = temp;

    if (temp->next != NULL)
        temp->next->prev = n;

    temp->next = n;
}

// Delete a node with given value
void deleteNode(int key) {
    Node* temp = head;

    while (temp != NULL && temp->data != key)
        temp = temp->next;

    if (temp == NULL) {
        cout << "Key not found." << endl;
        return;
    }

    if (temp->prev != NULL)
        temp->prev->next = temp->next;
    else
        head = temp->next;

    if (temp->next != NULL)
        temp->next->prev = temp->prev;

    delete temp;
}

// Display forward
void displayForward() {
    Node* temp = head;

    cout << "Forward: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Display backward
void displayBackward() {
    Node* temp = head;

    if (temp == NULL) return;

    // go to last node
    while (temp->next != NULL)
        temp = temp->next;

    cout << "Backward: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main() {
    insertAtBeginning(10);
    insertAtBeginning(20);
    insertAtBeginning(30);

    insertAtEnd(20, 15);   // insert 15 after 20
    deleteNode(10);        // delete node 10

    displayForward();
    displayBackward();

    return 0;
}