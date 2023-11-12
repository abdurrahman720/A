#include <iostream>
#include <string>

using namespace std;

// Define a structure to represent a node in the linked list
struct Node {
    string name;
    int id;
    Node* next;
};

// Function to display the data of the linked list
void displayLinkedList(Node* head) {
    Node* current = head;
    cout << "Linked List Data:" << endl;
    while (current != nullptr) {
        cout << "Name: " << current->name << ", ID: " << current->id << endl;
        current = current->next;
    }
}

int main() {
    // Initialize the linked list with five nodes
    Node* head = nullptr;
    Node* current = nullptr;
    for (int i = 1; i <= 5; i++) {
        Node* newNode = new Node;
        newNode->name = "Name" + to_string(i);
        newNode->id = i;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
            current = newNode;
        } else {
            current->next = newNode;
            current = newNode;
        }
    }

    // Display the data of the linked list
    displayLinkedList(head);

    // Clean up and release memory
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
