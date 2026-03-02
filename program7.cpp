#include<iostream>
using namespace std;
 struct Node {
    int data;
    Node* next;
 };
 Node* head = NULL;
 // Function to insert a new node at the end of the linked list
 void insert(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
 }
 //Function  to display the linked list
 void display() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
 }
 int main() {
    int n, value;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> value;
        insert(value);
    }

    cout << "Linked list elements:\n";
    display();

    return 0;